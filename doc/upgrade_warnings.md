# PDFSolid Conversion SDK for C++ 1.3.0 Upgrade Warnings

This document lists the considerations that developers should be aware of when upgrading from previous versions to PDFSolid Conversion SDK for C++ 1.3.0. Some interfaces and default behaviors have changed, so changes to your code or deployment files may be necessary to make sure your project compiles and produces the expected results with the new version.

**Upgrading to version 1.3.0 from version 1.2.0**

If you are upgrading from version 1.2.0 to version 1.3.0, please note the following changes between 1.2.0 and 1.3.0.

**Important: Recompile your project with the 1.3.0 headers.** `ConvertOptions` has new members, so programs compiled against the previous version are no longer binary compatible with the new library.

**Important: The default table recognition model profile has changed.** 1.2.0 used the high-accuracy model by default, while 1.3.0 uses the balanced model by default. After upgrading, even without any code change, table recognition results and resource usage will differ from 1.2.0. If you want to keep the same behavior as 1.2.0, explicitly select the high-accuracy profile and load the table extension package `table_legacy.model` (see the description of the `table_recognition_accuracy` option below).

**Important: Upgrade the model file together with the SDK.** The `documentai.model` of 1.2.0 and earlier does not contain the resources required by the balanced profile, while the 1.3.0 model file keeps the same name, so **continuing to use the old file causes model loading to fail. Overwrite the old file in your deployment directory with the `documentai.model` bundled in the 1.3.0 SDK package.** The SDK package bundles the base model `documentai.model` by default, so the default configuration needs no extra download; download the corresponding extension model packages only when you need extended capabilities such as high-accuracy tables, high-accuracy OCR, or orientation correction. For the contents and purposes of the model packages, see "Model Package Reference" in the "Set DocumentAI Model" chapter of the Developer Guide.

In the LibraryManager class:

1. `SetDocumentAIModel` now supports incremental loading of model packages. The base package `documentai.model` provides layout analysis, balanced-profile table recognition, and basic OCR; capabilities such as high-accuracy tables, high-accuracy OCR, and orientation correction are provided by extension packages. Each call loads only the capabilities contained in that file and merges them with the capabilities already loaded, without replacing them. Sample code:

   ```cpp
   LibraryManager::SetDocumentAIModel("path/documentai.model", -1);
   LibraryManager::SetDocumentAIModel("path/table_legacy.model", -1);
   ```

   If a package fails to load, the capabilities already loaded are kept and a specific error code is returned.

2. The timing of release and configuration has changed. If synchronous conversion tasks are still running when `LibraryManager::Release` is called, the release is deferred until the last task returns, and new tasks are refused in the meantime; `ReleaseDocumentAIModel` likewise waits for running tasks to return before cleaning up. While tasks are running or a release is still pending, reconfiguring the DocumentAI model is refused and `ErrorCode::e_ErrConverting` is returned, and `LibraryManager::GetPageCount` returns `-1` while library resources are being released or configured. Unload the SDK only after all conversion calls have returned, and load or reload models only after all conversion tasks have finished.

3. The new `LibraryManager::GetLicenseType` interface returns the type of the currently verified license: `LicenseType::e_Unknown`, `LicenseType::e_Trial`, or `LicenseType::e_Formal`. It does not verify the license again and does not consume page quota. Sample code:

   ```cpp
   LicenseType type = LibraryManager::GetLicenseType();
   if (type == LicenseType::e_Trial) {
     // Trial license.
   }
   ```

In the CPDFConversion class:

1. Word to PDF is added: the `StartWordToPdf` interface provides one group of overloads with default options and one group that takes `ConvertOptions` (each with a `const char*` and a `const wchar_t*` path version), and an optional parameter `char* diagnostics` for obtaining diagnostic information about features that may affect fidelity. The buffer must be 8192 bytes, is allocated by the caller, and receives UTF-8 diagnostic text written by the SDK. Sample code:

   ```cpp
   const size_t kDiagnosticsSize = 8192;
   char diagnostics[kDiagnosticsSize] = {0};
   CPDFConversion::StartWordToPdf("input.docx", "output.pdf", &callback, diagnostics);
   ```

   When the document contains features that may affect fidelity, `ErrorCode::e_ErrUnsupportedFeature` (95) is returned. The PDF is usually still produced in this case, so **do not assume that no output file exists just because 95 is returned**; check `output=produced` or `output=not_produced` on the first line of the diagnostic text instead. If the conversion itself fails, the real error code is returned and takes precedence over 95; if the diagnostics buffer cannot hold the complete diagnostics, `ErrorCode::e_ErrOutOfMemory` is returned.

2. Word to PDF shares `ConvertOptions` with PDF conversion; only the bookmark mode and the page range take effect: `word_pdf_bookmark_mode` is `WordPdfBookmarkMode::e_None` (default, no bookmarks), `WordPdfBookmarkMode::e_Headings` (one bookmark per heading), or `WordPdfBookmarkMode::e_WordBookmarks` (one bookmark per Word bookmark); `page_ranges` specifies the pages to output, e.g. `"1-3,5,7-9"`, and an empty value outputs every page. Sample code:

   ```cpp
   ConvertOptions opt;
   opt.word_pdf_bookmark_mode = WordPdfBookmarkMode::e_Headings;
   std::snprintf(opt.page_ranges, sizeof(opt.page_ranges), "%s", "1-3,5,7-9");
   CPDFConversion::StartWordToPdf("input.docx", "output.pdf", opt, &callback);
   ```

3. The conversion behavior for image input has changed:
   - When an image is converted to TXT or CSV-format Excel and OCR is not enabled, `ErrorCode::e_ErrUnsupportedFeature` (95) is now returned; enable `enable_ocr`.
   - With OCR off (the default), an image converted to a format that can carry images produces an output document that contains the complete source image and no recognized text.
   - `CPDFConversion::StartPDFToImage` accepts both PDF and supported image input. Image-to-image conversion does not run OCR or layout analysis and does not depend on any model; multi-page TIFF is converted frame by frame, each selected frame produces one image, and `page_ranges` selects the frames.

In the conversion options (ConvertOptions):

1. New option `table_recognition_accuracy` selects the table recognition accuracy. **The default is `TableRecognitionAccuracy::e_Balanced`, which differs from 1.2.0, where the high-accuracy profile was the default.** Selecting `TableRecognitionAccuracy::e_HighAccuracy` requires `table_legacy.model` to be loaded; if it is not loaded, the conversion still succeeds, but tables are recognized with the rule-based method instead, so the result differs from the high-accuracy result. To keep the same behavior as 1.2.0, change the original:

   ```cpp
   ConvertOptions opt;
   CPDFConversion::StartPDFToWord("input_file", "password", "output_path.docx", opt);
   ```

   to:

   ```cpp
   LibraryManager::SetDocumentAIModel("path/documentai.model", -1);
   LibraryManager::SetDocumentAIModel("path/table_legacy.model", -1);

   ConvertOptions opt;
   opt.table_recognition_accuracy = TableRecognitionAccuracy::e_HighAccuracy;
   CPDFConversion::StartPDFToWord("input_file", "password", "output_path.docx", opt);
   ```

   This member is placed after `enable_ai_table_recognition`; if your code uses aggregate initialization of `ConvertOptions` that relies on member order, switch to assigning the members one by one.

2. New option `enable_auto_page_size`: when enabled, the output page size of image conversion is matched to the nearest standard paper size based on the image resolution; when disabled, one image pixel becomes one page point. It only takes effect for image input; the default is `false`.

3. New options `custom_page_width` and `custom_page_height`, in points (1 point = 1/72 inch). When both are set, they specify the output page size directly and take precedence over `enable_auto_page_size`; the image is scaled proportionally to fit inside the page without cropping. They only take effect for image input; the default is `0`. Sample code:

   ```cpp
   ConvertOptions opt;
   opt.enable_auto_page_size = true;
   CPDFConversion::StartPDFToWord("input.png", "", "path/output.docx", opt);

   opt.custom_page_width = 595.28f;
   opt.custom_page_height = 841.89f;
   CPDFConversion::StartPDFToWord("input.png", "", "path/output_a4.docx", opt);
   ```

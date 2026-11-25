# 1. Overview

PDFSolid Conversion SDK is a high-performance library designed for extracting and transforming the data within your PDF files, such as text, images, tables, links, and annotations, into various file formats. Our Conversion SDK retains the original document layout and the properties of the file data, ensuring a seamless document conversion experience.

Effortlessly integrate the PDFSolid Conversion SDK into your projects in just a few steps, and enable the following file format conversions:

- Convert PDF to Word (.docx)
- Convert PDF to Excel (.xlsx)
- Convert PDF to PowerPoint (.pptx)
- Convert PDF to HTML (.html)
- Convert PDF to CSV (.csv)
- Convert PDF to Image (.png, .jpg, .jpeg,.jpeg2000, .bmp, .tiff, .tga, .gif, .webp)
- Convert PDF to Plain Text (.txt)
- Convert PDF to Rich Text Format (.rtf)
- Convert PDF to Searchable PDF (.pdf)
- Convert PDF to OFD (.ofd)
- Convert PDF to Structured Data (.json)
- Convert PDF to Markdown (.md)
- Convert Word to PDF (.pdf)
- Convert supported image inputs to images, including individual frames of multi-page TIFF files.

Harness the power of PDFSolid Conversion SDK and take your document processing to the next level with intelligent tools designed for accuracy and efficiency. To enhance your format conversion results, PDFSolid Conversion SDK offers AI-powered document tools with the following capabilities:

- Optical Character Recognition (OCR)
- Layout Analysis
- Table Recognition


## 1.1 Why PDFSolid Conversion SDK

- Mature Technology

  With years of technology accumulation, we have established a complete mechanism of product iteration to offer a continuous guarantee for product competitiveness.

- Complete PDF and Format Conversion Functionalities

  Our comprehensive features can meet diverse needs and are easy for our customers to use without training costs.

- High-quality Service

  professional service and technical support to quickly respond to users' feedback through onsite service or remote support like telephone, email, etc.

- Independent Intellectual   

  Property Rights
  Our technology is independent and compliant with ISO, helping enterprises conduct international business without considering copyright risks.


## 1.2 PDFSolid Conversion SDK

The PDFSolid Conversion SDK is designed to facilitate the effortless conversion of PDF files into various other formats, all while preserving the original layout and formatting of the documents. In this guide, we will explore the PDFSolid Conversion SDK and demonstrate how to utilize it within your C++ projects. 

## 1.3 License & Trial

The PDFSolid Conversion SDK is a commercial SDK that requires a license to grant developers the right to develop and distribute their applications. In development mode, each license is only valid for one device ID. PDFSolid Conversion SDK provides flexible licensing models, please contact [our marketing team](mailto:support@pdfsolid.com) for more information. However, even if you have a license, it is prohibited to distribute any documents, sample code, or source code of the PDFSolid Conversion SDK to any third parties.

If you do not have a License, please feel free to contact the PDFSolid Conversion SDK Team (support@pdfsolid.com) to obtain a License to try the PDFSolid Conversion SDK.

# 2. Get Started

## 2.1 Requirements
Before starting, please make sure that you have already met the following prerequisites.

### 2.1.1 Get PDFSolid Conversion SDK License Key

PDFSolid Conversion SDK provides two types of license key: 30-day free trial license, and commercial license.

#### How to Get Free Trial License

Contact our sales team (support@pdfsolid.com) and we'll send you a 30-day free trial license for PDFSolid Conversion SDK.

#### How to Get Commercial License

PDFSolid Conversion SDK is a commercial SDK that requires a license for application release. Any documents, sample code, or source code distribution from the released package of PDFSolid Conversion SDK to any third party is prohibited.

**Contact Sales**

To get commercial license for PDFSolid Conversion SDK, feel free to contact our sales team (support@pdfsolid.com) .

For C++ Conversion SDK, commercial license must be bound to your developer device ID (How to find the developer device ID ), and each license is only valid for one device ID in development mode.

### 2.1.2 Download Conversion SDK

Contact us (support@pdfsolid.com) to obtain the PDFSolid Conversion SDK for C++.

### 2.1.3 System Requirements



| Development Platform | System Requirements                                          | Development Environment       | Notice                                                       |
| -------------------- | ------------------------------------------------------------ | ----------------------------- | ------------------------------------------------------------ |
| Windows              | - Windows 7, 8, 10, and 11 (32-bit, 64-bit)<br />- Need to support C++ Version 11 or higher. | Visual Studio 2022 or higher. | Samples have been tested on Windows 10 and 11.               |
| Linux                | - Linux x64.<br />- Need to support C++ Version 11 or higher. | /                             | Samples have been tested on Ubuntu 20.04.                    |
| Mac                  | - macOS 11.0 or later (Intel x86_64 and Apple Silicon arm64).<br />- Need to support C++ Version 11 or higher. | Xcode 13.0 or higher.         | Samples have been tested on Mac Intel and Mac Apple Silicon. |

## 2.2 SDK Package Structure

You can contact us (support@pdfsolid.com) to get our PDF format conversion SDK package. The PDFSolid Conversion SDK for C++ contains the following files:

- ***"doc"*** - API reference and developer guide.
- ***"include"*** - header files for PDFSolid Conversion SDK API.
- ***"lib"*** - Include the PdfSolidConversion dynamic library (x86 and x64).
- ***"resource"*** - Include resource files required by the SDK, and the base DocumentAI model ***"models/documentai.model"*** that is bundled by default.
- ***"samples"*** - A folder containing sample projects.
- ***"legal.txt"*** - Legal and copyright information.
- ***"release_notes.txt"*** - Release information.

```text
PDFSolid_Conversion_linux_cpp_1_3_0/
  README.md
  doc/
  include/
  legal.txt
  lib/
  release_notes.txt
  resource/
  samples/
```

**About AI model files:** The SDK package bundles the base model `documentai.model` by default. With the default configuration (layout analysis, OCR, and balanced-profile table recognition), no additional download is required. You only need to download the corresponding extension model packages when you need extended capabilities such as higher-accuracy table recognition, higher-accuracy OCR, or document orientation classification and correction. See "Model Package Reference" in [3.2 Set DocumentAI Model](#32-set-documentai-model) for details.

## 2.3 Apply the License Key
If you don’t have a license key, please check out [how to obtain a license key](#211-get-pdfsolid-conversion-sdk-license-key).

PDFSolid Conversion SDK currently supports offline authentication to verify license keys.

*Learn about:*

What is the authentication mechanism of PdfSolidConversion's license?

### 2.3.1 Copy the License Key

Accurately obtaining the license key is crucial for the application of the license.

1. In the email you received, locate the XML file containing the license key.
2. Open the XML file, and determine the license type based on the <type> field. If <type>online</type> is present, it indicates an online license. If <type>offline</type> is present or if the field is absent, it indicates an offline license.

**Online License**：

```xml
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<license version="1">
    <platform>windows</platform>
    <starttime>xxxxxxxx</starttime>
    <endtime>xxxxxxxx</endtime>
    <type>online</type>
    <key>LICENSE_KEY</key>
</license>
```
**Offline License**：

```xml
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<license version="1">
    <platform>windows</platform>
    <starttime>xxxxxxxx</starttime>
    <endtime>xxxxxxxx</endtime>
    <key>LICENSE_KEY</key>
</license>
```

3. Copy the value located at the LICENSE_KEY position within the <key>LICENSE_KEY</key> field. This is your license key.

### 2.3.2 Apply the License Key
You can perform offline authentication using the following method:

```c++
// Include the header file.
#include "pdfsolid_conversion.h"

// Include namespaces.
using namespace pdfsolid;
using namespace pdfsolid::base;
using namespace pdfsolid::common;
using namespace pdfsolid::conversion;

// Verify the license.
const char* license = " ";
ErrorCode code = LibraryManager::LicenseVerify(license, "device_id", "app_id");
if (code != ErrorCode::Success) {
    return false;
}

// Initialize conversion resources.
const char* resource_path = " ";
LibraryManager::Initialize(resource_path);
```

## 2.4 How to Run a Demo

From the Linux package root, run:

```sh
bash samples/demo/RunDemo.sh --office
```

The demo reads `resource/license/license.xml` and `samples/input_files/word.docx`. In `samples/output_files/`, `word_to_pdf.pdf` uses the defaults (all pages, no bookmarks); `word_to_pdf_bookmarks.pdf` selects pages `1-2` and creates bookmarks from headings.

# 3. Conversion Guides

In addition to PDF export, the SDK converts Word (`.docx`) to PDF with optional page ranges and bookmarks. See [Convert Word to PDF](#324-convert-word-to-pdf).

PDFSolid Conversion SDK allows developers to use a simple API to convert PDF to commonly used file formats such as Word, Excel, PowerPoint, HTML, CSV, PNG, JPEG, RTF, TXT, Searchable PDF, OFD, JSON, and Markdown. It provides a wide range of customized conversion options, such as whether to include images or annotations in PDF documents, whether to enable OCR, whether to enable layout analysis, and more.

## 3.1 Initialize Library Resources
**Overview**

Initialize the necessary file and memory resources required by the PDFSolid Conversion SDK.

**Notes**

- You must initialize SDK resources before calling any conversion interface.
- When using OCR, Layout Analysis, Table Recognition, PDF to Searchable PDF, or PDF to OFD, make sure the DocumentAI model resources in the `resource` directory are available.
- Lifecycle: if synchronous conversion tasks are still running when `LibraryManager::Release` is called, the cleanup is deferred until the last task returns, and new tasks are refused in the meantime. Do not unload the SDK until all conversion calls have returned. See [3.25 Releasing Library Resources](#325-releasing-library-resources).

**Example**

```c++
// Initialize SDK resources.
LibraryManager::Initialize("resource");
```

## 3.2 Set DocumentAI Model

**Overview**

Before using OCR, Layout Analysis, Table Recognition, PDF to Searchable PDF, or PDF to OFD, you need to set the DocumentAI model path first. The SDK package bundles the base model `documentai.model` by default; with the default configuration you only need to pass its path to `SetDocumentAIModel`, and no extra download is required.

`SetDocumentAIModel` supports an optional `gpu_id` parameter used to specify the GPU device index for the AI model. When `gpu_id` is `-1`, GPU acceleration is disabled.

**Incremental loading of model packages:** Models are delivered as packages. Each call to `SetDocumentAIModel` loads only the capabilities contained in that file and **merges** them with the capabilities already loaded; it does **not replace** them, and there is no required loading order. If a package fails to load, **the capabilities that were already loaded are kept**, and the interface returns a specific error code instead of silently degrading.

**Example**

```c++
// Load the base package.
LibraryManager::SetDocumentAIModel("path/documentai.model", -1);

// Load an extension package when you need the extended capability.
// Capabilities that are already loaded are kept.
LibraryManager::SetDocumentAIModel("path/table_legacy.model", -1);
```

Calling `ReleaseDocumentAIModel()` releases all loaded models; you must load them again before using AI features. While conversion tasks are running, or while a release is still pending, reconfiguring the DocumentAI model is refused and `e_ErrConverting` is returned. Load or reload models only after all conversion tasks have finished.

### **Model Package Reference**

| File | Size | Purpose | How to obtain / When it is needed |
|---|---|---|---|
| `documentai.model` | about 230 MB | Base package: layout analysis, table recognition (balanced profile), and all basic OCR languages | Bundled in the SDK package by default; required for any AI feature (layout analysis, OCR, table recognition) |
| `table_legacy.model` | about 270 MB | Table extension package: resources such as wired/wireless table detection required by the high-accuracy profile | Download separately; needed only when `table_recognition_accuracy` is set to `e_HighAccuracy`; not needed for the default balanced profile |
| `ocr_server.model` | about 139 MB | Higher-accuracy OCR enhancement package, covering Chinese, English, Japanese, and other languages | Download separately; needed when you require higher OCR accuracy |
| `document_process.model` | about 37 MB | Document orientation classification and skew correction | Download separately; needed when you use `enable_document_orientation_classification` (orientation detection) or `enable_document_dewarp` (correction) |

**You do not need to download any extension package if you do not need the extra capabilities**: the default configuration only uses the `documentai.model` bundled in the SDK package.

**Version matching:**

- A model package must match the SDK version. The `documentai.model` bundled in the SDK package is the 1.3.0 version; please also download the 1.3.0 version of any extension package.
- The `documentai.model` of 1.2.0 and earlier does **not** contain the resources required by the balanced profile, while 1.3.0 keeps the same file name. **If you copied an old `documentai.model` into your own deployment directory or project, overwrite it with the new file from the 1.3.0 SDK package when upgrading; do not keep using the old file with the same name.** Loading an old model returns an error and does not fall back to the high-accuracy profile automatically.
- Do not replace only the dynamic library or only the model file; update them together as a set.

**Troubleshooting:**

| Symptom | Possible cause |
|---|---|
| `SetDocumentAIModel` returns an error | Wrong path; the model file does not match the SDK version; the file is incomplete (interrupted download) |
| Tables look different from (or worse than) expected after `table_recognition_accuracy` is set to `e_HighAccuracy` | `table_legacy.model` has not been loaded (tables fell back to rule-based recognition) |
| Conversion returns `e_ErrLicenseOCRPermissionDeny` (29) | The license does not include OCR permission; unrelated to the models |

### **Set AI Model Instance Count**

If you need to control the number of Layout Analysis and Table Recognition model instances, call the following interface:

```c++
LibraryManager::SetDocumentAIModelCount(1, 1);
```

The first parameter indicates the number of Layout Analysis model instances, and the second parameter indicates the number of Table Recognition model instances.

### **Use Your Own AI Engine (SDK v1.1.0+)**

This option is available only in SDK v1.1.0 or later. If you prefer to run OCR, Layout Analysis, or Table Recognition with your own model or a third-party service instead of the bundled DocumentAI model, the SDK exposes callback hooks on `CConvertCallback` that let you supply the results as JSON. See [3.12 Use Custom AI Models via Callbacks](#312-use-custom-ai-models-via-callbacks) for details. When all three capabilities you need are covered by your own callbacks, `SetDocumentAIModel` does not have to be called.

## 3.3 OpenVINO Acceleration Package

### **Overview**

If your device uses an Intel processor, you can deploy the optional OpenVINO acceleration package to speed up AI recognition such as OCR. Once the package is deployed, the SDK automatically uses the OpenVINO backend when it loads the DocumentAI model, **with no code changes and no extra settings**.

### **Applicability**

- Operating system: Windows x64.
- Processor: Intel CPU.
- The package only affects the speed of AI inference (such as OCR recognition). It does not change any conversion API or conversion option.

### **Get the Package**

Download the OpenVINO acceleration package that matches your SDK version. The package must match the SDK version; do not mix files from different versions.

### **Deployment**

1. Extract the downloaded package.
2. Copy **all files** in the package to the directory that contains the SDK dynamic libraries, that is, the same directory as the `onnxruntime` runtime library.
3. Load the model with `LibraryManager::SetDocumentAIModel` and run conversions as usual. The SDK uses the OpenVINO backend automatically.

### **Notice**

- If the package is missing, incomplete, or does not match the SDK version, the SDK automatically uses the default CPU backend. Conversion continues normally and no error is reported for this reason.
- Deploy the whole package. Do not copy or replace only some of its files.
- Deploy the package before the model is loaded. A model that is already loaded does not switch backends, so restart the program or reload the model after deployment.
- The OpenVINO backend uses more memory. The actual speed-up depends on the processor model, document content, and thread settings, and not every scenario becomes faster.
- To stop using acceleration, delete these files. The SDK then returns to the default CPU backend.

## 3.4 Get Conversion Progress

PDFSolid Conversion SDK obtains conversion progress through the callback functions in `CConvertCallback`. The following example demonstrates how to get the conversion progress while performing a PDF to Word task:

```c++
void Progress(int current_page_count, int total_page_count)
{
  std::cout << "progress: " << current_page_count << " / " << total_page_count << std::endl;
}

ConvertOptions opt;
CConvertCallback callback = {};
callback.handle = nullptr;
callback.progress = Progress;
callback.cancel = nullptr;

CPDFConversion::StartPDFToWord("input.pdf", "password", "path/output.docx", opt, &callback);
```

The `handle` field is maintained internally by the SDK during conversion, so it should be initialized to `nullptr` when passed in.

## 3.5 Cancel Conversion Task

PDFSolid Conversion SDK supports interrupting your ongoing conversion task at any time through the `cancel` callback in `CConvertCallback`. When the `cancel` callback returns `true`, the current conversion task stops as soon as possible.

```c++
bool Cancel()
{
  return false;
}

ConvertOptions opt;
CConvertCallback callback = {};
callback.handle = nullptr;
callback.progress = nullptr;
callback.cancel = Cancel;

CPDFConversion::StartPDFToWord("input.pdf", "password", "path/output.docx", opt, &callback);
```

If you need to cancel the conversion at a specific time, you can return `true` from `Cancel` based on external state.

## 3.6 Select Page Range for Conversion

PDFSolid Conversion SDK supports converting a specified page range. When an empty string is passed, all pages will be converted. If the page range exceeds one page, you can also choose to enable the `output_document_per_page` option to output each PDF page as a separate file. The following example demonstrates how to specify a page range when performing a conversion task:

```c++
ConvertOptions opt;
opt.output_document_per_page = true;
opt.page_ranges = "1-3,5,7-9";
```

## 3.7 Contain Image and Annotation Options

### **Overview**

In the process of converting PDF documents into various formats, PDFSolid Conversion SDK offers two additional options for users: one option to determine whether images are included in the generated document, and another to decide if annotations from the PDF file are to be retained.

- With the "Include Images" option enabled, PDFSolid Conversion SDK will extract the images from the PDF document and embed them in the corresponding pages and positions in the output file. For areas with overlapping images, PDFSolid Conversion SDK merges these images into one and embeds it into the exact location on the corresponding page of the output file.
- When the "Include Annotations" option is selected, most annotations are converted into raster images and embedded at the respective positions within your document. However, certain types of annotations, such as highlights, underlines, strikeouts, and squiggly, are converted into their respective formatting equivalents in the converted Word, PPT, and HTML documents, and are marked over the corresponding text. It is important to note that the conversion won't be 100% accurate in every instance.

In the PDFSolid Conversion SDK, the options of including image and annotation are commonly used in the following format conversion:

- PDF to Word
- PDF to Excel
- PDF to PowerPoint
- PDF to HTML
- PDF to RTF
- Extract PDF to JSON
- Extract PDF to Markdown

### **About Text Markup Annotation**

- **Highlight:** When converting PDF to Word format keeping the highlight markups, it is important to note that Microsoft Word only supports 15 highlighter colors. To approximate the original document's appearance as closely as possible, text in the Word document will be marked with a text background color that matches the color of the original document's highlight annotation. For conversions to Microsoft PPT format, the native highlighting feature within the format is used to mark the text. In the case of converting to HTML format, a unique `<span>` tag is created for the marked text, and the background style is set to match the color of the corresponding annotation in the original document.
- **Underlines & Squiggly:** When converting PDF to Word or PPT formats keeping the underline and squiggly markups, the marked text will be marked with the same style in Microsoft Office. When converted to HTML format, the marked text will be styled to display the same effect. However, if a paragraph of text in the original document is marked by both underline and squiggly, then the text will only be marked with one type (Because squiggly is actually a type of underline in Word, PPT, and HTML formats).

- **Strikeout:** When converting strikeout markups to Word and PowerPoint formats, the marked text will be added with a strikeout natively supported by Microsoft Office. However, in these two file formats, the color of the strikeout itself cannot be the same as that in the original PDF document because the strikeout color in Word and PPT will only change according to the color of the marked text font itself. When converted to HTML format, the same strikeout color as the original document will be displayed.

### **Sample**

This Sample demonstrates how to use the PDFSolid Conversion SDK to convert a PDF document to a Word document with the selected options: Include images and annotations.

```c++
ConvertOptions opt;
// Setting contains image and contains Annotation.
opt.contain_image = true;
opt.contain_annotation = true;
CPDFConversion::StartPDFToWord("input.pdf", "password", "path/output.docx", opt);
```

## 3.8 Page Layout Mode

In certain formats, the page layout mode plays a key role in the quality of the converted document. PDFSolid Conversion SDK supports two layout modes: Flow Layout and Box Layout.

- **Flow Layout:** This layout uses paragraph indentations, columns, and tab positions to adjust the content. Its main advantage is flexibility; content can flow automatically as the document is edited, and it adapts to various screen sizes on different devices. This layout also supports structured maintenance and can implement consistent global formatting through style templates (e.g., titles, body text). Common use cases include documents that are frequently modified, such as reports, manuals, and dynamic tables.
- **Box Layout:** Based on the PDF's "digital paper" model, this layout accurately positions every element (text, images, tables) on the page using a coordinate system (e.g., text is positioned 5 cm from the top and 3 cm from the left). The main advantage is high-precision rendering, which ensures consistency across different platforms. This layout is particularly useful for documents requiring precise reproduction, such as contracts, design drafts, and academic papers.

In the PDFSolid Conversion SDK, page layout modes are commonly used in the following format conversions:

- PDF to Word
- PDF to HTML

### **Sample**

This example demonstrates how to convert a PDF document to Word with Flow Layout and Box Layout:

```c++
ConvertOptions opt;
// Set Flow Layout mode.
opt.page_layout_mode = PageLayoutMode::e_Flow;
CPDFConversion::StartPDFToWord("input.pdf", "password", "path/output.docx", opt);

// Set Box Layout mode.
opt.page_layout_mode = PageLayoutMode::e_Box;
CPDFConversion::StartPDFToWord("input.pdf", "password", "path/output.docx", opt);
```

## 3.9 OCR 

### **Overview**

OCR (Optical Character Recognition) is the process of converting images of typed, handwritten, or printed text into machine-encoded text.

OCR is commonly used for text recognition and extraction from the following types of documents:

- Non-editable scanned PDF files.
- Photographs of documents.
- Scene photos such as advertising layouts, signboards, etc.
- Identification cards, passports, vehicle license plates, and other official plates.
- Invoices, bills, receipts, and other financial documents.

The following features support OCR:

- PDF to Word
- PDF to Excel
- PDF to PowerPoint (PPT)
- PDF to HTML
- PDF to Rich Text Format (RTF)
- PDF to Text (TXT)
- PDF to CSV
- PDF to Searchable PDF
- Extract PDF to JSON
- Extract PDF to Markdown

OCR Language Support of PDFSolid Conversion SDK:

| Script / Notice | Language (Native)              | Language (In English) |
| --------------- | ------------------------------ | --------------------- |
| Latn; American  | English                        | English               |
| Latn; Canadian  | Français canadien              | French                |
| Hans/Hant       | 中文简体                       | Chinese (Simplified)  |
| Hans/Hant       | 中文繁体                       | Chinese (Traditional) |
| Jpan            | 日本語                         | Japanese              |
| Kore            | 한국어                         | Korean                |
| Latn            | Deutsch                        | German                |
| Latn            | Српски (латиница)              | Serbian (latin)       |
| Latn            | Occitan, lenga d'òc, provençal | Occitan               |
| Latn            | Dansk                          | Danish                |
| Latn            | Italiano                       | Italian               |
| Latn; European  | Español                        | Spanish               |
| Latn; European  | Português (Portugal)           | Portuguese            |
| Latn            | Te reo Māori                   | Maori                 |
| Latn            | Bahasa Melayu                  | Malay                 |
| Latn            | Malti                          | Maltese               |
| Latn            | Nederlands                     | Dutch                 |
| Latn; Bokmål    | Norsk                          | Norwegian             |
| Latn            | Polski                         | Polish                |
| Latn            | Română                         | Romanian              |
| Latn            | Slovenčina                     | Slovak                |
| Latn            | Slovenščina                    | Slovenian             |
| Latn            | shqip                          | Albanian              |
| Latn            | Svenska                        | Swedish               |
| Latn            | Swahili                        | Swahili               |
| Latn            | Wikang Tagalog                 | Tagalog               |
| Latn            | Türkçe                         | Turkish               |
| Latn            | oʻzbekcha                      | Uzbek                 |
| Latn            | Tiếng Việt                     | Vietnamese            |
| Latn            | Afrikaans                      | Afrikaans             |
| Latn            | Azərbaycan                     | Azerbaijani           |
| Latn            | Bosanski                       | Bosnian               |
| Latn            | Čeština                        | Czech                 |
| Latn            | Cymraeg                        | Welsh                 |
| Latn            | Eesti keel                     | Estonian              |
| Latn            | Gaeilge                        | Irish                 |
| Latn            | Hrvatski                       | Croatian              |
| Latn            | Magyar                         | Hungarian             |
| Latn            | Bahasa Indonesia               | Indonesian            |
| Latn            | Íslenska                       | Icelandic             |
| Latn            | Kurdî                          | Kurdish               |
| Latn            | Lietuvių                       | Lithuanian            |
| Latn            | Latviešu                       | Latvian               |

### **Set OCR Language**

In the current mainline version, OCR languages should be passed through `ConvertOptions.languages` for each conversion task, rather than through a separate global interface.

```c++
ConvertOptions opt;
opt.enable_ocr = true;
opt.languages = {OCRLanguage::e_English};
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

### **OCR Options**
Different OCR options can be selected according to actual needs. Below are the currently supported OCR options.

- **e_InvalidCharacter:** Recognizes invalid/garbled characters in the PDF document through OCR, while normal characters are not processed by OCR.
- **e_ScanPage:** Recognizes scanned pages in the PDF document through OCR, while editable pages are not processed by OCR.
- **e_InvalidCharacterAndScanPage:** Recognizes both invalid characters and scanned pages in the PDF document through OCR.
- **e_All:** Recognizes all pages and characters in the PDF document through OCR.

### **Preserve Page Background**
When OCR is enabled, you can choose whether to enable the `contain_page_background_image` option. If this option is enabled, the original page background image of the PDF will be preserved. If it is disabled, the image result detected during page layout analysis will be retained.


### **Notice**

- The quality of the OCR result depends on the quality of the input image. If the input image has a low resolution, the OCR result quality will be affected. A good rule of thumb is that the more pixels in the character shapes, the better. If the character bounding box is smaller than 20x20 pixels, OCR quality will drop exponentially. The ideal image is a grayscale image with a resolution around 300 DPI.
- When performing OCR, make sure the OCR language setting matches the language in the PDF document to achieve the best OCR conversion quality.
- OCR functionality currently does not support operating systems lower than Windows 10.

### Converting Images to Other Document Formats

The OCR function also supports converting input images into Word, Excel, PPT, HTML, CSV, RTF, TXT, JSON, and other formats. This sample demonstrates how to use the PDFSolid Conversion SDK OCR function to convert image files to a DOCX file.

```c++
// Set the DocumentAI model path.
LibraryManager::SetDocumentAIModel("path/documentai.model");

ConvertOptions opt;
// Enable OCR option.
opt.enable_ocr = true;
// Set the OCR language for this task.
opt.languages = {OCRLanguage::e_English};
// Supports jpg, jpeg, png, bmp, tiff, and webp formats.
CPDFConversion::StartPDFToWord("input.png", "", "path/output.docx", opt);
```

#### **Set the Output Page Size**

When converting an image to a document, the following options control the output page size. **These options only take effect for image input**:

| Option | Default | Description |
|---|---|---|
| `enable_auto_page_size` | `false` | When enabled, the page size is derived from the image's own resolution and matched to the nearest standard paper size; when disabled, one image pixel becomes one page point |
| `custom_page_width` | `0` | Output page width in points (1 point = 1/72 inch); `0` means not specified |
| `custom_page_height` | `0` | Output page height in points |

- When both `custom_page_width` and `custom_page_height` are set, they specify the page size directly and **take precedence over `enable_auto_page_size`**. The size is used exactly as given (orientation included), and the image is scaled proportionally to fit inside the page without cropping.
- Common sizes: A4 is 595.28 x 841.89, and JIS B5 is 515.91 x 728.50.

```c++
ConvertOptions opt;
// Option 1: match the nearest standard paper size from the image resolution.
opt.enable_auto_page_size = true;
CPDFConversion::StartPDFToWord("input.png", "", "path/output.docx", opt);

// Option 2: specify the page size as A4 (takes precedence over enable_auto_page_size).
opt.custom_page_width = 595.28f;
opt.custom_page_height = 841.89f;
CPDFConversion::StartPDFToWord("input.png", "", "path/output_a4.docx", opt);
```

#### **Other Behaviors for Image Input**

- **Image-to-image conversion:** `StartPDFToImage` accepts both PDF and supported image input. Converting an image to another image format does not run OCR or layout analysis and does not depend on any model.
- **Multi-page TIFF:** Each selected frame produces one image, and `page_ranges` selects the frames. The output is not merged back into a multi-page TIFF.
- **Keep the original image when OCR is off:** When an image is converted to a format that can carry images and OCR is not enabled (the default), the output document contains the complete source image and no recognized text is generated.
- **TXT / Excel CSV:** These formats cannot carry images. When the input is an image and OCR is not enabled, `e_ErrUnsupportedFeature` (95) is returned; enable `enable_ocr` in that case.

```c++
ConvertOptions opt;
// Convert only frames 1 to 3 of a multi-page TIFF; each frame produces one image.
std::snprintf(opt.page_ranges, sizeof(opt.page_ranges), "%s", "1-3");
opt.image_type = ImageType::e_PNG;
CPDFConversion::StartPDFToImage("input.tiff", "", "path/output", opt);

// Converting an image to TXT requires OCR; otherwise e_ErrUnsupportedFeature is returned.
ConvertOptions txt_opt;
txt_opt.enable_ocr = true;
txt_opt.languages[0] = OCRLanguage::e_English;
txt_opt.language_count = 1;
CPDFConversion::StartPDFToTxt("input.png", "", "path/output.txt", txt_opt);
```

### **Sample**

This Sample demonstrates how to use the PDFSolid Conversion SDK OCR function to convert a PDF to DOCX file.

```c++
// Set the DocumentAI model path.
LibraryManager::SetDocumentAIModel("path/documentai.model");

ConvertOptions opt;
// Enable OCR option.
opt.enable_ocr = true;
opt.languages = {OCRLanguage::e_English};
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

## 3.10 Layout Analysis

### **Overview**

Layout analysis is the process of leveraging Artificial Intelligence (AI) technology to parse and understand the structure of a document's layout. Its primary goal is to extract text, images, tables, layers, and other data from the input documents.

Layout analysis has several common use cases, including:

- **Intelligent recognition of tables within PDF documents:** This feature is particularly useful for analyzing company financial statements, invoices, bank statements, experimental data, medical test reports, and more.
- **Smart extraction of text, images, or tables from PDF documents through layout analysis:** This functionality greatly aids in the analysis and extraction of information from identification cards, receipts, licenses, documents, ancient books, and other various types of files.

Features that support Layout Analysis:

- PDF to Word
- PDF to Excel
- PDF to PowerPoint (PPT)
- PDF to HTML
- PDF to RTF
- PDF to TXT
- PDF to CSV
- Extract PDF to JSON
- Extract PDF to Markdown

### **Notice**

- You need to load the DocumentAI model before using layout analysis, **or** plug in your own AI engine via the callbacks described in [3.12 Use Custom AI Models via Callbacks](#312-use-custom-ai-models-via-callbacks).
- When the OCR is enabled, the layout analysis is automatically enabled.
- AI table recognition is a separate stage controlled by its own option. See [3.11 Table Recognition](#311-table-recognition) for details.

### **Sample**

This Sample demonstrates how to use Layout Analysis to convert a PDF to a DOCX file.

```c++
// Set the DocumentAI model path.
LibraryManager::SetDocumentAIModel("path/documentai.model");

ConvertOptions opt;
// Enable layout analysis option.
opt.enable_ai_layout = true;
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

## 3.11 Table Recognition

### **Overview**

Table Recognition reconstructs the internal structure of tables detected during layout analysis, including rows, columns, merged cells, and cell boundaries, so that the converted document preserves the original tabular semantics instead of producing a flat grid of text fragments.

It is controlled by the independent option `enable_ai_table_recognition`, which is **enabled by default**. The table model is only invoked for table regions reported by layout analysis whose detection confidence is below the trusted threshold; high-confidence native PDF tables bypass the model to save inference time.

Typical scenarios that benefit from Table Recognition:

- **Borderless or partially bordered tables**, where ruling lines alone cannot describe the structure.
- **Tables with merged header cells, multi-row headers, or spanning cells**, such as financial statements, lab reports, and invoices.
- **Scanned tables processed by OCR**, where geometric reconstruction is required before cell-level data extraction.

Features that support Table Recognition:

- PDF to Word
- PDF to Excel
- PDF to PowerPoint (PPT)
- PDF to HTML
- PDF to RTF
- PDF to CSV
- Extract PDF to JSON
- Extract PDF to Markdown

### **Notice**

- Table Recognition runs only when layout analysis is active (i.e. `enable_ai_layout = true`, or implicitly when `enable_ocr = true`).
- You need to load the DocumentAI model before using Table Recognition, **or** plug in your own table model via the callbacks described in [3.12 Use Custom AI Models via Callbacks](#312-use-custom-ai-models-via-callbacks).
- Setting `enable_ai_table_recognition = false` disables the table model entirely; detected table regions will then fall back to geometric reconstruction from the underlying page objects.
- The number of Table Recognition model instances can be tuned via the second parameter of `LibraryManager::SetDocumentAIModelCount`. See [3.2 Set DocumentAI Model](#32-set-documentai-model).
- The model profile used by Table Recognition is selected with `table_recognition_accuracy`; see "Table Model Profile" below.

### **Table Model Profile**

Table Recognition provides two model profiles, selected per conversion task through `ConvertOptions.table_recognition_accuracy` (type `TableRecognitionAccuracy`):

| Profile | Description |
|---|---|
| `e_HighAccuracy` (0) | Prioritizes recognition accuracy and may use more resources. **The default behavior in 1.2.0** |
| `e_Balanced` (1, **default since 1.3.0**) | Balances recognition accuracy, resource usage, and throughput |

- **Default changed:** 1.2.0 used the high-accuracy profile by default, while 1.3.0 uses the balanced profile by default. After upgrading without changing any code, table recognition results and resource usage will differ from 1.2.0.
- The balanced profile only needs the base package `documentai.model`. **The high-accuracy profile requires the table extension package `table_legacy.model` to be loaded as well** (see [3.2 Set DocumentAI Model](#32-set-documentai-model)).
- Models of both profiles can be loaded at the same time; each conversion task uses the profile given by its own `table_recognition_accuracy`.
- If the requested profile has no corresponding model (for example, the high-accuracy profile without `table_legacy.model`), the conversion still succeeds, but tables are recognized with the rule-based method instead, so the result differs from that profile.
- A profile name does not guarantee better results for every document.

```c++
LibraryManager::SetDocumentAIModel("path/documentai.model", -1);
LibraryManager::SetDocumentAIModel("path/table_legacy.model", -1);

ConvertOptions opt;
// Use the high-accuracy profile (requires table_legacy.model to be loaded).
opt.table_recognition_accuracy = TableRecognitionAccuracy::e_HighAccuracy;
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

### **Sample**

This sample demonstrates how to convert a PDF to a DOCX file with Table Recognition enabled.

```c++
// Set the DocumentAI model path.
LibraryManager::SetDocumentAIModel("path/documentai.model");

ConvertOptions opt;
// Layout analysis must be enabled for Table Recognition to take effect.
opt.enable_ai_layout = true;
// Enable AI table recognition (enabled by default; set to false to disable).
opt.enable_ai_table_recognition = true;
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

## 3.12 Use Custom AI Models via Callbacks

### **Overview**

Starting with **SDK v1.1.0**, PDFSolid Conversion SDK exposes a callback-based extension point that lets you plug in your own AI inference engine for OCR, Layout Analysis, and Table Recognition. Instead of relying on the built-in DocumentAI model loaded by `LibraryManager::SetDocumentAIModel`, you can:

- Run inference with any model or runtime you choose (e.g. your in-house engine, PaddleOCR, a cloud OCR API).
- Return the result to the SDK as a JSON string with a well-defined schema.

When the relevant callback pair is registered on `CConvertCallback`, the SDK skips its built-in model invocation for that capability and consumes your JSON output instead. If a pair is left as `nullptr`, the SDK falls back to the built-in DocumentAI model (when available).

### **Callback Pairs**

Each AI capability uses **two callbacks**: a *trigger* (invoked by the SDK with the path to a page image saved as PNG in a temp directory) and a *result getter* (invoked by the SDK immediately afterwards to retrieve the JSON string).

| Capability         | Trigger callback | Result getter callback | Triggered when                                                                                  |
| ------------------ | ---------------- | ---------------------- | ----------------------------------------------------------------------------------------------- |
| OCR                | `ocr`            | `get_ocr_result`       | `enable_ocr = true`                                                                             |
| Layout Analysis    | `layout`         | `get_layout_result`    | `enable_ai_layout = true` or `enable_ocr = true`                                                |
| Table Recognition  | `table`          | `get_table_result`     | `enable_ai_table_recognition = true` **and** a table region is detected by layout analysis      |

Rules:

- The trigger receives a UTF-8 path to a PNG file. Return `true` if your inference succeeded, `false` to make the SDK ignore the result for that page.
- The getter must return a UTF-8 JSON C-string. The pointer must remain valid until the SDK has finished parsing it (typically until the next call to the same getter).
- Both callbacks for a capability must be set together. If only one is provided, the SDK falls back to the built-in path.
- Coordinates in your JSON must be in the **pixel space of the image the trigger received** (top-left origin, X right, Y down).
- Confidence filtering: OCR spans with `confidence < 0.1` and layout objects with `confidence < 0.45` are discarded by the SDK.

### **Sample**

```c++
#include "pdfsolid_conversion.h"
#include <string>

using namespace pdfsolid;
using namespace pdfsolid::common;
using namespace pdfsolid::conversion;

// Buffers owned by the integrator. Must outlive each SDK getter call.
static std::string g_ocr_json;
static std::string g_layout_json;
static std::string g_table_json;

// --- OCR ---
bool my_ocr_trigger(const char* image_path) {
    g_ocr_json = run_my_ocr_model(image_path);   // produce JSON (see schema below)
    return !g_ocr_json.empty();
}
const char* my_ocr_getter() { return g_ocr_json.c_str(); }

// --- Layout Analysis ---
bool my_layout_trigger(const char* image_path) {
    g_layout_json = run_my_layout_model(image_path);
    return !g_layout_json.empty();
}
const char* my_layout_getter() { return g_layout_json.c_str(); }

// --- Table Recognition ---
bool my_table_trigger(const char* image_path) {
    g_table_json = run_my_table_model(image_path);
    return !g_table_json.empty();
}
const char* my_table_getter() { return g_table_json.c_str(); }

int main() {
    LibraryManager::LicenseVerify("<license>", "<device_id>", "<app_id>");
    LibraryManager::Initialize("resource");
     /* SetDocumentAIModel is not required when callbacks cover OCR,
       Layout Analysis, and Table Recognition. */

    CConvertCallback callback   = {};
    callback.handle             = nullptr;
    callback.progress           = nullptr;
    callback.cancel             = nullptr;
    callback.ocr                = &my_ocr_trigger;
    callback.get_ocr_result     = &my_ocr_getter;
    callback.layout             = &my_layout_trigger;
    callback.get_layout_result  = &my_layout_getter;
    callback.table              = &my_table_trigger;
    callback.get_table_result   = &my_table_getter;

    ConvertOptions opt;
    opt.enable_ocr       = true;
    opt.enable_ai_layout = true;
    opt.languages        = { OCRLanguage::e_English };

    CPDFConversion::StartPDFToWord("input.pdf", "", "output.docx", opt, &callback);
    return 0;
}
```

You can register only the capabilities you want to override and leave the others as `nullptr` to keep the built-in behaviour.

### **Thread Safety and Lifetime**

- Callbacks are invoked from the SDK conversion thread. Implement them in a thread-safe manner if your model engine is shared across calls.
- The PNG image at `image_path` lives in the SDK temp directory and may be deleted shortly after the trigger returns; copy or process it before returning.
- The JSON pointer returned from a getter must remain valid until the same getter is called again (or until the conversion task ends).

### **OCR Result JSON Schema**

Returned by `get_ocr_result`. The SDK populates each `text_spans[].chars[]` either from `words[]` if provided, or by uniformly splitting the span rect.

```json
{
  "text_spans": [
    {
      "text": "Hello World",
      "confidence": 0.98,
      "rotation": 0.0,
      "rect":  { "left": 120, "top": 80, "right": 320, "bottom": 110 },
      "style": {
        "font_size":  18.0,
        "font_color": { "r": 0, "g": 0, "b": 0 }
      },
      "words": [
        { "text": "Hello", "rect": { "left": 120, "top": 80, "right": 200, "bottom": 110 } },
        { "text": "World", "rect": { "left": 210, "top": 80, "right": 320, "bottom": 110 } }
      ]
    }
  ]
}
```

| Field                | Type    | Required | Description                                                                 |
| -------------------- | ------- | -------- | --------------------------------------------------------------------------- |
| `text_spans`         | array   | Yes      | Recognized text spans on the page.                                          |
| `text`               | string  | Yes      | UTF-8 text content of the span.                                             |
| `confidence`         | number  | No       | 0.0 – 1.0. Spans below 0.1 are discarded.                                   |
| `rotation`           | number  | No       | Text rotation in degrees. Default 0.                                        |
| `rect`               | object  | Yes      | Bounding box in image pixels (`left`/`top`/`right`/`bottom`).               |
| `style.font_size`    | number  | No       | Estimated font size in pixels.                                              |
| `style.font_color`   | object  | No       | `{ r, g, b }` 0 – 255.                                                      |
| `words`              | array   | No       | Per-word boxes. If omitted, the SDK splits the span rect evenly. Strongly recommended for CJK + Latin mixed lines for correct glyph spacing. |

### **Layout Analysis Result JSON Schema**

Returned by `get_layout_result`. Objects with `confidence < 0.45` are discarded.

```json
{
  "objects": [
    { "type": "title",     "confidence": 0.95, "rect": { "left": 60, "top": 50,  "right": 540, "bottom": 90  } },
    { "type": "paragraph", "confidence": 0.97, "rect": { "left": 60, "top": 100, "right": 540, "bottom": 220 } },
    { "type": "figure",    "confidence": 0.92, "rect": { "left": 80, "top": 240, "right": 520, "bottom": 460 } },
    { "type": "table",     "confidence": 0.93, "rect": { "left": 60, "top": 480, "right": 540, "bottom": 700 } }
  ]
}
```

Supported `type` values:

| Value            | Meaning                                                                              |
| ---------------- | ------------------------------------------------------------------------------------ |
| `paragraph`      | Body text paragraph                                                                  |
| `title`          | Heading                                                                              |
| `figure`         | Image or figure                                                                      |
| `figure_title`   | Figure caption header                                                                |
| `figure_caption` | Figure caption text                                                                  |
| `table`          | Table region. Whether the table is bordered or borderless is determined by the table recognition stage, not by the layout label. |
| `table_title`    | Table caption header                                                                 |
| `table_caption`  | Table caption text                                                                   |
| `ordered_list`   | Ordered list                                                                         |
| `unordered_list` | Unordered list                                                                       |
| `catalogue`      | Table of contents                                                                    |
| `formula`        | Math formula                                                                         |
| `code`           | Code block                                                                           |
| `algorithm`      | Algorithm block                                                                      |
| `header`         | Page header                                                                          |
| `footer`         | Page footer                                                                          |
| `page_number`    | Page number                                                                          |
| `reference`      | Reference or citation                                                                |

Objects with a `type` value that is not listed above are ignored. Use the values in this table as the canonical layout labels in your custom output.

### **Table Recognition Result JSON Schema**

Returned by `get_table_result` once per detected table region. Polygons use 8 integers `[x0, y0, x1, y1, x2, y2, x3, y3]` in the order top-left, top-right, bottom-right, bottom-left.

```json
{
  "type": "table_with_line",
  "position": [60, 480, 540, 480, 540, 700, 60, 700],
  "rows": 3,
  "cols": 2,
  "angle": 0.0,
  "height_of_rows": [40, 60, 60],
  "width_of_cols":  [200, 280],
  "table_cells": [
    {
      "start_row": 0, "end_row": 0,
      "start_col": 0, "end_col": 0,
      "cell_background_color_r": 240,
      "cell_background_color_g": 240,
      "cell_background_color_b": 240,
      "position": [60, 480, 260, 480, 260, 520, 60, 520]
    }
  ]
}
```

| Field                       | Type    | Description                                                                               |
| --------------------------- | ------- | ----------------------------------------------------------------------------------------- |
| `type`                      | string  | `table_with_line` for bordered tables; any other value is treated as a non-standard (borderless) table. |
| `position`                  | int[8]  | Table polygon in image pixels.                                                            |
| `rows` / `cols`             | int     | Row / column counts.                                                                      |
| `angle`                     | number  | Skew angle in degrees.                                                                    |
| `height_of_rows`            | int[]   | Per-row pixel heights (length = `rows`).                                                  |
| `width_of_cols`             | int[]   | Per-column pixel widths (length = `cols`).                                                |
| `table_cells[]`             | array   | One entry per merged cell.                                                                |
| `start_row` / `end_row`     | int     | Inclusive row span of the cell.                                                           |
| `start_col` / `end_col`     | int     | Inclusive column span of the cell.                                                        |
| `cell_background_color_*`   | int     | Cell background color components (0 – 255).                                               |
| `position`                  | int[8]  | Cell polygon in image pixels.                                                             |

### **Tip: Validate Your JSON**

If you need a reference output to compare against, run a conversion once with the built-in DocumentAI model — the SDK uses the same JSON shape internally, so your custom output should follow the same structure.

## 3.13 Output Font Option

**Overview**

In some output formats, you can set the preferred font name to unify the default font style in the output document.

### **Supported Formats**

The `font_name` option currently applies to the following formats:

- PDF to Word
- PDF to Excel
- PDF to PowerPoint
- PDF to Searchable PDF
- PDF to OFD

For Searchable PDF and OFD, `font_name` controls the font used for the invisible (or visible) text layer that is overlaid on the page background. For Word, Excel and PowerPoint, it sets the preferred default font of the generated document.

### **Example**

The following example demonstrates how to set the preferred font name for the output document.

```c++
ConvertOptions opt;
opt.font_name = "Arial";
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

## 3.14 Convert PDF to Word

### **Overview**

Converting PDF to Word is an operation that converts the PDF format file into a editing Word format file. By converting PDF to Word, you can easily edit, modify, insert, or delete text and pictures, adjust layout and properties.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `enable_ai_layout` | `true` | Uses AI layout analysis to recognize paragraphs, tables, images, headers and footers, and formulas; when off, rule-based layout analysis is used. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the structure of tables with the table model; when off, the table structure is rebuilt from the ruling lines. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `contain_image` | `true` | Keeps the images and vector graphics (output as pictures) of the source; when off, they are not output. |
| `contain_page_background_image` | `true` | On pages recognized by OCR, places the page image with the recognized text erased as a background behind the text, instead of separate image crops. Only takes effect when `enable_ocr` and `contain_image` are on. |
| `contain_annotation` | `true` | Outputs the appearance of annotations as images. Only for PDF pages that are not recognized by OCR. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; the first language is also the language of the Word document. When no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `formula_to_image` | `true` | Outputs formulas as pictures; when off, as editable text. Only applies to formulas found by AI layout analysis (`enable_ai_layout` on). |
| `font_name` | Empty | Uses the given font for all text, e.g. "Arial"; empty selects fonts automatically. Silently ignored if the font is neither embedded in the PDF nor installed on the system. |
| `page_layout_mode` | `PageLayoutMode::e_Flow` | `PageLayoutMode::e_Flow`: content is laid out as flowing paragraphs; `PageLayoutMode::e_Box`: each region is placed in its own positioned frame. |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `enable_auto_page_size` | `false` | Image input only: sizes the page from the image resolution, matched to the nearest standard paper size; when off, one image pixel becomes one point. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: exact page width and height in points (1 pt = 1/72 inch); both must be greater than 0. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.enable_ocr = true;
opt.ocr_option = OCROption::e_ScanPage;
opt.languages[0] = OCRLanguage::e_English;
opt.language_count = 1;
opt.page_layout_mode = PageLayoutMode::e_Box;
CPDFConversion::StartPDFToWord("input.pdf", "password", "path/output.docx", opt);
```

### **Layout differences**

- **Word's Streaming Layout:** Ideal for editing, with your editing, the content dynamically adapts to different positions. However, a Word file would display differently due to the incompatibility of various software or app versions. It makes it unsuitable for precise documentation like electronic files or certificates.

- **PDF's Fixed Page Layout:** Ensures a stable, uniform appearance and print quality across all devices. The content and formatting are locked upon creation, making alterations difficult without affecting the overall layout. It's preferred for formal documentation such as business reports and official electronic records.

### **Sample**

This sample demonstrates how to convert from a PDF to DOCX file.

```c++
ConvertOptions opt;
// Set Reserved page layout.
opt.page_layout_mode = PageLayoutMode::e_Box;
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);

// Set Streaming layout.
opt.page_layout_mode = PageLayoutMode::e_Flow;
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

### **Convert Formulas to Images**

When a document contains complex formulas and you want to preserve visual consistency in the output document, you can enable the `formula_to_image` option.

```c++
ConvertOptions opt;
opt.formula_to_image = true;
CPDFConversion::StartPDFToWord("word.pdf", "password", "path/output.docx", opt);
```

## 3.15 Convert PDF to Excel

### **Overview**

PDFSolid Conversion SDK supports converting PDF documents to Microsoft Excel format (.xlsx). By extracting, parsing, and importing data from PDF into Excel, users can further edit, analyze, or share Excel files. This feature helps increase productivity, reduce manual entry errors, and simplify complex document processing tasks.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `excel_csv_format` | `false` | Must be off to output an .xlsx workbook; when on, CSV is output instead (see "PDF to CSV"). |
| `excel_worksheet_option` | `ExcelWorksheetOption::e_ForTable` | `ExcelWorksheetOption::e_ForTable`: one worksheet per table, tables only; `ExcelWorksheetOption::e_ForPage`: one worksheet per page; `ExcelWorksheetOption::e_ForDocument`: all content on one worksheet. Image input without OCR always uses `ExcelWorksheetOption::e_ForPage`. |
| `excel_all_content` | `false` | Also writes the content outside tables (text, images, headers and footers); when off, only tables are kept. Ignored with `ExcelWorksheetOption::e_ForTable`. |
| `enable_ai_layout` | `true` | Uses AI layout analysis to recognize paragraphs, tables, images, headers and footers, and formulas; when off, rule-based layout analysis is used. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the structure of tables with the table model; when off, the table structure is rebuilt from the ruling lines. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `contain_image` | `true` | Keeps the images and vector graphics of the source. Only visible when content outside tables is written (`excel_all_content` on with `ExcelWorksheetOption::e_ForPage` or `ExcelWorksheetOption::e_ForDocument`); tables-only output never contains images. |
| `contain_annotation` | `true` | Outputs the appearance of annotations as images. Only for PDF pages that are not recognized by OCR, and only visible when content outside tables is written. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `formula_to_image` | `true` | Outputs formulas as pictures; when off, as text. Only applies to formulas found by AI layout analysis, and only visible when content outside tables is written. |
| `font_name` | Empty | Uses the given font for all text, e.g. "Arial"; empty selects fonts automatically. Silently ignored if the font is neither embedded in the PDF nor installed on the system. |
| `output_document_per_page` | `false` | Writes one workbook per page instead of one workbook. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `enable_auto_page_size` | `false` | Image input only: sizes the page from the image resolution, matched to the nearest standard paper size; when off, one image pixel becomes one point. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: exact page width and height in points (1 pt = 1/72 inch); both must be greater than 0. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.excel_worksheet_option = ExcelWorksheetOption::e_ForPage;
opt.excel_all_content = true;
std::snprintf(opt.page_ranges, sizeof(opt.page_ranges), "%s", "1-3");
CPDFConversion::StartPDFToExcel("input.pdf", "password", "path/output.xlsx", opt);
```

### **Set the content options for Excel**

When converting PDF files to Excel files, you need to pay attention to the settings of the following options, which will directly affect the content written to the Excel file.

- Content options:
  If you set the `excel_all_content` option, The converted Xlsx file will contain all the contents in the PDF.

- Worksheet options:

  | Option                                | Description                                   |
  | ------------------------------------- | --------------------------------------------- |
  | `ExcelWorksheetOption::e_ForTable`    | Create one sheet for one table.               |
  | `ExcelWorksheetOption::e_ForPage`     | Create one sheet for one PDF page.            |
  | `ExcelWorksheetOption::e_ForDocument` | Create one sheet for the entire PDF document. |

### **Sample**

This sample demonstrates how to convert from a PDF to XLSX file.

```c++
ConvertOptions opt;
CPDFConversion::StartPDFToExcel("excel.pdf", "password", "path/output.xlsx", opt);

// Set all content options.
opt.excel_all_content = true;
opt.excel_worksheet_option = ExcelWorksheetOption::e_ForDocument;
CPDFConversion::StartPDFToExcel("excel.pdf", "password", "path/output.xlsx", opt);
```

## 3.16 Convert PDF to PowerPoint

### **Overview**

PDFSolid Conversion SDK provides the function of converting PDF files to PowerPoint files and restoring the layout and format of the original document, which can meet the needs of users for the presentation and editing of document content in Microsoft PowerPoint.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `enable_ai_layout` | `true` | Uses AI layout analysis to recognize paragraphs, tables, images, headers and footers, and formulas; when off, rule-based layout analysis is used. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the structure of tables with the table model; when off, the table structure is rebuilt from the ruling lines. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `contain_image` | `true` | Keeps the images and vector graphics (output as pictures) of the source; when off, they are not output. |
| `contain_page_background_image` | `true` | On pages recognized by OCR, outputs the page image with the recognized text erased as a page-sized background, instead of separate image crops; headers and footers found by AI layout analysis are not output separately. Only takes effect when `enable_ocr` and `contain_image` are on. |
| `contain_annotation` | `true` | Outputs the appearance of annotations as images. Only for PDF pages that are not recognized by OCR. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `formula_to_image` | `true` | Outputs formulas as pictures; when off, as editable text. Only applies to formulas found by AI layout analysis (`enable_ai_layout` on). |
| `font_name` | Empty | Uses the given font for all text, e.g. "Arial"; empty selects fonts automatically. Silently ignored if the font is neither embedded in the PDF nor installed on the system. |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `enable_auto_page_size` | `false` | Image input only: sizes the slide from the image resolution, matched to the nearest standard paper size; when off, one image pixel becomes one point. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: exact page width and height in points (1 pt = 1/72 inch); both must be greater than 0. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.contain_annotation = false;
std::snprintf(opt.font_name, sizeof(opt.font_name), "%s", "Arial");
opt.output_document_per_page = true;
CPDFConversion::StartPDFToPpt("input.pdf", "password", "path/output.pptx", opt);
```

### **Sample**

This sample demonstrates how to convert from a PDF to PPTX file.

```c++
ConvertOptions opt;
// PDF to PPT.
CPDFConversion::StartPDFToPpt("ppt.pdf", "password", "path/output.pptx", opt);
```

## 3.17 Convert PDF to HTML

### **Overview**

PDFSolid Conversion SDK provides the PDF to HTML function, which can convert PDF files to HTML files while maintaining the layout and format of the original document, allowing users to browse and view the document on Web.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `html_option` | `HtmlOption::e_SinglePage` | `HtmlOption::e_SinglePage`: one HTML file; `HtmlOption::e_SinglePageWithBookmark`: one HTML file with an outline navigation; `HtmlOption::e_MultiPage`: one HTML file per page; `HtmlOption::e_MultiPageWithBookmark`: one HTML file per page with an outline navigation and previous/next links. The navigation is only generated when the PDF has an outline. |
| `page_layout_mode` | `PageLayoutMode::e_Flow` | `PageLayoutMode::e_Flow`: flowing HTML; `PageLayoutMode::e_Box`: absolutely positioned blocks. |
| `enable_ai_layout` | `true` | Uses AI layout analysis to recognize paragraphs, tables, images, headers and footers, and formulas; when off, rule-based layout analysis is used. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the structure of tables with the table model; when off, the table structure is rebuilt from the ruling lines. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `contain_image` | `true` | Keeps the images and vector graphics of the source (written to the resource folder next to the HTML file); when off, they are not output. |
| `contain_page_background_image` | `true` | On pages recognized by OCR, outputs the page image with the recognized text erased as a page-sized background, instead of separate image crops; headers and footers found by AI layout analysis are not output separately. Only takes effect when `enable_ocr` and `contain_image` are on. |
| `contain_annotation` | `true` | Outputs the appearance of annotations as images. Only for PDF pages that are not recognized by OCR. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `formula_to_image` | `true` | Outputs formulas as pictures; when off, as editable text. Only applies to formulas found by AI layout analysis (`enable_ai_layout` on). |
| `output_document_per_page` | `false` | Runs a separate HTML conversion for each page. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `enable_auto_page_size` | `false` | Image input only: sizes the page from the image resolution, matched to the nearest standard paper size; when off, one image pixel becomes one point. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: exact page width and height in points (1 pt = 1/72 inch); both must be greater than 0. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.html_option = HtmlOption::e_MultiPageWithBookmark;
opt.page_layout_mode = PageLayoutMode::e_Box;
CPDFConversion::StartPDFToHtml("input.pdf", "password", "path/output.html", opt);
```

### **Notice**

When converting PDF to HTML format, PDFSolid Conversion SDK provides the following four options to create HTML files:

| **Options**                            | **Description**                                              |
| -------------------------------------- | ------------------------------------------------------------ |
| `HtmlOption::e_SinglePage`             | Convert the entire PDF file into a single HTML file, where all PDF pages are connected in sequence according to page number, displayed on the same HTML page. |
| `HtmlOption::e_SinglePageWithBookmark` | Convert the PDF file into a single HTML file with an outline for navigation at the beginning of the HTML page. Still, all PDF pages are connected in sequence according to page number, displayed on the same HTML page. |
| `HtmlOption::e_MultiPage`              | Convert the PDF file into multiple HTML files. Each HTML file corresponds to a PDF page, and users can navigate to the next HTML file via a link at the bottom of the HTML page. |
| `HtmlOption::e_MultiPageWithBookmark`  | Convert the PDF file into multiple HTML files. Each HTML file corresponds to a PDF page, and users can navigate to the next HTML file via a link at the bottom of the HTML page. The links of all the HTML files are presented in an outline HTML file for navigation. |

### **Sample**

This sample demonstrates how to convert from a PDF to HTML file.

```c++
ConvertOptions opt;
// Convert using default options.
CPDFConversion::StartPDFToHtml("html.pdf", "password", "path/output.html", opt);

// Set the html page display method to HtmlOption::e_MultiPageWithBookmark.
opt.page_layout_mode = PageLayoutMode::e_Box;
opt.html_option = HtmlOption::e_MultiPageWithBookmark;
CPDFConversion::StartPDFToHtml("html.pdf", "password", "path/output.html", opt);
```

## 3.18 Convert PDF to CSV

### **Overview**

PDFSolid Conversion SDK supports converting PDF documents to CSV (Comma-Separated Values). Converting PDF to CSV is a common need, usually used to extract tabular or structured data from PDF documents and convert them into CSV files.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `excel_csv_format` | `false` | Must be on to output CSV. Only tables are exported. |
| `excel_worksheet_option` | `ExcelWorksheetOption::e_ForTable` | `ExcelWorksheetOption::e_ForTable`: one CSV file per table; `ExcelWorksheetOption::e_ForPage`: one CSV file per page; `ExcelWorksheetOption::e_ForDocument`: one CSV file with all tables, written to the output path. |
| `auto_create_folder` | `true` | With `ExcelWorksheetOption::e_ForTable` or `ExcelWorksheetOption::e_ForPage`, when the output path is an existing folder, the CSV files are put in a new subfolder named after the input file; when off, they are written directly into that folder. If the output path is not an existing folder, a folder is created at that path. |
| `enable_ai_layout` | `true` | Finds tables (including tables without borders) with AI layout analysis; when off, only tables with ruling lines are found. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the structure of tables with the table model; when off, the table structure is rebuilt from the ruling lines. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Required for image input; without it the conversion returns `ErrorCode::e_ErrUnsupportedFeature`. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `output_document_per_page` | `false` | Runs a separate CSV export for each page; each export still follows `excel_worksheet_option`. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |

Example:

```cpp
ConvertOptions opt;
opt.excel_csv_format = true;
opt.excel_worksheet_option = ExcelWorksheetOption::e_ForTable;
opt.auto_create_folder = false;
CPDFConversion::StartPDFToExcel("input.pdf", "password", "path/output_folder", opt);
```

### **Set Whether to Automatically Create Folders**
When multiple CSV files may be output, you can control whether to automatically create folders to store the CSV files by setting the `auto_create_folder` option. When this option is enabled, a folder with the same name as the output file will be automatically created in the output path to store the CSV files.

### **Sample**

This sample demonstrates how to convert from a PDF to CSV file.

```c++
ConvertOptions opt;
opt.excel_csv_format = true;
CPDFConversion::StartPDFToExcel("csv.pdf", "password", "path/output.csv", opt);

// Merge all tables into one CSV file
opt.excel_worksheet_option = ExcelWorksheetOption::e_ForDocument;
CPDFConversion::StartPDFToExcel("csv.pdf", "password", "path/output.csv", opt);
```

## 3.19 Convert PDF to Image

### **Overview**

PDFSolid Conversion SDK provides an API for converting PDF to images. Integrate PDFSolid Conversion SDK to your apps to convert PDF into images easily. 

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `image_type` | `ImageType::e_JPG` | Output image format and file extension. For image input, transparency is kept only for PNG, TIFF, WEBP (and JPEG 2000 where supported) and 16-bit depth only for PNG, TIFF and JPEG 2000; other formats are flattened onto white and converted to 8-bit. |
| `image_color_mode` | `ImageColorMode::e_Color` | `ImageColorMode::e_Color` keeps the color; `ImageColorMode::e_Gray` converts to grayscale; `ImageColorMode::e_Binary` converts to black and white. |
| `image_scaling` | `4.0` | Pixel size = page size in points × scaling for PDF input, and source pixel size × scaling for image input (a value above 1 enlarges input images). Must be greater than 0. The long side is limited to an internal maximum. |
| `image_path_enhance` | `false` | Darkens and strengthens vector lines and strokes. PDF input only. |
| `page_ranges` | Empty | Pages (or image frames) to export; empty exports every page. When one page is selected, the output path is used as the file name if it ends with the extension of the image format; when several pages are selected, the output path is used as a folder and numbered files are written into it. |

Example:

```cpp
ConvertOptions opt;
opt.image_type = ImageType::e_PNG;
opt.image_color_mode = ImageColorMode::e_Gray;
opt.image_scaling = 2.0f;
std::snprintf(opt.page_ranges, sizeof(opt.page_ranges), "%s", "1-3");
CPDFConversion::StartPDFToImage("input.pdf", "password", "path/output", opt);
```

### **Setting Image Formats**

In PDFSolid Conversion SDK, supported image formats include:

- JPG
- JPEG
- JPEG2000
- PNG
- BMP
- TIFF
- TGA
- GIF
- WEBP

### **Setting Image Color Modes**

Supported image color modes in PDFSolid Conversion SDK include:

- **Color:** Color mode, where the image effect is consistent with the original PDF page.
- **Gray:** Grayscale mode.
- **Binary:** Black and white mode, which applies binarization to the original effect.

### **Setting Image Scaling**

The SDK supports setting image scaling. The default scaling is 1.0, which maintains the original PDF page size. If you want to double the image size, you can set `image_scaling` to 2.0; similarly, to reduce the image size by half, set  `image_scaling` to 0.5.

### **Enhancing Image Path Display**

The SDK supports an option called `image_path_enhance` for enhancing the display of image paths. This option can be enabled when you want to enhance the display effect of paths within the PDF page.

- Not enable `image_path_enhance` option(original PDF rendering effect):
  ![image-20250603162605558](image/developer_guide_c++/image-20250603162605558.png)
- Enable `image_path_enhance` option:
  ![image-20250603162651769](image/developer_guide_c++/image-20250603162651769.png)

### **Notice**

- A higher `image_scaling` value results in images with higher resolution, but it also increases memory usage and slows down the conversion.
- A higher `image_scaling` value does not necessarily equate to higher clarity; the clarity also depends on the original image resolution in the document.

### **Sample**

The following complete example code demonstrates how to convert a PDF document into PNG format.

```c++
ConvertOptions opt;
// Convert PDF to Image (JPEG).
opt.image_type = ImageType::e_JPEG;
CPDFConversion::StartPDFToImage("jpeg.pdf", "password", "path/output", opt);

// Convert PDF to Image (PNG) and set image_scaling to double the original PDF size.
opt.image_type = ImageType::e_PNG;
opt.image_scaling = 2.0;
CPDFConversion::StartPDFToImage("png.pdf", "password", "path/output", opt);
```

## 3.20 Convert PDF to RTF

### **Overview**

RTF is a popular text format that can retain the format and style data of the text, and it is convenient for most text readers to read and write. Integrate PDFSolid Conversion SDK to convert PDF to RTF files now.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `enable_ai_layout` | `true` | Uses AI layout analysis to recognize paragraphs, tables, images, headers and footers, and formulas; when off, rule-based layout analysis is used. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the structure of tables with the table model; when off, the table structure is rebuilt from the ruling lines. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `contain_image` | `true` | Keeps the images and vector graphics (output as pictures) of the source; when off, they are not output. |
| `contain_page_background_image` | `true` | On pages recognized by OCR, outputs the page image with the recognized text erased as a page-sized background, instead of separate image crops; headers and footers found by AI layout analysis are not output separately. Only takes effect when `enable_ocr` and `contain_image` are on. |
| `contain_annotation` | `true` | Outputs the appearance of annotations as images. Only for PDF pages that are not recognized by OCR. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `formula_to_image` | `true` | Outputs formulas as pictures; when off, as editable text. Only applies to formulas found by AI layout analysis (`enable_ai_layout` on). |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `enable_auto_page_size` | `false` | Image input only: sizes the page from the image resolution, matched to the nearest standard paper size; when off, one image pixel becomes one point. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: exact page width and height in points (1 pt = 1/72 inch); both must be greater than 0. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.contain_annotation = false;
std::snprintf(opt.page_ranges, sizeof(opt.page_ranges), "%s", "1-3,5");
CPDFConversion::StartPDFToRtf("input.pdf", "password", "path/output.rtf", opt);
```

### **Sample**

This sample demonstrates how to convert from a PDF to RTF file.

```c++
ConvertOptions opt;
// PDF to RTF.
CPDFConversion::StartPDFToRtf("rtf.pdf", "password", "path/output.rtf", opt);
```

## 3.21 Convert PDF to TXT

### **Overview**

When you need to extract the text content in the PDF file, in order for data analysis, text mining, information retrieval, etc. Using PDFSolid Conversion SDK, you can easily extract the text in the PDF into the TXT file.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `txt_table_format` | `true` | On: the cells of a table row are written on one line, separated by two spaces; off: each cell is written on its own line. Only matters when the document has tables. |
| `enable_ai_layout` | `true` | Uses AI layout analysis for reading order, paragraphs, lists, headers and footers, and table detection; when off, rule-based paragraphs and ruling-line tables are used. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the cell structure of tables with the table model, which decides how table text is split and ordered. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Required for image input; without it the conversion returns `ErrorCode::e_ErrUnsupportedFeature`. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `contain_image` | `true` | TXT never contains images. With `enable_ocr` and `enable_ai_layout` on, OCR text inside image regions found by AI layout analysis is dropped while this is on; turn it off to keep that text. |
| `formula_to_image` | `true` | When on, formulas found by AI layout analysis are left out of the TXT; turn it off to keep the formula text. Only applies with `enable_ai_layout` on. |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. The files are named after the input file plus the page number and are written to the folder of the output path; the file name in the output path is not used. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |

Example:

```cpp
ConvertOptions opt;
opt.txt_table_format = false;
opt.formula_to_image = false;
CPDFConversion::StartPDFToTxt("input.pdf", "password", "path/output.txt", opt);
```

### **Preserving Table Format**

The SDK supports an option called `txt_table_format` that preserves the table format when writing the TXT file, meaning that the original table structure is maintained. It is generally recommended to enable this option, especially useful for data extraction scenarios.

### **Sample**

This sample demonstrates how to convert from a PDF to TXT file.

```c++
ConvertOptions opt;
// PDF to TXT.
CPDFConversion::StartPDFToTxt("txt.pdf", "password", "path/output.txt", opt);
```

## 3.22 Convert PDF to Searchable PDF

### **Overview**

To make a searchable PDF by adding invisible text to an image based PDF such as a scanned document using OCR.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `transparent_text` | `true` | PDF input: on keeps the original pages and adds an invisible OCR text layer; off rebuilds the pages with visible text, and vector graphics are not kept in the rebuilt pages. Image input: the recognized text is invisible (on) or visible (off). |
| `enable_ocr` | `false` | Adds the OCR text layer on the pages chosen by `ocr_option`. With `transparent_text` on and OCR off, the output is just the selected source pages. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages (visible only when `transparent_text` is off); `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; the first language also selects the fallback font of the text layer. When no language is given, English is used. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR; the page size follows the rotation. Only takes effect when `enable_ocr` is on and the page is rebuilt (`transparent_text` off, or image input). |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on and the page is rebuilt (`transparent_text` off, or image input). |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `contain_image` | `true` | Only when the page is rebuilt (`transparent_text` off, or image input): keeps the source images on pages not recognized by OCR, and is required for `contain_page_background_image`. For image input without OCR, the image itself is drawn only when this is on. |
| `contain_page_background_image` | `true` | Only when the page is rebuilt and `contain_image` is on. On OCR pages with `transparent_text` off, draws the page image with the recognized text erased beneath the visible text (off: text only). For image input with `transparent_text` on, keeps the source image beneath the invisible text (off: invisible text only). |
| `contain_annotation` | `true` | Draws the appearance of annotations as images on pages that are rebuilt (`transparent_text` off) and not recognized by OCR. With `transparent_text` on, the original pages keep their annotations unchanged. |
| `font_name` | Empty | Font of the OCR text layer; with `transparent_text` off it is also the visible font of the rebuilt pages. If the font cannot be found, the OCR or system font is used. |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. The files are named after the input file plus the page number and are written to the folder of the output path; the file name in the output path is not used. |
| `enable_auto_page_size` | `false` | Image input only: sizes the page from the image resolution, matched to the nearest standard paper size; when off, one image pixel becomes one point. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: exact page width and height in points (1 pt = 1/72 inch); both must be greater than 0. The image is fitted inside with white padding. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.enable_ocr = true;
opt.ocr_option = OCROption::e_ScanPage;
opt.languages[0] = OCRLanguage::e_English;
opt.language_count = 1;
opt.transparent_text = true;
CPDFConversion::StartPDFToSearchablePdf("input.pdf", "password", "path/output.pdf", opt);
```

### **Set Transparent Text Layer**

When outputting a searchable PDF, you can use the following option to control the hidden text layer:

- `transparent_text`: Whether to output a transparent text layer.

### **Sample**

The following example demonstrates how to convert a PDF document to a searchable PDF file.

```c++
LibraryManager::SetDocumentAIModel("path/documentai.model");

ConvertOptions opt;
opt.enable_ocr = true;
opt.languages = {OCRLanguage::e_English};
opt.transparent_text = true;
CPDFConversion::StartPDFToSearchablePdf("scan.pdf", "password", "path/output.pdf", opt);
```

## 3.23 Convert PDF to OFD

### **Overview**

PDFSolid Conversion SDK supports converting PDF documents to OFD documents. Similar to searchable PDF, OFD conversion also supports OCR, page background preservation, and transparent text layers.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `enable_ocr` | `false` | The text layer comes from OCR on the pages chosen by `ocr_option`; when off, it comes from the text of the PDF. Image input without OCR has no text layer. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters of the text layer on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Turns the page image upright before OCR; the page size follows the rotation. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `enable_ai_layout` | `true` | Only changes how the invisible text of pages not recognized by OCR is grouped, and the header and footer detection; the visible page image is not affected. |
| `formula_to_image` | `true` | When on, the text of formulas found by AI layout analysis is removed from the invisible text layer (it can no longer be copied or searched); turn it off to keep it. The page image is unchanged. Only for pages not recognized by OCR, with `enable_ai_layout` on. |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. The files are named after the input file plus the page number and are written to the folder of the output path; the file name in the output path is not used. |
| `enable_auto_page_size` | `false` | Image input only: sizes the page from the image resolution, matched to the nearest standard paper size; when off, one image pixel becomes one point. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: exact page width and height in points (1 pt = 1/72 inch); both must be greater than 0. The image is fitted inside with white padding. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.enable_ocr = true;
opt.enable_document_orientation_classification = true;
opt.output_document_per_page = true;
CPDFConversion::StartPDFToOfd("input.pdf", "password", "path/output.ofd", opt);
```

### **Notice**

- If you need to generate searchable OFD output, you can enable `transparent_text`.
- When `enable_ocr` is enabled, it is recommended to specify the OCR language through `languages`.

### **Sample**

```c++
LibraryManager::SetDocumentAIModel("path/documentai.model");

ConvertOptions opt;
opt.enable_ocr = true;
opt.languages = {OCRLanguage::e_English};
opt.contain_page_background_image = true;
opt.transparent_text = true;
CPDFConversion::StartPDFToOfd("scan.pdf", "password", "path/output.ofd", opt);
```

## 3.24 Convert Word to PDF

[Word to PDF API reference](html/word_to_pdf.html).

### **Overview**

PDFSolid Conversion SDK supports converting Word documents to PDF files. During conversion you can choose to generate PDF bookmarks, output only specific pages, and obtain diagnostic information about features that may affect fidelity. This function is provided by `CPDFConversion::StartWordToPdf`. Its options are set through `ConvertOptions`, the same structure used for PDF conversion; only `word_pdf_bookmark_mode` and `page_ranges` take effect for Word to PDF, and the other members are ignored.

`StartWordToPdf` provides the following overloads (each exists in a `const char*` path version and a `const wchar_t*` path version):

```c++
// Use the default options.
static ErrorCode StartWordToPdf(const char* file_path, const char* output_path,
                                CConvertCallback* callback = nullptr, char* diagnostics = nullptr);

// Specify the options; only the bookmark mode and page range take effect.
static ErrorCode StartWordToPdf(const char* file_path, const char* output_path,
                                const ConvertOptions& options,
                                CConvertCallback* callback = nullptr, char* diagnostics = nullptr);
```

| Parameter | Description |
|---|---|
| `file_path` | Path of the input Word document |
| `output_path` | Path of the output PDF |
| `options` | Conversion options; Word to PDF uses only `word_pdf_bookmark_mode` and `page_ranges`, see below |
| `callback` | Optional; used to get conversion progress and cancel the conversion, see [3.4 Get Conversion Progress](#34-get-conversion-progress) and [3.5 Cancel Conversion Task](#35-cancel-conversion-task) |
| `diagnostics` | Optional caller-allocated buffer that receives diagnostic information; pass `nullptr` if you do not need it |

### **Conversion Options**

Word to PDF uses only the following members of `ConvertOptions`:

| Field | Type | Default | Description |
|---|---|---|---|
| `word_pdf_bookmark_mode` | `WordPdfBookmarkMode` | `e_None` | How PDF bookmarks (the outline shown in a reader's navigation panel) are generated |
| `page_ranges` | `char[256]` | empty | Pages to output, e.g. `"1-3,5,7-9"`; empty outputs every page |

Values of `WordPdfBookmarkMode`:

| Value | Description |
|---|---|
| `e_None` | Do not generate bookmarks |
| `e_Headings` | One bookmark per heading (a paragraph with an outline level), nested by level |
| `e_WordBookmarks` | One bookmark per Word bookmark, named after it |

### **Diagnostics**

- The `diagnostics` buffer must be 8192 bytes in size. The SDK writes UTF-8 diagnostic text into it and neither allocates nor frees the buffer. (The macro `CPDF_WORD_TO_PDF_DIAGNOSTICS_SIZE` in the C header `pdfsolid_conversion_c.h` denotes this size; the C++ headers do not contain it, so define your own constant.)
- When the document contains a feature that may affect fidelity, `e_ErrUnsupportedFeature` (95) is returned. The PDF is usually still produced in this case: the first line of the diagnostic text, `output=produced`, means the PDF was produced, and `output=not_produced` means no complete PDF was written.
- Each following line is one "feature ID:reason" entry, for example `ruby:unsupported ruby layout`. The same feature is reported only once per conversion.
- If the conversion itself fails, the real error code is returned and takes precedence over 95.
- If the buffer cannot hold the complete diagnostics, `e_ErrOutOfMemory` is returned; the text is never truncated.

### **Sample**

```c++
#include <cstdio>
#include <iostream>
#include "pdfsolid_conversion.h"

using namespace pdfsolid::base;
using namespace pdfsolid::common;
using namespace pdfsolid::conversion;

// Default options.
ErrorCode code = CPDFConversion::StartWordToPdf("input.docx", "path/output.pdf");

// Generate bookmarks from headings, output pages 1-3, 5, and 7-9, and get diagnostics.
const size_t kDiagnosticsSize = 8192;
char diagnostics[kDiagnosticsSize] = {0};

ConvertOptions opt;
opt.word_pdf_bookmark_mode = WordPdfBookmarkMode::e_Headings;
std::snprintf(opt.page_ranges, sizeof(opt.page_ranges), "%s", "1-3,5,7-9");

code = CPDFConversion::StartWordToPdf("input.docx", "path/output.pdf", opt, nullptr, diagnostics);
if (code == ErrorCode::e_ErrUnsupportedFeature) {
    // The document contains features that may affect fidelity. The PDF is usually still produced;
    // check output=produced / output=not_produced on the first line of the diagnostic text.
    std::cout << diagnostics << std::endl;
} else if (code != ErrorCode::e_ErrSuccess) {
    // The conversion failed.
}
```

## 3.25 Releasing Library Resources

### **Overview**

Releases the files and memory resources occupied by the PDFSolid Conversion SDK.

### **Notice**

- After calling this interface to release library resources, the PDFSolid Conversion SDK will no longer function properly and must be reloaded.
- When you only want to release the resources occupied by the AI model rather than all resources used by the PDFSolid Conversion SDK, you can achieve this by calling the `ReleaseDocumentAIModel` interface.
- If synchronous conversion tasks are still running when `Release` is called, the cleanup is deferred until the last task returns, and new tasks are refused in the meantime. `ReleaseDocumentAIModel` likewise waits for running tasks to return before cleaning up; while the cleanup is pending, reconfiguring the DocumentAI model is refused and `e_ErrConverting` is returned. Do not unload the SDK until all conversion calls have returned.
- `GetPageCount` returns `-1` while library resources are being released or configured.

### **Sample**

```c++
// Release AI Model resources.
LibraryManager::ReleaseDocumentAIModel();

// Release library resources.
LibraryManager::Release();
```

# 4 Data Extraction Guide

Unleash the Power of Data with PDFSolid Conversion SDK's Data Extraction to detect, recognize, analyze, and extract the PDF text, image, table, etc.

## 4.1 Extract PDF To JSON

### **Overview**

Extract text, tables and images from PDF documents to Json file.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `json_contain_table` | `true` | On: each table is output once as an HTML table with the row, column, span and text of every cell; off: the text of each cell is output as a separate text item of the page content. |
| `contain_image` | `true` | On: the output is a .zip that holds the JSON, the page renderings and the image items; off: a plain .json without image items. With `enable_ocr` and `enable_ai_layout` on, it also drops the OCR text inside image regions found by AI layout analysis. |
| `enable_ai_layout` | `true` | Gives the object types (title, list, table, header, footer, ...), the grouping, the reading order and the table detection. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the structure of tables with the table model; when off, the table structure is rebuilt from the ruling lines. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Without OCR, image input gives only an image item (if `contain_image` is on) and no text. Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Turns the page image upright before OCR; the page width, height and coordinates follow the rotation. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `contain_annotation` | `true` | Outputs the appearance of annotations as image items. Only for PDF pages not recognized by OCR, and only when `contain_image` is on. |
| `formula_to_image` | `true` | When on, formulas found by AI layout analysis become text items with empty text; turn it off to keep the formula text. Only applies with `enable_ai_layout` on. |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. The files are named after the input file plus the page number and are written to the folder of the output path; the file name in the output path is not used. |
| `enable_auto_page_size` | `false` | Image input only: the page width, height and all positions use the page size from the image resolution, matched to the nearest standard paper size. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: the page width, height and all positions use this exact page size in points; both must be greater than 0. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.json_contain_table = false;
opt.contain_image = false;
CPDFConversion::StartPDFToJson("input.pdf", "password", "path/output.json", opt);
```

### **Standard table and non-standard table**

Commonly, tables can be divided into two categories: standard tables and non-standard tables. The specific definitions are as follows:

- Standard table: The table border and the inner lines of the table are complete and clear. There is no need to manually add table lines to divide the table content.![image-20231116145224545](image/image-20231116145224545.png)
- **Non-Standard Tables:** Tables lacking borders or clear inner lines, requiring manual additions of table lines to separate contents.![image-20231116145517818](image/image-20231116145517818.png)

### **Table Extraction Option**

PDFSolid Conversion SDK supports the option `json_contain_table`, when enabled, will extract table content from PDFs and output the table structure; otherwise, table content will be treated as regular text.

### **Notice**

- Without enabling AI layout analysis or OCR options, tables in the original PDF cannot be extracted. It is recommended to enable AI layout analysis or OCR for high-precision table recognition.

### **Sample**

Full sample code which illustrates the text extraction capabilities.

```c++
ConvertOptions opt;
// Extract PDF to JSON.
CPDFConversion::StartPDFToJson("json.pdf", "password", "path/output.json", opt);
```

## 4.2 Extract PDF To Markdown

### **Overview**

Extract text, tables and images from PDF documents to Markdown file.

### **Conversion Options**

This format uses only the following options of `ConvertOptions`; the other options have no effect:

| Option | Default | Meaning |
| --- | --- | --- |
| `enable_ai_layout` | `true` | Gives the titles, lists, captions, tables, images and the reading order. Headers and footers are always output as body text in Markdown. Ignored if the license does not include AI layout analysis. |
| `enable_ai_table_recognition` | `true` | Recognizes the cell structure of tables with the table model; the tables are written as HTML tables. Only applies to tables found by AI layout analysis (`enable_ai_layout` on). |
| `table_recognition_accuracy` | `TableRecognitionAccuracy::e_Balanced` | Table model: `TableRecognitionAccuracy::e_Balanced` uses the base documentai.model, `TableRecognitionAccuracy::e_HighAccuracy` uses the table_legacy.model package. Only takes effect when AI table recognition runs with the built-in table model. If the model of the requested accuracy is not loaded, the conversion still succeeds and tables fall back to rule-based recognition. |
| `enable_ocr` | `false` | Recognizes text with OCR on the pages chosen by `ocr_option`. Without OCR, image input gives only the page image (if `contain_image` is on). Ignored if the license does not include OCR. |
| `ocr_option` | `OCROption::e_All` | Which content OCR handles: `OCROption::e_All` every page; `OCROption::e_ScanPage` only image (scanned) pages; `OCROption::e_InvalidCharacter` re-recognizes unreadable characters on the other pages; `OCROption::e_InvalidCharacterAndScanPage` both. Only takes effect when `enable_ocr` is on. |
| `languages` / `language_count` | `language_count = 0` | OCR recognition languages; when no language is given, English is used. Only takes effect when `enable_ocr` is on. |
| `enable_document_orientation_classification` | `false` | Detects the page rotation and turns the page image upright before OCR. Only takes effect when `enable_ocr` is on. |
| `enable_document_dewarp` | `false` | Flattens curved or warped page photos before OCR. Only takes effect when `enable_ocr` is on. |
| `page_ranges` | Empty | Pages to convert, e.g. "1-3,5,7-9"; empty converts every page. For multi-frame image input it selects the frames. |
| `contain_image` | `true` | Writes the source images and vector graphics (as pictures) into the Markdown; when off, they are not output. With `enable_ocr` and `enable_ai_layout` on, image regions are cropped as pictures and the OCR text inside them is dropped. |
| `contain_annotation` | `true` | Writes the appearance of annotations as images, independently of `contain_image`. Only for PDF pages not recognized by OCR. |
| `formula_to_image` | `true` | When on, formulas found by AI layout analysis are output as empty paragraphs, so the formula is lost; turn it off to keep the formula text. Only applies with `enable_ai_layout` on. |
| `output_document_per_page` | `false` | Writes one file per page instead of one document. The files are named after the input file plus the page number and are written to the folder of the output path; the file name in the output path is not used. |
| `enable_auto_page_size` | `false` | Image input only: the image width and height attributes (in points) follow the page size from the image resolution, matched to the nearest standard paper size. |
| `custom_page_width` / `custom_page_height` | `0` | Image input only: the image width and height attributes follow this exact page size in points; both must be greater than 0. Takes precedence over `enable_auto_page_size`. |

Example:

```cpp
ConvertOptions opt;
opt.formula_to_image = false;
opt.contain_annotation = false;
CPDFConversion::StartPDFToMarkdown("input.pdf", "password", "path/output.md", opt);
```

### **Sample**

Full code sample which shows how to convert from a PDF to Markdown file.

```c++
ConvertOptions opt;
// Extract PDF to Markdown.
CPDFConversion::StartPDFToMarkdown("markdown.pdf", "password", "path/output.md", opt);
```

# 5. Support

## 5.1 FAQ

- Does OCR work on x86 architecture?

  Currently, the OCR only works on x64 architecture.

## 5.2 Contact Us

Thanks for your interest in PDFSolid Conversion SDK, the easy-to-use and powerful development solution. If you encounter technical questions or bug issues when using PDFSolid Conversion SDK, please submit the problem report to the [PDFSolid Conversion SDK team](mailto:support@pdfsolid.com). More information as follows would help us to solve your problem:

- PDFSolid Conversion SDK product and version.
- Your operating system and IDE version.
- Detailed descriptions of the problem.
- Any other related information, such as an error screenshot.

### **Contact Inforation**

- Home link: [https://www.pdfsolid.com](https://www.pdfsolid.com/)

- Email: [support@pdfsolid.com](mailto:support@pdfsolid.com)

Thanks, 
The PDFSolid Conversion SDK Team
# PDFSolid Conversion SDK for C++

High-performance C++ SDK for converting PDF documents to Word, Excel, PowerPoint, HTML, Image, TXT, RTF, CSV, JSON, Markdown, Searchable PDF, and OFD formats. Powered by AI-driven OCR, Layout Analysis, and Table Recognition.

## Features

- **12+ Output Formats** — PDF to Word (.docx), Excel (.xlsx), PowerPoint (.pptx), HTML (.html), CSV (.csv), Image (.png/.jpg/.jpeg/.jpeg2000/.bmp/.tiff/.tga/.gif/.webp), TXT (.txt), RTF (.rtf), Searchable PDF (.pdf), OFD (.ofd), JSON (.json), Markdown (.md)
- **AI-Powered Document Tools** — OCR, Layout Analysis, Table Recognition
- **Custom AI Engine Support** — Plug in your own OCR/Layout/Table models via callbacks (SDK v4.1.0+)
- **Layout Preservation** — Flow Layout and Box Layout modes
- **Cross-Platform** — Windows, Linux, macOS

## System Requirements

| Platform | Requirements | Development Environment |
|----------|-------------|------------------------|
| Windows | Windows 7/8/10/11 (32-bit, 64-bit), C++11+ | Visual Studio 2022+ |
| Linux | Linux x64, C++11+ | GCC or Clang |
| macOS | macOS 10.14+ (Intel, Apple Silicon), C++11+ | Xcode 13.0+ |

## SDK Package Structure

```
├── doc/          # API reference and developer guide
├── include/      # C++ header files
├── lib/          # Dynamic libraries (x86/x64)
├── resource/     # DocumentAI model resources
├── samples/      # Sample projects and scripts
├── legal.txt     # Legal and copyright information
└── release_notes.txt
```

## Quick Start

### 1. License Verification

```cpp
#include "pdfsolid_conversion.h"

using namespace pdfsolid::base;
using namespace pdfsolid::common;
using namespace pdfsolid::conversion;

ErrorCode code = LibraryManager::LicenseVerify("LICENSE_KEY", "device_id", "app_id");
if (code != ErrorCode::e_ErrSuccess) {
    return code;
}
```

### 2. Initialize SDK Resources

```cpp
LibraryManager::Initialize("PDFSolid_Conversion_SDK/resource");
```

### 3. Set DocumentAI Model (required for OCR / Layout / Table Recognition)

```cpp
LibraryManager::SetDocumentAIModel("path/documentai.model", -1);
```

### 4. Convert PDF

```cpp
ConvertOptions opt;
CConvertCallback callback = {};

// PDF to Word
CPDFConversion::StartPDFToWord("input.pdf", "password", "output.docx", opt, &callback);

// PDF to Excel
CPDFConversion::StartPDFToExcel("input.pdf", "password", "output.xlsx", opt, &callback);

// PDF to PowerPoint
CPDFConversion::StartPDFToPpt("input.pdf", "password", "output.pptx", opt, &callback);

// PDF to HTML
CPDFConversion::StartPDFToHtml("input.pdf", "password", "output.html", opt, &callback);

// PDF to Image
opt.image_type = ImageType::e_PNG;
CPDFConversion::StartPDFToImage("input.pdf", "password", "output", opt, &callback);

// PDF to TXT
CPDFConversion::StartPDFToTxt("input.pdf", "password", "output.txt", opt, &callback);

// PDF to JSON
CPDFConversion::StartPDFToJson("input.pdf", "password", "output.json", opt, &callback);

// PDF to Markdown
CPDFConversion::StartPDFToMarkdown("input.pdf", "password", "output.md", opt, &callback);

// PDF to RTF
CPDFConversion::StartPDFToRtf("input.pdf", "password", "output.rtf", opt, &callback);

// PDF to CSV
opt.excel_csv_format = true;
CPDFConversion::StartPDFToExcel("input.pdf", "password", "output.csv", opt, &callback);

// PDF to Searchable PDF (requires OCR)
opt.enable_ocr = true;
opt.languages[0] = OCRLanguage::e_English;
opt.language_count = 1;
opt.transparent_text = true;
CPDFConversion::StartPDFToSearchablePdf("scan.pdf", "password", "output.pdf", opt, &callback);

// PDF to OFD
CPDFConversion::StartPDFToOfd("scan.pdf", "password", "output.ofd", opt, &callback);
```

### 5. Release Resources

```cpp
LibraryManager::ReleaseDocumentAIModel();
LibraryManager::Release();
```

## Running the Demo

### Windows

1. Open `samples/demo_vs2022.sln` in Visual Studio 2022.
2. Build via **Build > Build Solution**.
3. Run the generated `.exe` in `samples/bin/`.

### Linux / macOS

```shell
cd samples
./RunDemo.sh
```

Output files are generated in `samples/output_files/`.

## Conversion Options

### Page Layout Mode

```cpp
ConvertOptions opt;

// Flow Layout — flexible, adapts to screen sizes
opt.page_layout_mode = PageLayoutMode::e_Flow;

// Box Layout — pixel-accurate positioning
opt.page_layout_mode = PageLayoutMode::e_Box;
```

### Page Range Selection

```cpp
ConvertOptions opt;
strcpy(opt.page_ranges, "1-3,5,7-9");
opt.output_document_per_page = true;
```

### Image & Annotation Control

```cpp
ConvertOptions opt;
opt.contain_image = true;
opt.contain_annotation = true;
```

### OCR Configuration

```cpp
ConvertOptions opt;
opt.enable_ocr = true;
opt.languages[0] = OCRLanguage::e_English;
opt.languages[1] = OCRLanguage::e_Chinese;
opt.language_count = 2;
opt.ocr_option = OCROption::e_ScanPage;
```

Supported OCR languages: Chinese (Simplified/Traditional), English, Korean, Japanese, Latin, Devanagari, Cyrillic, Arabic, Tamil, Telugu, Kannada, Thai, Greek, Eslav, Auto.

### Image Conversion Options

```cpp
ConvertOptions opt;
opt.image_type = ImageType::e_PNG;       // JPG, JPEG, JPEG2000, PNG, BMP, TIFF, TGA, GIF, WEBP
opt.image_color_mode = ImageColorMode::e_Color;  // Color, Gray, Binary
opt.image_scaling = 2.0;                 // Scale factor
opt.image_path_enhance = true;           // Enhance path rendering
```

### Excel Options

```cpp
ConvertOptions opt;
opt.excel_all_content = true;
opt.excel_worksheet_option = ExcelWorksheetOption::e_ForDocument;
// Options: e_ForTable, e_ForPage, e_ForDocument
```

### HTML Options

```cpp
ConvertOptions opt;
opt.html_option = HtmlOption::e_MultiPageWithBookmark;
// Options: e_SinglePage, e_SinglePageWithBookmark, e_MultiPage, e_MultiPageWithBookmark
```

### Progress & Cancellation Callbacks

```cpp
void Progress(int current, int total) {
    std::cout << current << " / " << total << std::endl;
}

bool Cancel() {
    return false; // return true to cancel
}

CConvertCallback callback = {};
callback.progress = Progress;
callback.cancel = Cancel;

CPDFConversion::StartPDFToWord("input.pdf", "", "output.docx", opt, &callback);
```

### Custom AI Models (SDK v4.1.0+)

```cpp
CConvertCallback callback = {};
callback.ocr = MyOcrTrigger;
callback.get_ocr_result = MyOcrGetter;
callback.layout = MyLayoutTrigger;
callback.get_layout_result = MyLayoutGetter;
callback.table = MyTableTrigger;
callback.get_table_result = MyTableGetter;

CPDFConversion::StartPDFToWord("input.pdf", "", "output.docx", opt, &callback);
```

See the [Developer Guide](doc/developer_guide_c++.md) for JSON schema details on custom AI callbacks.

## API Reference

| API | Description |
|-----|-------------|
| `CPDFConversion::StartPDFToWord` | Convert PDF to Word (.docx) |
| `CPDFConversion::StartPDFToExcel` | Convert PDF to Excel (.xlsx) / CSV |
| `CPDFConversion::StartPDFToPpt` | Convert PDF to PowerPoint (.pptx) |
| `CPDFConversion::StartPDFToHtml` | Convert PDF to HTML (.html) |
| `CPDFConversion::StartPDFToImage` | Convert PDF to Image |
| `CPDFConversion::StartPDFToTxt` | Convert PDF to Plain Text (.txt) |
| `CPDFConversion::StartPDFToRtf` | Convert PDF to RTF (.rtf) |
| `CPDFConversion::StartPDFToJson` | Extract PDF to JSON (.json) |
| `CPDFConversion::StartPDFToMarkdown` | Extract PDF to Markdown (.md) |
| `CPDFConversion::StartPDFToSearchablePdf` | Convert PDF to Searchable PDF |
| `CPDFConversion::StartPDFToOfd` | Convert PDF to OFD (.ofd) |
| `LibraryManager::LicenseVerify` | Verify license key |
| `LibraryManager::Initialize` | Initialize SDK resources |
| `LibraryManager::Release` | Release all SDK resources |
| `LibraryManager::SetDocumentAIModel` | Load DocumentAI model |
| `LibraryManager::SetDocumentAIModelCount` | Set AI model instance count |
| `LibraryManager::ReleaseDocumentAIModel` | Release AI model resources |
| `LibraryManager::GetPageCount` | Get document page count |
| `LibraryManager::GetVersion` | Get SDK version string |

## License

This is a commercial SDK. Contact [support@pdfsolid.com](mailto:support@pdfsolid.com) for a 30-day free trial or commercial license.

## Support

- Website: [https://www.pdfsolid.com](https://www.pdfsolid.com/)
- Email: [support@pdfsolid.com](mailto:support@pdfsolid.com)

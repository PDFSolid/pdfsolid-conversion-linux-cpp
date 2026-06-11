# PDFSolid Conversion SDK for C++ (Linux)

High-performance C++ SDK for converting PDF to Word, Excel, PowerPoint, HTML, Image, TXT, RTF, CSV, JSON, Markdown, Searchable PDF, and OFD with AI-powered OCR, layout analysis, and table recognition.

## Features

- **PDF to Word** (.docx) — Flow and Box layout modes
- **PDF to Excel** (.xlsx) — per-table, per-page, or per-document worksheet options
- **PDF to PowerPoint** (.pptx)
- **PDF to HTML** (.html) — single/multi-page with optional bookmark navigation
- **PDF to CSV** (.csv)
- **PDF to Image** (.png, .jpg, .jpeg, .jpeg2000, .bmp, .tiff, .tga, .gif, .webp) — color/grayscale/binary, configurable scaling
- **PDF to Plain Text** (.txt) — optional table format preservation
- **PDF to RTF** (.rtf)
- **PDF to Searchable PDF** (.pdf) — OCR with transparent text layer
- **PDF to OFD** (.ofd) — OCR, page background preservation, transparent text layer
- **PDF to JSON** (.json) — structured data with table extraction
- **PDF to Markdown** (.md)

### AI-Powered Document Tools

- **OCR** — Optical Character Recognition for scanned documents and images
- **Layout Analysis** — AI-based document structure parsing
- **Table Recognition** — AI-based table structure reconstruction
- **Custom AI Models** — plug in your own OCR, layout, or table engine via callbacks (SDK v1.1.0+)

## Requirements

| Platform | System Requirements | Development Environment |
| -------- | ------------------- | ----------------------- |
| Linux | Linux x64, GLIBC 2.31+, C++11+ | GCC or Clang |

## Quick Start

### 1. Get a License

Contact [sales@pdfsolid.com](mailto:sales@pdfsolid.com) for a 30-day free trial or commercial license.

### 2. Apply License and Initialize

```cpp
#include "pdfsolid_conversion.h"

using namespace pdfsolid::base;
using namespace pdfsolid::common;
using namespace pdfsolid::conversion;

ErrorCode code = LibraryManager::LicenseVerify("LICENSE_KEY", "device_id", "app_id");
if (code != ErrorCode::e_ErrSuccess) {
    return code;
}
LibraryManager::Initialize("PDFSolid_Conversion_SDK/resource");
```

### 3. Convert

```cpp
ConvertOptions opt;
CPDFConversion::StartPDFToWord("input.pdf", "", "output.docx", opt, nullptr);
```

### Release Resources

```cpp
LibraryManager::ReleaseDocumentAIModel();
LibraryManager::Release();
```

## Conversion Examples

### PDF to Excel

```cpp
ConvertOptions opt;
opt.excel_worksheet_option = ExcelWorksheetOption::e_ForTable;
CPDFConversion::StartPDFToExcel("input.pdf", "", "output.xlsx", opt, nullptr);
```

### PDF to Image

```cpp
ConvertOptions opt;
opt.image_type = ImageType::e_PNG;
opt.image_scaling = 2.0;
CPDFConversion::StartPDFToImage("input.pdf", "", "output", opt, nullptr);
```

### PDF to Searchable PDF (OCR)

```cpp
LibraryManager::SetDocumentAIModel("path/model");

ConvertOptions opt;
opt.enable_ocr = true;
opt.languages[0] = OCRLanguage::e_English;
opt.language_count = 1;
opt.transparent_text = true;
CPDFConversion::StartPDFToSearchablePdf("scan.pdf", "", "output.pdf", opt, nullptr);
```

### PDF to JSON with Table Extraction

```cpp
ConvertOptions opt;
opt.json_contain_table = true;
CPDFConversion::StartPDFToJson("input.pdf", "", "output.json", opt, nullptr);
```

### Custom AI Engine (SDK v1.1.0+)

```cpp
static bool MyOcrTrigger(const char *image_path) { /* your OCR */ return true; }
static const char *MyOcrGetter() { return ""; }
static bool MyLayoutTrigger(const char *image_path) { /* your layout */ return true; }
static const char *MyLayoutGetter() { return ""; }
static bool MyTableTrigger(const char *image_path) { /* your table */ return true; }
static const char *MyTableGetter() { return ""; }

CConvertCallback callback = {};
callback.ocr = MyOcrTrigger;
callback.get_ocr_result = MyOcrGetter;
callback.layout = MyLayoutTrigger;
callback.get_layout_result = MyLayoutGetter;
callback.table = MyTableTrigger;
callback.get_table_result = MyTableGetter;

ConvertOptions opt;
opt.enable_ocr = true;
opt.enable_ai_layout = true;
CPDFConversion::StartPDFToWord("input.pdf", "", "output.docx", opt, &callback);
```

## Documentation

- [Developer Guide](doc/developer_guide_c++.md)
- [API Reference](doc/api_reference_cpp.html)

## Contact

- Website: [https://www.pdfsolid.com](https://www.pdfsolid.com/)
- Sales: [sales@pdfsolid.com](mailto:sales@pdfsolid.com)
- Support: [support@pdfsolid.com](mailto:support@pdfsolid.com)

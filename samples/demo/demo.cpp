#include <iostream>
#include <string>

#include "pdfsolid_conversion.h"

using namespace pdfsolid;
using namespace pdfsolid::base;
using namespace pdfsolid::common;
using namespace pdfsolid::conversion;

std::string input_file = "../input_files/";
std::string output_file = "../output_files/";
std::string password = "";

const char* license = "../license.xml";

auto progress_lambda = [](int current_page_count, int total_page_count) {
    std::cout << "lambda convert rate: " << current_page_count << "/" << total_page_count << std::endl;
};

auto cancel_lambda = []() -> bool {
    // Return true to cancel the conversion, false to continue.
    return false;
	};

static void print_result(const char* name, ErrorCode error_code)
{
    std::cout << name << ": " << static_cast<int>(error_code) << std::endl;
}

int main()
{
    print_result("pdfsolid conversion sdk license verify",
                 LibraryManager::LicenseVerify(license, "", ""));
    LibraryManager::Initialize("../../resource");
    LibraryManager::SetLogger(false, false);

    print_result("set document ai model",
                 LibraryManager::SetDocumentAIModel("../../resource/models/documentai.model"));
    ConvertOptions opt;
    CConvertCallback callback = {};
	callback.progress = progress_lambda;
	callback.cancel = cancel_lambda;
    // pdf to word
    print_result("pdf to word",
                 CPDFConversion::StartPDFToWord((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("word.docx").c_str(), opt, &callback));

    // pdf to excel
    print_result("pdf to excel",
                 CPDFConversion::StartPDFToExcel((input_file + "excel.pdf").c_str(), password.c_str(), std::string(output_file).append("excel.xlsx").c_str(), opt, &callback));

    // pdf to ppt
    print_result("pdf to ppt",
                 CPDFConversion::StartPDFToPpt((input_file + "powerpoint.pdf").c_str(), password.c_str(), std::string(output_file).append("powerpoint.pptx").c_str(), opt, &callback));

    // pdf to csv
    opt.excel_csv_format = true;
    print_result("pdf to csv",
                 CPDFConversion::StartPDFToExcel((input_file + "excel.pdf").c_str(), password.c_str(), std::string(output_file).c_str(), opt, &callback));
    opt.excel_csv_format = false;

    // pdf to html
    opt.page_layout_mode = PageLayoutMode::e_Box;
    print_result("pdf to html",
                 CPDFConversion::StartPDFToHtml((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("html.html").c_str(), opt, &callback));

    // pdf to rtf
    print_result("pdf to rtf",
                 CPDFConversion::StartPDFToRtf((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("rtf.rtf").c_str(), opt, &callback));

    // pdf to image
    print_result("pdf to image",
                 CPDFConversion::StartPDFToImage((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).c_str(), opt, &callback));

    // pdf to txt
    print_result("pdf to txt",
                 CPDFConversion::StartPDFToTxt((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("txt.txt").c_str(), opt, &callback));

    // pdf to json
    print_result("pdf to json",
                 CPDFConversion::StartPDFToJson((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("json.json").c_str(), opt, &callback));

    // pdf to markdown
    print_result("pdf to markdown",
                 CPDFConversion::StartPDFToMarkdown((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("markdown.md").c_str(), opt, &callback));


    // pdf to searchable pdf
    opt.enable_ocr = true;
	opt.transparent_text = true;
	opt.languages[0] = OCRLanguage::e_English;
    opt.language_count = 1;
    print_result("pdf to searchable pdf",
                 CPDFConversion::StartPDFToSearchablePdf((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("pdf.pdf").c_str(), opt, &callback));

    // pdf to ofd
    print_result("pdf to ofd",
                 CPDFConversion::StartPDFToOfd((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("pdf.ofd").c_str(), opt, &callback));

    char version[30];
    LibraryManager::GetVersion(version);
    std::cout << "pdfsolid conversion sdk version: " << version << std::endl;
    
    LibraryManager::Release();
    return 0;
}

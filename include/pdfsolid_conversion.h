#ifndef PDFSOLID_CONVERSION_H
#define PDFSOLID_CONVERSION_H

#include "library_manager.h"

namespace pdfsolid {
namespace conversion {

/// \class CPDFConversion
/// \brief Provides functionalities to convert PDF files into various formats such as Word, Excel, PPT, HTML, etc.
class PDFSOLID_DECL CPDFConversion
{
public:
    /// \brief Starts the conversion of a PDF file to a Word document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToWord(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a Word document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToWord(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a Word document to a PDF file with default options.
    ///
    /// \param[in] file_path The input Word document path.
    /// \param[in] output_path The output PDF path.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \param[out] diagnostics Optional caller-allocated buffer of 8192 bytes that receives UTF-8 diagnostic
    ///             text. The first line is "output=produced" or "output=not_produced"; each following line is
    ///             one "feature:reason" entry, reported once per feature. The buffer is set to an empty string
    ///             when there is nothing to report. The SDK never allocates or frees it. Pass nullptr if not needed.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    ///         Returns e_ErrUnsupportedFeature when the document uses features that may affect fidelity; the
    ///         PDF is usually still produced in that case. A real conversion failure returns its own error code,
    ///         which takes precedence. Returns e_ErrOutOfMemory if the diagnostics do not fit in the buffer.
    static base::ErrorCode StartWordToPdf(const char* file_path, const char* output_path, CConvertCallback* callback = nullptr, char* diagnostics = nullptr);
    /// \brief Starts the conversion of a Word document to a PDF file with default options, using wide-character strings.
    ///
    /// \param[in] file_path The input Word document path as a wide-character string.
    /// \param[in] output_path The output PDF path as a wide-character string.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \param[out] diagnostics Optional caller-allocated buffer of 8192 bytes that receives UTF-8 diagnostic
    ///             text. See the const char* overload for its format. Pass nullptr if not needed.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    ///         See the const char* overload for e_ErrUnsupportedFeature and e_ErrOutOfMemory.
    static base::ErrorCode StartWordToPdf(const wchar_t* file_path, const wchar_t* output_path, CConvertCallback* callback = nullptr, char* diagnostics = nullptr);
    /// \brief Starts the conversion of a Word document to a PDF file with options.
    ///
    /// \param[in] file_path The input Word document path.
    /// \param[in] output_path The output PDF path.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings. Word to PDF uses page_ranges
    ///            and word_pdf_bookmark_mode; the other options do not apply.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \param[out] diagnostics Optional caller-allocated buffer of 8192 bytes that receives UTF-8 diagnostic
    ///             text. The first line is "output=produced" or "output=not_produced"; each following line is
    ///             one "feature:reason" entry, reported once per feature. The buffer is set to an empty string
    ///             when there is nothing to report. The SDK never allocates or frees it. Pass nullptr if not needed.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    ///         Returns e_ErrUnsupportedFeature when the document uses features that may affect fidelity; the
    ///         PDF is usually still produced in that case. A real conversion failure returns its own error code,
    ///         which takes precedence. Returns e_ErrOutOfMemory if the diagnostics do not fit in the buffer.
    ///         Returns e_ErrPDFPage if page_ranges selects no existing page.
    static base::ErrorCode StartWordToPdf(const char* file_path, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr, char* diagnostics = nullptr);
    /// \brief Starts the conversion of a Word document to a PDF file with options, using wide-character strings.
    ///
    /// \param[in] file_path The input Word document path as a wide-character string.
    /// \param[in] output_path The output PDF path as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings. Word to PDF uses page_ranges
    ///            and word_pdf_bookmark_mode; the other options do not apply.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \param[out] diagnostics Optional caller-allocated buffer of 8192 bytes that receives UTF-8 diagnostic
    ///             text. See the const char* overload for its format. Pass nullptr if not needed.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    ///         See the const char* overload for e_ErrUnsupportedFeature, e_ErrOutOfMemory and e_ErrPDFPage.
    static base::ErrorCode StartWordToPdf(const wchar_t* file_path, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr, char* diagnostics = nullptr);

     /// \brief Starts the conversion of a PDF file to an Excel document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToExcel(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an Excel document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToExcel(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a PowerPoint presentation.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToPpt(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a PowerPoint presentation using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToPpt(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an HTML document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToHtml(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an HTML document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToHtml(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an image format.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file(s).
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToImage(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an image format using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file(s) as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToImage(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a Markdown document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToMarkdown(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a Markdown document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToMarkdown(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an RTF document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToRtf(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an RTF document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToRtf(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a plain text file.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToTxt(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a plain text file using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToTxt(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a JSON file.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToJson(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a JSON file using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToJson(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a searchable PDF.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToSearchablePdf(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a searchable PDF using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToSearchablePdf(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an OFD document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToOfd(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an OFD document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToOfd(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
};

}  // namespace conversion
}  // namespace pdfsolid

#endif //PDFSOLID_CONVERSION_H

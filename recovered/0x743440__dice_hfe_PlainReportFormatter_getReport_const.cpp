// FUNCTION: BF2 0x743440
#include <string>

namespace dice { namespace hfe {

class ReportFormatter {
public:
    virtual ~ReportFormatter();
    char _pad[0x18];
};

struct ReportBuf {
    char _pad[0x18];
    char* p18;
    char* p20;
    char* p28;
};

class PlainReportFormatter : public ReportFormatter {
public:
    ReportBuf m_buf;
    char _pad1[0x18];
    std::string m_str;
    std::string getReport() const;
};

std::string PlainReportFormatter::getReport() const
{
    const ReportBuf& b = m_buf;
    std::string s;
    if (b.p28 == 0)
    {
        s.assign(m_str);
    }
    else if (b.p28 > b.p18)
    {
        s.assign(std::string(b.p20, b.p28));
    }
    else
    {
        s.assign(std::string(b.p20, b.p18));
    }
    return s;
}

} }
// REVERSED_FUNCTION: dice_hfe_PlainReportFormatter_getReport_const (0x743440)

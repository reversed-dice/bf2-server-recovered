// FUNCTION: BF2 0x743f10
#include <string>

namespace dice { namespace hfe {

class ReportTimerInfo;
class ReportThreadInfo;

std::string formatString(char const*, ...);

class ReportFormatter {
public:
    virtual ~ReportFormatter();
};

class XmlReportFormatter : public ReportFormatter {
public:
    virtual void beginReport();
    virtual void endReport();
    virtual void beginNode(ReportTimerInfo const&);
    virtual void reportCounterSummary(char const*, int, double);
    virtual void endNode();
    virtual void infoNode(std::string const& name, double value);
    virtual void infoNode(std::string const&, std::string const&);
    virtual void beginHeader(std::string const&, std::string const&);
    virtual void endHeader();
    virtual void beginThreads();
    virtual void reportThread(ReportThreadInfo const&);
    virtual void endThreads();
    virtual std::string getReport() const;
};

void XmlReportFormatter::infoNode(std::string const& name, double value)
{
    beginHeader(name, formatString("%3.4lf", value));
    endHeader();
}

} }

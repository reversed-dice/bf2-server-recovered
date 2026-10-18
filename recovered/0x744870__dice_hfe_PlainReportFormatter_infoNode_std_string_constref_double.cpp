// FUNCTION: BF2 0x744870
// BF2_FLAGS: -fno-strict-aliasing --param inline-unit-growth=200
#include <sstream>
#include <string>

namespace dice { namespace hfe {

struct ReportTimerInfo { int _dummy[16]; };
struct ReportThreadInfo { int _dummy[16]; };

class ReportFormatter {
 public:
    virtual ~ReportFormatter();
};

class PlainReportFormatter : public ReportFormatter {
 public:
    virtual ~PlainReportFormatter();
    virtual void beginReport();
    virtual void endReport();
    virtual void beginNode(ReportTimerInfo const&);
    virtual void reportCounterSummary(char const*, int, double);
    virtual void endNode();
    virtual void infoNode(std::string const&, double);
    virtual void infoNode(std::string const&, std::string const&);
    virtual void beginHeader(std::string const&, std::string const&);
    virtual void endHeader();
    virtual void beginThreads();
    virtual void reportThread(ReportThreadInfo const&);
    virtual void endThreads();
    virtual std::string getReport() const;
};

} }

void dice::hfe::PlainReportFormatter::infoNode(std::string const& in, double value)
{
    std::stringstream ss;
    ss << value;
    this->infoNode(in, ss.str());
}

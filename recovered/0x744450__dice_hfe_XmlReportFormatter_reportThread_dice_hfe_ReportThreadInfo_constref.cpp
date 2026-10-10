// FUNCTION: BF2 0x744450
// FUNCTION: BF2 0x743e90
#include <string>
#include <iostream>
namespace dice { namespace hfe {

std::string formatString(char const*, ...);

struct ReportThreadInfo { char const* name; int id; float f0; float f1; float f2; float f3; float f4; float f5; };

class ReportFormatter {
public:
    virtual ~ReportFormatter();
};

class XmlReportFormatter : public ReportFormatter {
public:
    virtual void beginReport();
    virtual void endReport();
    virtual void beginNode(void const*);
    virtual void reportCounterSummary(char const*, int, double);
    virtual void endNode();
    virtual void infoNode(std::string const& name, double value);
    virtual void infoNode(std::string const& a, std::string const& b);
    virtual void beginHeader(std::string const& a, std::string const& b);
    virtual void endHeader();
    virtual void beginThreads();
    virtual void reportThread(ReportThreadInfo const&);
    virtual void endThreads();
    virtual std::string getReport() const;
};

void XmlReportFormatter::reportThread(ReportThreadInfo const& info)
{
    (*(std::ostream*)((char*)this + 0x18)) << formatString("<Node name=\"%s\" id=\"%d\" pageFaults=\"\" timePerTick=\"%3.4f\" callsPerTick=\"%3.4f\" timePerFrame=\"%3.4f\" callsPerFrame=\"%3.4f\" timePerCall=\"%3.4f\" minTime=\"%3.4f\" maxTime=\"\" guardTime=\"\" allocatedMemory=\"\" allocatedMemoryIncrease=\"\" allocationCalls=\"\" allocationCallIncrease=\"\" localPercent=\"\" globalPercent=\"\" />",
        info.name, info.id, info.f0, info.f1, info.f2, info.f3, info.f4, info.f5) << std::endl;
}

} }

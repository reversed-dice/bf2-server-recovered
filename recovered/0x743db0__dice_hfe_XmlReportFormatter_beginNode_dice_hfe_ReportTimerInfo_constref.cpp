// FUNCTION: BF2 0x743db0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <sstream>

namespace dice { namespace hfe {
std::string formatString(char const*, ...);
struct ReportTimerInfo {
    char const* name;
    int id;
    int pageFaults;
    double t0, t1, t2, t3, t4, t5, t6, t7;
    double a50, a58, a60, a68, a70, a78;
};
struct XmlReportFormatter {
    char _pad[0x18];
    std::ostringstream _os;
};
}}
extern "C" void fn_0x743db0(dice::hfe::XmlReportFormatter* self, dice::hfe::ReportTimerInfo const& info) {
    std::string line = dice::hfe::formatString("<Node name=\"%s\" id=\"%d\" pageFaults=\"%d\" timePerTick=\"%3.4lf\" callsPerTick=\"%3.2lf\" timePerFrame=\"%3.4lf\" callsPerFrame=\"%3.2lf\" timePerCall=\"%3.4lf\" minTime=\"%3.4lf\" maxTime=\"%3.4lf\" guardTime=\"%3.4lf\" allocatedMemory=\"%3.1lf\" allocatedMemoryIncrease=\"%3.1lf\" allocationCalls=\"%3.1lf\" allocationCallIncrease=\"%3.1lf\" localPercent=\"%3.2lf\" globalPercent=\"%3.2lf\" >",
        info.name, info.id, info.pageFaults,
        info.t0, info.t1, info.t2, info.t3, info.t4, info.t5, info.t6, info.t7,
        info.a68, info.a78, info.a60, info.a70, info.a50, info.a58);
    self->_os << line << std::endl;
}

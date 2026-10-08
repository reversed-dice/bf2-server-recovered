// FUNCTION: BF2 0x743e90
#include <string>
#include <sstream>
namespace dice { namespace hfe {
std::string formatString(char const*, ...);
struct XmlReportFormatter {
    char _pad[0x18];
    std::ostringstream _os;
};
}}
extern "C" void fn_0x743e90(dice::hfe::XmlReportFormatter* self, char const* name, int id, double value) {
    std::string line = dice::hfe::formatString("<Node name=\"%s summary\" id=\"%d\" pageFaults=\"\" timePerTick=\"\" callsPerTick=\"\" timePerFrame=\"\" callsPerFrame=\"\" timePerCall=\"\" minTime=\"\" maxTime=\"\" guardTime=\"\" allocatedMemory=\"\" allocatedMemoryIncrease=\"\" allocationCalls=\"\" allocationCallIncrease=\"\" localPercent=\"%3.2lf\" globalPercent=\"\" />", name, id, value);
    self->_os << line << std::endl;
}

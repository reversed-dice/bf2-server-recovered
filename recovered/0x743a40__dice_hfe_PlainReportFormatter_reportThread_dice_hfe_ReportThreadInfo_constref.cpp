// FUNCTION: BF2 0x743a40
#include <string>
#include <sstream>
namespace dice { namespace hfe {
std::string formatString(char const*, ...);
struct ReportThreadInfo {
    char const* name;
    int id;
    float f0, f1, f2, f3, f4, f5;
};
struct PlainReportFormatter {
    char _pad[0x18];
    std::ostringstream _os;
};
}}
extern "C" void fn_0x743a40(dice::hfe::PlainReportFormatter* self, dice::hfe::ReportThreadInfo const& t) {
    std::string line = dice::hfe::formatString("%-25s %2x: userTime/f = %5.2fms [%5.2f, %5.2f], kernelTime/f = %5.2fms  [%5.2f, %5.2f]",
        t.name, t.id, (double)t.f0, (double)t.f1, (double)t.f2, (double)t.f3, (double)t.f4, (double)t.f5);
    self->_os << line << std::endl;
}

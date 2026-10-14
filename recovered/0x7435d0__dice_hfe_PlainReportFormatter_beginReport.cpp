// FUNCTION: BF2 0x7435d0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <sstream>

namespace dice { namespace hfe {
struct PlainReportFormatter {
    char _pad[0x18];
    std::ostringstream _os;
};
}}
extern "C" void fn_0x7435d0(dice::hfe::PlainReportFormatter* self) {
    self->_os.str("");
}

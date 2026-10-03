// FUNCTION: BF2 0x867d50
#include <string>

// dice_hfe_io_anonymous_namespace_ConsoleClass443_executeObjectMethod
// Console query taking the two string arguments the console object holds, with
// the result assigned into the object's own result string.
//
// The console object is modelled as a REAL STRUCT rather than as byte offsets
// off a char*. That is what fixes the register allocation: with pointer
// arithmetic GCC hoists the `self + 0x110` computation above the two copy
// constructors and shuffles which callee-saved register holds `self`, costing
// 12 points. Through a struct member the address is formed where the target
// forms it, immediately before the query call.

namespace dice { namespace hfe { namespace io {

std::string dice_hfe_io_Console_getArgumentTypes_std_string_constref_std_string_constref(const std::string& a, const std::string& b);

struct Console_867d50 {
    char         _pad0[0x30];
    int          argCount;                   // +0x30
    char         _pad1[0x4];
    std::string* arg0;                       // +0x38
    std::string* arg1;                       // +0x40
    char         _pad2[0xc0];
    char         hasResult;                  // +0x108
    char         _pad3[0x7];
    std::string  result;                     // +0x110
};

} } }

extern "C" long eom_867d50(dice::hfe::io::Console_867d50* self)
{
    long ret = 0;
    if (self->argCount == 2) {
        std::string a(*self->arg0);
        std::string b(*self->arg1);
        self->hasResult = 1;
        self->result.assign(dice::hfe::io::dice_hfe_io_Console_getArgumentTypes_std_string_constref_std_string_constref(a, b));
        ret = (long)&self->result;
    }
    return ret;
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass443_executeObjectMethod (0x867d50)

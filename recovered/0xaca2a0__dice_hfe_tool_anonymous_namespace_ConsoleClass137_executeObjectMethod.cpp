// FUNCTION: BF2 0xaca2a0
#include <string>

// dice_hfe_tool_anonymous_namespace_ConsoleClass137_executeObjectMethod
// Prints an object's creation script into the console's own string field at
// +0x110: the object manager's current object for argc 0, the object passed as
// argument for argc 1.
//
// Both result strings are unnamed temporaries on purpose: with named locals
// GCC shares one stack slot across the two branches and the frame comes out
// one slot short of the target.

namespace dice { namespace hfe { namespace tool {
extern char adm_aca2a0[];                                    // 0x1092d80
extern std::string printScript_6ab520(void* adm, void* obj);
} } }

typedef void* (*Slot_aca2a0)(void*);

extern "C" long eom_aca2a0(long param_1)
{
    char* self = (char*)param_1;
    if (__builtin_expect(*(int*)(self + 0x30) == 0, 1)) {
        *(char*)(self + 0x108) = 1;
        void* mgr = *(void**)0x0112ee40;
        char* out = self + 0x110;
        void* obj = (*(Slot_aca2a0*)(*(char**)mgr + 0xa0))(mgr);
        ((std::string*)out)->assign(dice::hfe::tool::printScript_6ab520(
            dice::hfe::tool::adm_aca2a0, obj));
    } else {
        if (*(int*)(self + 0x30) != 1) return 0;
        void* obj = **(void***)(self + 0x38);
        *(char*)(self + 0x108) = 1;
        ((std::string*)(self + 0x110))->assign(
            dice::hfe::tool::printScript_6ab520(
                dice::hfe::tool::adm_aca2a0, obj));
    }
    return (long)(self + 0x110);
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass137_executeObjectMethod (0xaca2a0)

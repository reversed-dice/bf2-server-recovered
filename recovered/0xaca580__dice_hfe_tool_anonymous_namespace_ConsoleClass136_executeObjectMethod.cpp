// FUNCTION: BF2 0xaca580
#include <string>

// dice_hfe_tool_anonymous_namespace_ConsoleClass136_executeObjectMethod
// ConsoleClassNNN::executeObjectMethod -- prints the creation script of either
// the object manager's current object (argc 0) or the object passed as
// argument (argc 1) into the console's own string field at +0x110.

namespace dice { namespace hfe { namespace tool {
extern char objectTemplateAdm_aca580[];
extern std::string printObjectCreationScript_6a83b0(void* adm, void* obj);
} } }

typedef void* (*Fn120)(void*);

extern "C" long eom_aca580(long param_1)
{
    char* self = (char*)param_1;
    if (__builtin_expect(*(int*)(self + 0x30) == 0, 1)) {
        *(char*)(self + 0x108) = 1;
        void* om = *(void**)0x0112ee48;
        char* out = self + 0x110;
        void* obj = (*(Fn120*)(*(char**)om + 0x120))(om);
        ((std::string*)out)->assign(dice::hfe::tool::printObjectCreationScript_6a83b0(
            dice::hfe::tool::objectTemplateAdm_aca580, obj));
    } else {
        if (*(int*)(self + 0x30) != 1) return 0;
        void* obj = **(void***)(self + 0x38);
        *(char*)(self + 0x108) = 1;
        ((std::string*)(self + 0x110))->assign(
            dice::hfe::tool::printObjectCreationScript_6a83b0(
                dice::hfe::tool::objectTemplateAdm_aca580, obj));
    }
    return (long)(self + 0x110);
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass136_executeObjectMethod (0xaca580)

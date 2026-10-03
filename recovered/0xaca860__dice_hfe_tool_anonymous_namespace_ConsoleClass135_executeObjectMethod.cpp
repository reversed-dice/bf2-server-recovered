// FUNCTION: BF2 0xaca860
#include <string>

namespace dice { namespace hfe { namespace tool {

// Declared, not defined: the target CALLs it, so this is a relocation.
std::string dice_hfe_tool_ObjectTemplateAdm_listObjects_aca860(void* adm);

struct Console_aca860 {
    char        _pad0[0x30];
    int         argCount;       // +0x30
    char        _pad1[0xd4];
    char        hasResult;      // +0x108
    char        _pad2[0x7];
    std::string result;         // +0x110
};

extern "C" std::string* pad0_aca860(Console_aca860* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(dice_hfe_tool_ObjectTemplateAdm_listObjects_aca860((void*)0x1092d80));
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}

extern "C" std::string* pad1_aca860(Console_aca860* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(dice_hfe_tool_ObjectTemplateAdm_listObjects_aca860((void*)0x1092d80));
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}

extern "C" std::string* eom_aca860(Console_aca860* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(dice_hfe_tool_ObjectTemplateAdm_listObjects_aca860((void*)0x1092d80));
        // Named intermediate of a different type: keeps `ret` from coalescing
        // with the result-field pointer.
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass135_executeObjectMethod (0xaca860)

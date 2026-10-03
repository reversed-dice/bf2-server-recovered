// FUNCTION: BF2 0xae5840
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
std::string playerManagerList_ae5840();          // returns BY VALUE (sret)

struct Console_ae5840 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* pad0_ae5840(Console_ae5840* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ae5840());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad1_ae5840(Console_ae5840* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ae5840());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* eom_ae5840(Console_ae5840* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ae5840());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass145_executeObjectMethod (0xae5840)

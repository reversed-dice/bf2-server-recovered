// FUNCTION: BF2 0xab1620
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
std::string playerManagerList_ab1620();          // returns BY VALUE (sret)

struct Console_ab1620 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* pad0_ab1620(Console_ab1620* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab1620());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad1_ab1620(Console_ab1620* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab1620());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad2_ab1620(Console_ab1620* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab1620());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad3_ab1620(Console_ab1620* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab1620());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad4_ab1620(Console_ab1620* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab1620());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad5_ab1620(Console_ab1620* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab1620());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* eom_ab1620(Console_ab1620* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab1620());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass438_executeObjectMethod (0xab1620)

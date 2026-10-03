// FUNCTION: BF2 0xab2120
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
std::string playerManagerList_ab2120();          // returns BY VALUE (sret)

struct Console_ab2120 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* pad0_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad1_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad2_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad3_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad4_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad5_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad6_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* pad7_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}


extern "C" std::string* eom_ab2120(Console_ab2120* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        self->result.assign(playerManagerList_ab2120());
        void* a = &self->result;
        ret = (std::string*)a;
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass355_executeObjectMethod (0xab2120)

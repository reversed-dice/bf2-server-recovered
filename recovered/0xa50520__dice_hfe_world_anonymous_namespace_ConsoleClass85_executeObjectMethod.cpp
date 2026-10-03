// FUNCTION: BF2 0xa50520
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTemplate_a50520(unsigned int cid);

typedef std::string (*getfn_a50520)(void*);                  // returns BY VALUE (sret)
typedef void (*setfn_a50520)(void*, const std::string&);     // takes a const reference

struct Console_a50520 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
    char         _pad3[0x7];
    std::string  result;        // +0x110
};

extern "C" std::string* eom_a50520(Console_a50520* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        void* p = getActiveTemplate_a50520(*(unsigned int*)0x00c75d28);
        self->result.assign((*(getfn_a50520*)(*(char**)p + 0x1b8))(p));
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c75d28;
        self->hasResult = 0;
        void* p = getActiveTemplate_a50520(cid);
        (*(setfn_a50520*)(*(char**)p + 0x1b0))(p, a);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass85_executeObjectMethod (0xa50520)

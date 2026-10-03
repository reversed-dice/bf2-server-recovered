// FUNCTION: BF2 0xa0c2f0
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTemplate_a0c2f0(unsigned int cid);

typedef std::string (*getfn_a0c2f0)(void*);                  // returns BY VALUE (sret)
typedef void (*setfn_a0c2f0)(void*, const std::string&);     // takes a const reference

struct Console_a0c2f0 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
    char         _pad3[0x7];
    std::string  result;        // +0x110
};

extern "C" std::string* eom_a0c2f0(Console_a0c2f0* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        void* p = getActiveTemplate_a0c2f0(*(unsigned int*)0x00c7ce90);
        self->result.assign((*(getfn_a0c2f0*)(*(char**)p + 0x278))(p));
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c7ce90;
        self->hasResult = 0;
        void* p = getActiveTemplate_a0c2f0(cid);
        (*(setfn_a0c2f0*)(*(char**)p + 0x270))(p, a);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass313_executeObjectMethod (0xa0c2f0)

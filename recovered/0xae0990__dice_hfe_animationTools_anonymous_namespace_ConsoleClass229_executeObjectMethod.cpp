// FUNCTION: BF2 0xae0990
#include <string>

namespace dice { namespace hfe { namespace animationTools {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTrigger_ae0990(int type);

typedef void (*setfn_ae0990)(void*, const std::string&);

struct Console_ae0990 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
};

extern "C" long eom_ae0990(Console_ae0990* self)
{
    if (self->argCount == 1) {
        std::string a(*self->arg0);
        self->hasResult = 0;
        void* p = getActiveTrigger_ae0990(0);
        (*(setfn_ae0990*)(*(char**)p + 0x88))(p, a);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass229_executeObjectMethod (0xae0990)

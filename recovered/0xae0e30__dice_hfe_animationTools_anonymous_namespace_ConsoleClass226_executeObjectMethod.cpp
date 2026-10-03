// FUNCTION: BF2 0xae0e30
#include <string>

namespace dice { namespace hfe { namespace animationTools {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTrigger_ae0e30(int type);

typedef void (*setfn_ae0e30)(void*, const std::string&);

struct Console_ae0e30 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
};

extern "C" long eom_ae0e30(Console_ae0e30* self)
{
    if (self->argCount == 1) {
        std::string a(*self->arg0);
        self->hasResult = 0;
        void* p = getActiveTrigger_ae0e30(0);
        (*(setfn_ae0e30*)(*(char**)p + 0x60))(p, a);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass226_executeObjectMethod (0xae0e30)

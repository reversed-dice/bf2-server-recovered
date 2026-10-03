// FUNCTION: BF2 0x888f60
#include <string>

namespace dice { namespace hfe {

typedef void (*setfn_888f60)(void*, unsigned int, const std::string&);

struct Console_888f60 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    unsigned int* arg0;         // +0x38
    std::string* arg1;          // +0x40
    char         _pad2[0xc0];
    char         hasResult;     // +0x108
};

extern "C" long eom_888f60(Console_888f60* self)
{
    if (self->argCount == 2) {
        unsigned int id = *self->arg0;
        std::string a(*self->arg1);
        self->hasResult = 0;
        void* g = *(void**)0x010b8c08;
        (*(setfn_888f60*)(*(char**)g + 0x88))(g, id, a);
    }
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass151_executeObjectMethod (0x888f60)

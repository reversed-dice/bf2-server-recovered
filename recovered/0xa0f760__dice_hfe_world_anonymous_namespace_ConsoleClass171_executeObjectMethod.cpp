// FUNCTION: BF2 0xa0f760
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTemplate_a0f760(unsigned int cid);

struct Tmpl_a0f760 {
    char        _pad0[0x858];
    std::string name;
};

struct Console_a0f760 {
    char         _pad0[0x30];
    int          argCount;
    char         _pad1[0x4];
    std::string* arg0;
    char         _pad2[0xc8];
    char         hasResult;
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* eom_a0f760(Console_a0f760* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Tmpl_a0f760* t = (Tmpl_a0f760*)getActiveTemplate_a0f760(*(unsigned int*)0x00c7d080);
        self->result.assign(t->name);
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c7d080;
        self->hasResult = 0;
        Tmpl_a0f760* t = (Tmpl_a0f760*)getActiveTemplate_a0f760(cid);
        t->name.assign(a);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass171_executeObjectMethod (0xa0f760)

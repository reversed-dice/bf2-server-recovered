// FUNCTION: BF2 0xa10a10
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs them, so these are relocations.
void* getActiveTemplate_a10a10(unsigned int cid);
void  updateAlternates_a10a10(void* t);

struct Tmpl_a10a10 {
    char        _pad0[0x3f0];
    std::string name;
};

struct Console_a10a10 {
    char         _pad0[0x30];
    int          argCount;
    char         _pad1[0x4];
    std::string* arg0;
    char         _pad2[0xc8];
    char         hasResult;
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* eom_a10a10(Console_a10a10* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Tmpl_a10a10* t = (Tmpl_a10a10*)getActiveTemplate_a10a10(*(unsigned int*)0x00c7d094);
        self->result.assign(t->name);
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c7d094;
        self->hasResult = 0;
        Tmpl_a10a10* t = (Tmpl_a10a10*)getActiveTemplate_a10a10(cid);
        t->name.assign(a);
        updateAlternates_a10a10(t);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass151_executeObjectMethod (0xa10a10)

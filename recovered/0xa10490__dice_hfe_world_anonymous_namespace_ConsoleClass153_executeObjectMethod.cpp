// FUNCTION: BF2 0xa10490
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs them, so these are relocations.
void* getActiveTemplate_a10490(unsigned int cid);
void  updateAlternates_a10490(void* t);

struct Tmpl_a10490 {
    char        _pad0[0x400];
    std::string name;
};

struct Console_a10490 {
    char         _pad0[0x30];
    int          argCount;
    char         _pad1[0x4];
    std::string* arg0;
    char         _pad2[0xc8];
    char         hasResult;
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* eom_a10490(Console_a10490* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Tmpl_a10490* t = (Tmpl_a10490*)getActiveTemplate_a10490(*(unsigned int*)0x00c7d094);
        self->result.assign(t->name);
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c7d094;
        self->hasResult = 0;
        Tmpl_a10490* t = (Tmpl_a10490*)getActiveTemplate_a10490(cid);
        t->name.assign(a);
        updateAlternates_a10490(t);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass153_executeObjectMethod (0xa10490)

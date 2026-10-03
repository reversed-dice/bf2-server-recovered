// FUNCTION: BF2 0xa11250
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTemplate_a11250(unsigned int cid);

struct Tmpl_a11250 {
    char        _pad0[0x3d8];
    std::string name;
};

struct Console_a11250 {
    char         _pad0[0x30];
    int          argCount;
    char         _pad1[0x4];
    std::string* arg0;
    char         _pad2[0xc8];
    char         hasResult;
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* eom_a11250(Console_a11250* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Tmpl_a11250* t = (Tmpl_a11250*)getActiveTemplate_a11250(*(unsigned int*)0x00c7d094);
        self->result.assign(t->name);
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c7d094;
        self->hasResult = 0;
        Tmpl_a11250* t = (Tmpl_a11250*)getActiveTemplate_a11250(cid);
        t->name.assign(a);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass148_executeObjectMethod (0xa11250)

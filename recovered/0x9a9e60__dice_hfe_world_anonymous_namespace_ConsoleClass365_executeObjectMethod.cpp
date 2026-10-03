// FUNCTION: BF2 0x9a9e60
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so this is a relocation.
void* getActiveTemplate_9a9e60(unsigned int cid);

struct Tmpl_9a9e60 {
    char        _pad0[0x120];
    std::string name;           // +0x120
};

struct Console_9a9e60 {
    char         _pad0[0x30];
    int          argCount;      // +0x30
    char         _pad1[0x4];
    std::string* arg0;          // +0x38
    char         _pad2[0xc8];
    char         hasResult;     // +0x108
    char         _pad3[0x7];
    std::string  result;        // +0x110
};

extern "C" std::string* eom_9a9e60(Console_9a9e60* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Tmpl_9a9e60* t = (Tmpl_9a9e60*)getActiveTemplate_9a9e60(*(unsigned int*)0x00c7ce94);
        self->result.assign(t->name);
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c7ce94;
        self->hasResult = 0;
        Tmpl_9a9e60* t = (Tmpl_9a9e60*)getActiveTemplate_9a9e60(cid);
        t->name.assign(a);
    }
    return ret;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass365_executeObjectMethod (0x9a9e60)

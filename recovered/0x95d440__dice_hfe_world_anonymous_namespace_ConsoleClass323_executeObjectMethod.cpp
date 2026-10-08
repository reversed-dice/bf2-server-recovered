// FUNCTION: BF2 0x95d440
#include <string>

namespace dice { namespace hfe { namespace world {

// Declared, not defined: the target CALLs it, so it is a relocation.
void* getActiveTemplate_95d440(unsigned int cid);

struct Tmpl_95d440 {
    char        _pad0[0x260];
    std::string field;
    char        _pad1[0x8];
    void*       m_270;
};

struct Console_95d440 {
    char         _pad0[0x30];
    int          argCount;
    char         _pad1[0x4];
    std::string* arg0;
    char         _pad2[0xc8];
    char         hasResult;
    char         _pad3[0x7];
    std::string  result;
};

extern "C" std::string* eom_95d440(Console_95d440* self)
{
    std::string* ret = 0;
    if (self->argCount == 0) {
        self->hasResult = 1;
        Tmpl_95d440* t = (Tmpl_95d440*)getActiveTemplate_95d440(*(unsigned int*)0x00c7d02c);
        self->result.assign(t->field);
        void* a = &self->result;
        ret = (std::string*)a;
    } else if (self->argCount == 1) {
        std::string a(*self->arg0);
        unsigned int cid = *(unsigned int*)0x00c7d02c;
        self->hasResult = 0;
        Tmpl_95d440* t = (Tmpl_95d440*)getActiveTemplate_95d440(cid);
        t->field.assign(a);
        t->m_270 = 0;
    }
    return ret;
}

} } }

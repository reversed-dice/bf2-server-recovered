// FUNCTION: BF2 0xac9930
#include <string>
namespace dice { namespace hfe { namespace tool {
struct Adm {
    char loadAllObjects(std::string const& a, std::string const& b);
};
extern Adm objectTemplateAdm;
struct Base {
    char pad0[0x30];
    int mode;
    char pad1[4];
    void* arg;
    char pad2[0xc8];
    char hasResult;
    char pad3;
    char m_flag;
};
void* fn(Base* self) {
    if (self->mode == 0) {
        self->hasResult = 1;
        self->m_flag = objectTemplateAdm.loadAllObjects("Objects.con", "level/");
        return &self->m_flag;
    }
    if (self->mode == 1) {
        std::string a(*(std::string const*)self->arg);
        self->hasResult = 1;
        self->m_flag = objectTemplateAdm.loadAllObjects(a, "level/");
        return &self->m_flag;
    }
    return 0;
}
} } }

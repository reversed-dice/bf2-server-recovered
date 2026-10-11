// FUNCTION: BF2 0xac8770
#include <string>
namespace dice { namespace hfe { namespace tool {
struct Adm { char loadAllTemplates(std::string const& a, std::string const& b); };
extern Adm objectTemplateAdm;
struct Base {
    char pad0[0x30];
    int mode;
    char pad1[0xd4];
    char hasResult;
    char pad3;
    char m_flag;
};
void* pad0(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplates("ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* fn(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplates("ObjectTemplates.con", "object/");
    return &self->m_flag;
}
} } }

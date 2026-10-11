// FUNCTION: BF2 0xac7f40
#include <string>
namespace dice { namespace hfe { namespace tool {
struct Adm {
    char loadAllTemplatesAndObjects(std::string const& a, std::string const& b, std::string const& c, std::string const& d);
};
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
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad1(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad2(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad3(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad4(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad5(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad6(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad7(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* pad8(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
void* fn(Base* self) {
    if (self->mode != 0)
        return 0;
    self->hasResult = 1;
    self->m_flag = objectTemplateAdm.loadAllTemplatesAndObjects("Objects.con", "level/", "ObjectTemplates.con", "object/");
    return &self->m_flag;
}
} } }

// FUNCTION: BF2 0x78c4e0
namespace dice { namespace hfe { namespace world {
extern int CID_LadderContainerTemplate;
extern int CID_ParachuteTemplate;
extern int CID_ZiplineContainerTemplate;
extern int CID_GrapplingHookRopeContainerTemplate;
} } }

namespace dice { namespace hfe { namespace ai {

struct ICid {
    virtual void c0();
    virtual void c1();
    virtual void c2();
    virtual void c3();
    virtual int getClassId();
};

struct ObjTemplateBase {
    char pad_[0x28];
    ICid* m_cid;
};

struct TemplateBase {
    char pad_[0x50];
    ObjTemplateBase* m_objectTemplate;
};

struct Thing {
    char pad_[0x20];
    TemplateBase* m_template;
};

bool isRootObject_0x78c4e0(void* self) {
    Thing* t = (Thing*)self;
    ObjTemplateBase* ot = t->m_template->m_objectTemplate;
    if (!ot) return true;
    if (ot->m_cid->getClassId() == dice::hfe::world::CID_LadderContainerTemplate) return true;
    if (t->m_template->m_objectTemplate->m_cid->getClassId() == dice::hfe::world::CID_ParachuteTemplate) return true;
    if (t->m_template->m_objectTemplate->m_cid->getClassId() == dice::hfe::world::CID_ZiplineContainerTemplate) return true;
    if (t->m_template->m_objectTemplate->m_cid->getClassId() == dice::hfe::world::CID_GrapplingHookRopeContainerTemplate) return true;
    return false;
}

} } }

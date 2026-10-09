// FUNCTION: BF2 0x771480
namespace dice { namespace hfe { namespace world {
extern const unsigned int CID_LadderContainerTemplate;
extern const unsigned int CID_ParachuteTemplate;
extern const unsigned int CID_ZiplineContainerTemplate;
extern const unsigned int CID_GrapplingHookRopeContainerTemplate;
extern const unsigned int IID_IPlayerControlObject;
class IObject {
public:
    char _pad0[0x28];
    void* m_unk28;
    char _pad1[0x68 - 0x28 - 8];
    void* m_aiObject;
};
}}}
namespace dice { namespace hfe { namespace ai {
namespace {
typedef int (*CidFn)(void*);
typedef void* (*SlotFn0)(void*);
typedef void* (*SlotFn1)(void*, unsigned int);
void* getIAIObject(dice::hfe::world::IObject* o) {
    void* obj = o->m_aiObject;
    if (obj != 0)
        return obj;
    obj = 0;
    if (((CidFn)(*(void***)o->m_unk28)[0x20 / 8])(o->m_unk28) ==
        dice::hfe::world::CID_LadderContainerTemplate) {
        void* a = ((SlotFn0)(*(void***)o)[0x318 / 8])(o);
        if (a)
            obj = *(void**)((char*)a + 0x68);
    }
    if (((CidFn)(*(void***)o->m_unk28)[0x20 / 8])(o->m_unk28) ==
        dice::hfe::world::CID_ParachuteTemplate) {
        void* q = ((SlotFn1)(*(void***)o)[0x18 / 8])(o, dice::hfe::world::IID_IPlayerControlObject);
        void* p = ((SlotFn0)(*(void***)q)[0x28 / 8])(q);
        if (p)
            obj = *(void**)((char*)p + 0x68);
    }
    if (((CidFn)(*(void***)o->m_unk28)[0x20 / 8])(o->m_unk28) ==
        dice::hfe::world::CID_ZiplineContainerTemplate) {
        void* a = ((SlotFn0)(*(void***)o)[0x318 / 8])(o);
        if (a)
            obj = *(void**)((char*)a + 0x68);
    }
    if (((CidFn)(*(void***)o->m_unk28)[0x20 / 8])(o->m_unk28) ==
        dice::hfe::world::CID_GrapplingHookRopeContainerTemplate) {
        void* a = ((SlotFn0)(*(void***)o)[0x318 / 8])(o);
        if (a)
            obj = *(void**)((char*)a + 0x68);
    }
    return obj;
}
}
}}}

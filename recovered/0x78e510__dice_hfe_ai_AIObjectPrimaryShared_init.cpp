// FUNCTION: BF2 0x78e510
namespace dice { namespace hfe {
namespace world { class IObject; }
namespace ai {

class AIObject {
public:
    static bool isLocked();
    char _pad0[0x20];
    void* m_20;
};

class AIObjectShared : public AIObject {
public:
    void init();
    char _pad1[0x48];
    void* m_70;
    void* m_78;
};

class AIObjectPrimaryShared : public AIObjectShared {
public:
    void init();
    void traverseObject(dice::hfe::world::IObject*);
};

void AIObjectPrimaryShared::init() {
    if (!isLocked()) {
        AIObjectShared::init();
        if (((long)m_78 - (long)m_70) >> 3 == 0) {
            traverseObject(*(dice::hfe::world::IObject**)((char*)m_20 + 0x58));
            void* obj = ((void* (*)(void*))(*(void***)m_20)[0x1e0 / 8])(m_20);
            traverseObject((dice::hfe::world::IObject*)obj);
        }
    }
}

} } }

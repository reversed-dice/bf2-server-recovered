// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x58ae10
namespace dice { namespace hfe {

namespace ai {
class AIInstanceServer {
public:
    static AIInstanceServer* m_iAI;
};
}

namespace world {

class IObject {
};

class Object : public IObject {
public:
    void enableCachedObject();
};

class PortalManager {
public:
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40(IObject*);
    virtual void v41(IObject*);
};

class SimpleObject : public Object {
public:
    void enableCachedObject();
    void aiObjectCreate();

private:
    char _pad0[0x50];
    void* m_50;
    char _pad1[0x68 - 0x58];
    void* m_68;
};

IObject* getPortalMesh(IObject*, IObject**);

extern PortalManager* portalManager;

} // namespace world

} }

extern "C" int dice_hfe_ai_IID_IWeapon;

namespace dice { namespace hfe { namespace world {

void SimpleObject::enableCachedObject()
{
    if (m_68 != 0) {
        Object::enableCachedObject();
        return;
    }

    if (((long (*)(void*, int, int))(*(void***)this)[0xb8 / 8])(this, dice_hfe_ai_IID_IWeapon, dice_hfe_ai_IID_IWeapon) != 0) {
        Object::enableCachedObject();
        return;
    }

    aiObjectCreate();

    if (ai::AIInstanceServer::m_iAI != 0 &&
        ((bool (*)(void*))(*(void***)ai::AIInstanceServer::m_iAI)[0x38 / 8])(ai::AIInstanceServer::m_iAI)) {
        if (__builtin_expect(m_68 != 0, 1)) {
            ((void (*)(void*))(*(void***)m_68)[0x90 / 8])(m_68);
        }
        if (m_50 == 0) {
            IObject* mesh = getPortalMesh(this, 0);
            if (mesh != 0 &&
                ((int (*)(void*))(*(void***)mesh)[0x20 / 8])(mesh) != 0) {
                ((void (*)(void*, void*))(*(void***)portalManager)[0x40 / 8])(portalManager, this);
            }
        }
    }

    Object::enableCachedObject();
}

} } }

// FUNCTION: BF2 0x4769f0
// BF2_FLAGS: -fcrossjumping
#include <map>

namespace dice { namespace hfe {
namespace world {
class IObject {
public:
    char _pad[0xb];
    unsigned char m_flags; // +0xb
    char _pad2[0xf0 - 0xc];
    bool m_createdOnLoad;  // +0xf0
};

class ObjectManager {
public:
    virtual void dummy0();
    // slot +0x168 (index 45)
    virtual void p001(); virtual void p002(); virtual void p003(); virtual void p004();
    virtual void p005(); virtual void p006(); virtual void p007(); virtual void p008();
    virtual void p009(); virtual void p010(); virtual void p011(); virtual void p012();
    virtual void p013(); virtual void p014(); virtual void p015(); virtual void p016();
    virtual void p017(); virtual void p018(); virtual void p019(); virtual void p020();
    virtual void p021(); virtual void p022(); virtual void p023(); virtual void p024();
    virtual void p025(); virtual void p026(); virtual void p027(); virtual void p028();
    virtual void p029(); virtual void p030(); virtual void p031(); virtual void p032();
    virtual void p033(); virtual void p034(); virtual void p035(); virtual void p036();
    virtual void p037(); virtual void p038(); virtual void p039(); virtual void p040();
    virtual void p041(); virtual void p042(); virtual void p043(); virtual void p044();
    virtual std::map<unsigned int, IObject*> const& getAllRegisteredObjects() const;
};

extern ObjectManager* objectManager;
}

class GameLogic {
public:
    virtual ~GameLogic();
    char _pad[0x448 - 8];
    bool m_field448; // +0x448

    virtual bool setCreatedOnLoadFlag();
};

bool GameLogic::setCreatedOnLoadFlag()
{
    std::map<unsigned int, world::IObject*> const& objs = world::objectManager->getAllRegisteredObjects();
    for (std::map<unsigned int, world::IObject*>::const_iterator it = objs.begin(); it != objs.end(); ++it) {
        if (m_field448)
            return false;
        world::IObject* obj = it->second;
        if (obj->m_flags & 1) {
            obj->m_createdOnLoad = true;
        }
    }
    return true;
}

} }

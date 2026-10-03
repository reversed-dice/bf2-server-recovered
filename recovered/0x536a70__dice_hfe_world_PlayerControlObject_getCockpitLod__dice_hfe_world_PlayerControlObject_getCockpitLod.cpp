// FUNCTION: BF2 0x536a70
namespace dice { namespace hfe { namespace world {

struct ObjectBluePrint {
    unsigned char _pad0[0x35c];
    unsigned int m_cockpitLod; // offset 0x35c
};

class PlayerControlObject {
public:
    unsigned int getCockpitLod() const;

private:
    unsigned char __pad0[0x250];
    ObjectBluePrint* m_pObject; // offset 0x250
};

unsigned int PlayerControlObject::getCockpitLod() const {
    return m_pObject->m_cockpitLod;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getCockpitLod (0x536a70)
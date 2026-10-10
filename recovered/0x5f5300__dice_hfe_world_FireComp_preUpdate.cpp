// FUNCTION: BF2 0x5f5300
namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

} }

namespace dice { namespace hfe { namespace world {

enum FireState { FireStateIdle, FireState1, FireState2, FireState3, FireStateFire };

class FireComp {
public:
    bool preUpdate();
    void setFireState(FireState s);
    unsigned char _pad0[0x44];
    unsigned int m_x44;
    unsigned char _pad1[0x88 - 0x48];
    bool m_x88;
    unsigned char _pad2[3];
    unsigned int m_x8c;
    unsigned char _pad3[0x94 - 0x90];
    bool m_x94;
};

bool FireComp::preUpdate()
{
    if (!m_x88)
        return false;
    unsigned int t = m_x44;
    if (m_x8c + t < WorldPref::getTickCount()) {
        m_x94 = false;
        m_x88 = false;
        setFireState(FireState2);
        return true;
    }
    return false;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_preUpdate (0x5f5300)

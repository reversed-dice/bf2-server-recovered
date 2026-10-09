// FUNCTION: BF2 0x498800
// BF2_FLAGS: -fno-strict-aliasing -fno-if-conversion
typedef void* (*Fn2)(void*, int);
typedef void* (*FnQ)(void*, unsigned int);
typedef int   (*FnI0)(void*);
typedef int   (*FnI1)(void*, int);
typedef float (*FnF0)(void*);

namespace dice { namespace hfe { namespace world {
extern unsigned int IID_IWeaponObject;
struct PlayerGhostState {
    int   m_298[3];
    int   m_2a4[3];
    bool  m_2b0[3];
    float m_2b4[3];
    int   m_2c0[3];
};
} } }

namespace dice { namespace hfe {

class Player {
public:
    char _pad_0[0x298];
    world::PlayerGhostState m_ghost;
    void* getWeaponVehicle();
    void updateGhostFiringState();
};

void Player::updateGhostFiringState()
{
    void* veh = getWeaponVehicle();
    if (veh == 0) {
        *(long*)((char*)this + 0x298) = 0;
        *(int*)((char*)this + 0x2a0) = 0;
        *(long*)((char*)this + 0x2a4) = 0;
        *(int*)((char*)this + 0x2ac) = 0;
        *(short*)((char*)this + 0x2b0) = 0;
        *(char*)((char*)this + 0x2b2) = 0;
        *(long*)((char*)this + 0x2b4) = 0;
        *(int*)((char*)this + 0x2bc) = 0;
        *(long*)((char*)this + 0x2c0) = 0;
        *(int*)((char*)this + 0x2c8) = 0;
        return;
    }
    for (int i = 0; i != 3; ++i) {
        void* wo = (*(Fn2*)((char*)*(void***)veh + 0xe0))(veh, i);
        void* wi = 0;
        bool ok = false;
        if (wo != 0) {
            wi = (*(FnQ*)((char*)*(void***)wo + 0x18))(wo, world::IID_IWeaponObject);
            if (wi != 0 && (*(unsigned char*)((char*)wo + 8) & 1) == 0) {
                if ((*(FnI0*)((char*)*(void***)wi + 0x150))(wi) != 0) ok = true;
            }
        }
        if (ok) {
            m_ghost.m_298[i] = (*(FnI1*)((char*)*(void***)wi + 0x128))(wi, 0);
            m_ghost.m_2a4[i] = (*(FnI0*)((char*)*(void***)wi + 0x28))(wi);
            m_ghost.m_2b0[i] = (*(FnI0*)((char*)*(void***)wi + 0x140))(wi) > 1;
            m_ghost.m_2b4[i] = (*(FnF0*)((char*)*(void***)wi + 0x48))(wi);
            m_ghost.m_2c0[i] = (*(FnI0*)((char*)*(void***)wi + 0x238))(wi);
        } else {
            m_ghost.m_298[i] = 0;
            m_ghost.m_2a4[i] = 0;
            m_ghost.m_2b0[i] = false;
            m_ghost.m_2b4[i] = 0.0f;
            m_ghost.m_2c0[i] = 0;
        }
    }
}

} }

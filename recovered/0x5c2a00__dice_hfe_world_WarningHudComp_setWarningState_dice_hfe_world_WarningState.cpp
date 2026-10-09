// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x5c2a00
#include <string>

namespace dice { namespace hfe {

struct IBfSound {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void playSound(const std::string&);   // slot 11, +0x58
    virtual void stopSound(const std::string&);   // slot 12, +0x60
};

extern IBfSound* g_bfSound;

namespace world {

struct SoundOwner {
    char pad[0x28];
    std::string ref1;   // +0x28
    std::string ref2;   // +0x30
};

struct WarningHudComp {
    char pad[0x10];
    SoundOwner* sound;  // +0x10
    char pad2[0x8];
    int m_prev;         // +0x20
    void setWarningState(int state);
};

void WarningHudComp::setWarningState(int state)
{
    if (state == 0) {
        if (m_prev != 0) {
            g_bfSound->stopSound(sound->ref1);
            g_bfSound->stopSound(sound->ref2);
        }
    } else if (state == 2) {
        if (m_prev != 2) {
            g_bfSound->stopSound(sound->ref1);
            g_bfSound->playSound(sound->ref2);
        }
    } else if (state == 1) {
        if (m_prev != 1) {
            g_bfSound->stopSound(sound->ref2);
            g_bfSound->playSound(sound->ref1);
        }
    }
    m_prev = state;
}

} } }

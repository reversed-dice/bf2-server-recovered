// FUNCTION: BF2 0x602560
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe { namespace world {

struct SubObj {
    virtual void v00(); virtual void v08(); virtual void v10(); virtual void v18();
    virtual void v20();
    virtual void getState(int* state);
};

struct SoundObj {
    virtual void v00(); virtual void v08(); virtual void v10(); virtual void v18();
    virtual void v20(); virtual void v28(); virtual void v30(); virtual void v38();
    virtual void v40();
    virtual void setState(int a, int b);
    virtual void v50(); virtual void v58(); virtual void v60(); virtual void v68();
    virtual bool v70();
    virtual void v78(); virtual void v80(); virtual void v88(); virtual void v90();
    virtual void v98(); virtual void va0(); virtual void va8(); virtual void vb0();
    virtual void vb8(); virtual void vc0(); virtual void vc8(); virtual void vd0();
    virtual void vd8();
    virtual SubObj* getSub();
};

class DefaultSoundComp {
public:
    char pad[0x40];
    SoundObj* m_sounds[10];
    char pad2[0xa0 - 0x40 - 10 * 8];
    int m_a0;
    unsigned char m_a4;
    unsigned char m_a5;

    bool is1P();
    void reload(int state);
};

struct DebugT {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    DebugT(int type, const std::string& file, int line, const std::string& tag);
    ~DebugT();
};

void DefaultSoundComp::reload(int state)
{
    if (state == 2)
        return;
    int i = !is1P() ? 7 : 6;
    if (m_sounds[i]) {
        int status = 0;
        m_sounds[i]->getSub()->getState(&status);
        if (state == 7) {
            if (status == 2)
                m_sounds[i]->setState(1, 1);
        }
        else if (status == 1 || status == 2) {
            if (!m_sounds[i]->v70())
                m_sounds[i]->setState(0, 1);
        }
        else if (status == 3) {
            int v = 0;
            switch (state) {
            case 4:
                v = 0;
                m_a4 = 1;
                break;
            case 5:
                v = 1;
                break;
            case 6:
                v = m_a4 != 0;
                m_a4 = 2;
                break;
            case 3:
                goto final;
            default:
                DebugT(6, std::string("Game/Objects/Weapons/SoundComponents/DefaultSoundComp.cpp"),
                       0x109, std::string(&DAT_00bb25f1)).os << "Unhandled reload state";
                goto final;
            }
            m_sounds[i]->setState(v, 1);
        }
    }
final:
    m_a5 = 1;
    m_a0 = 0;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_reload_dice_hfe_world_ReloadState (0x602560)

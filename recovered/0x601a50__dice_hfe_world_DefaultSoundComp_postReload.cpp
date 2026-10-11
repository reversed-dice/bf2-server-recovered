// FUNCTION: BF2 0x601a50
// BF2_FLAGS: -fno-strict-aliasing
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
    virtual void v70(); virtual void v78(); virtual void v80(); virtual void v88();
    virtual void v90(); virtual void v98(); virtual void va0(); virtual void va8();
    virtual void vb0(); virtual void vb8(); virtual void vc0(); virtual void vc8();
    virtual void vd0(); virtual void vd8();
    virtual SubObj* getSub();
};

class DefaultSoundComp {
public:
    char pad[0x40];
    SoundObj* m_sounds[10];
    char pad2[0xa4 - 0x40 - 10 * 8];
    char m_reloadState;

    bool is1P();
    void postReload();
};

void DefaultSoundComp::postReload() {
    if (m_reloadState != 2) return;
    int idx = ~-(is1P() == false) + 7;
    if (m_sounds[idx]) {
        int state = 0;
        m_sounds[idx]->getSub()->getState(&state);
        if (state == 3) {
            m_sounds[idx]->setState(2, 1);
        }
    }
    m_reloadState = 0;
}

} } }

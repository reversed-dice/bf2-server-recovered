// FUNCTION: BF2 0x6019d0
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe { namespace world {

struct ISoundItem {
    virtual void v00(); virtual void v08(); virtual void v10(); virtual void v18();
    virtual void play();
};

class DefaultSoundComp {
public:
    virtual void v00(); virtual void v08(); virtual void v10(); virtual void v18();
    virtual void v20(); virtual void v28(); virtual void v30(); virtual void v38();
    virtual void v40(); virtual void v48(); virtual void v50(); virtual void v58();
    virtual void v60(); virtual void v68(); virtual void v70(); virtual void v78();
    virtual void v80(); virtual void v88(); virtual void v90(); virtual void v98();
    virtual void vslotA0(int arg);

    char pad[0x58 - 8];
    ISoundItem* m_sound1;
    ISoundItem* m_sound2;
    char pad2[0xa5 - 0x68];
    bool m_flag;

    bool is1P();
    void outOfAmmo(bool flag);
};

void DefaultSoundComp::outOfAmmo(bool flag) {
    vslotA0(0);
    if (is1P()) {
        if (m_flag) {
            if (m_sound1) {
                m_sound1->play();
            }
        } else if (flag && m_sound2) {
            m_sound2->play();
        }
    }
    m_flag = false;
}

} } }

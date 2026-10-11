// FUNCTION: BF2 0x601880
namespace dice { namespace hfe { namespace world {

struct SoundItem {
    virtual void v00(); virtual void v08(); virtual void v10(); virtual void v18();
    virtual void v20(); virtual void v28(); virtual void v30(); virtual void v38();
    virtual void v40(); virtual void v48(); virtual void v50(); virtual void v58();
    virtual void v60();
    virtual void stop();
};

class DefaultSoundComp {
public:
    virtual void v00(); virtual void v08(); virtual void v10(); virtual void v18();
    virtual void v20(); virtual void v28(); virtual void v30(); virtual void v38();
    virtual void v40(); virtual void v48(); virtual void v50(); virtual void v58();
    virtual void v60(); virtual void v68(); virtual void v70(); virtual void v78();
    virtual void v80(); virtual void v88(); virtual void v90(); virtual void v98();
    virtual void vslotA0(int arg);

    char _pad0[0x70 - 8];
    SoundItem* m_sound70;
    SoundItem* m_sound78;
    SoundItem* m_sound80;
    SoundItem* m_sound88;
    SoundItem* m_sound90;
    char _pad98[0xa9 - 0x98];
    bool m_enabled;

    bool isBackstepping() const;
    void disable();
};

void DefaultSoundComp::disable() {
    if (!m_enabled) return;
    m_enabled = false;
    vslotA0(0);
    if (m_sound70) m_sound70->stop();
    if (m_sound78) m_sound78->stop();
    if (!isBackstepping()) {
        if (m_sound80) m_sound80->stop();
        if (m_sound88) m_sound88->stop();
    }
    if (m_sound90) m_sound90->stop();
}

} } }

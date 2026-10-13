// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x546380
namespace dice { namespace hfe { namespace world {

class ISound {
public:
    virtual void addRef();                 // 0
    virtual void release();                // 1
    virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual void play(int a, int b);       // 9 (0x48)
    virtual void v10(); virtual void v11();
    virtual void stop();                   // 12 (0x60)
    virtual void v13(); virtual void v14();
    virtual void setPlayer(void* p);       // 15 (0x78)
};

class Soldier {
public:
    char pad[0x3e8];
    ISound* m_3e8;      // +0x3e8
    char pad2[0xb8];
    void* m_4a8;        // +0x4a8
    void say(ISound* snd, int a);
};

void Soldier::say(ISound* snd, int a) {
    if (m_3e8 != 0) {
        m_3e8->stop();
        m_3e8->setPlayer(0);
        m_3e8->release();
        m_3e8 = 0;
    }
    if (snd != 0) {
        m_3e8 = snd;
        snd->addRef();
        m_3e8->setPlayer(m_4a8);
        m_3e8->play(a, 1);
    }
}

} } }

// FUNCTION: BF2 0x495f10
namespace dice {
namespace hfe {

namespace WorldPref { int getTickCount(); }

class INametagManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(void*);
};

extern INametagManager* m_iNametagManager;

class Player {
public:
    char pad[0x108];
    unsigned char m_manDown;
    char pad2[3];
    int m_manDownTick;
    void setIsManDown(bool v);
};

void Player::setIsManDown(bool v) {
    if (m_manDown != v) {
        m_iNametagManager->v7(this);
        m_manDown = v;
        if (v) m_manDownTick = WorldPref::getTickCount();
    }
}

} // namespace hfe
} // namespace dice

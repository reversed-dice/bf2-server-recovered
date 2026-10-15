// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5f9250
#include <string>

namespace dice { namespace hfe {

namespace world {

class IPlayer;

class IPlayerManager {
public:
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void q4();
    virtual void q5();
    virtual void q6();
    virtual void q7();
    virtual void q8();
    virtual void q9();
    virtual void q10();
    virtual void q11();
    virtual IPlayer* getLocalHumanPlayer();
};

extern IPlayerManager* playerManager;

class WorldPref {
public:
    static unsigned int getTickCount();
};

class LPFireComp {
public:
    void updateComponent(float, unsigned int);
private:
    unsigned char _pad_0[0x18];
    void* m_object;
    unsigned char _pad_20[0x144];
public:
    int m_timer;
    bool m_active;
    unsigned char _pad_169[0x27];
    void* m_owner;
};

} // namespace world

class Game {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void sendMessage(int, const std::string&, world::IPlayer*, int, int, int);
};

extern Game* game;

} } // namespace dice::hfe

void dice::hfe::world::LPFireComp::updateComponent(float, unsigned int flags)
{
    void* p = ((void* (*)(void*))(*(void***)m_object)[0x380 / 8])(m_object);
    if (m_active && (flags & 4) == 0) {
        int a = m_timer;
        int b = *(int*)((char*)m_owner + 0x94);
        if ((unsigned int)(a + b) < dice::hfe::world::WorldPref::getTickCount()) {
            if (p == dice::hfe::world::playerManager->getLocalHumanPlayer()) {
                dice::hfe::game->sendMessage(
                    8, std::string("laserpaint"),
                    dice::hfe::world::playerManager->getLocalHumanPlayer(), 1, 1, 0);
            }
            m_active = 0;
        }
    }
}

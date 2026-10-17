// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x455b00
#include <map>

namespace dice { namespace hfe {

extern int GEDestroyObject;
extern int GEEnterVehicle;
extern int GEExitVehicle;

class GameEvent {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ~GameEvent();
    virtual int getType() const;
};

class IGameLogic {
public:
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual void p8();
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual void p12();
    virtual void p13();
    virtual void p14();
    virtual void p15();
    virtual void p16();
    virtual void p17();
    virtual void p18();
    virtual void p19();
    virtual void p20();
    virtual void p21();
    virtual void p22();
    virtual void p23();
    virtual void p24();
    virtual void p25();
    virtual void p26();
    virtual void p27();
    virtual void p28();
    virtual void p29();
    virtual void p30();
    virtual void p31();
    virtual void p32();
    virtual void p33();
    virtual void p34();
    virtual void p35();
    virtual void p36();
    virtual void p37();
    virtual void p38();
    virtual void p39();
    virtual void p40();
    virtual void p41();
    virtual void p42();
    virtual void p43();
    virtual void p44();
    virtual void p45();
    virtual void p46();
    virtual void p47();
    virtual void p48();
    virtual void p49();
    virtual void p50();
    virtual void p51();
    virtual void p52();
    virtual void p53();
    virtual void p54();
    virtual void p55();
    virtual void p56();
    virtual void p57();
    virtual void p58();
    virtual void p59();
    virtual void p60();
    virtual void p61();
    virtual void p62();
    virtual void p63();
    virtual void p64();
    virtual void p65();
    virtual void p66();
    virtual void p67();
    virtual void p68();
    virtual void p69();
    virtual void p70();
    virtual void p71();
    virtual void p72();
    virtual void p73();
    virtual void p74();
    virtual void p75();
    virtual void p76();
    virtual void p77();
    virtual void p78();
    virtual void p79();
    virtual void p80();
    virtual void p81();
    virtual void p82();
    virtual void p83();
    virtual void p84();
    virtual void p85();
    virtual int slot86();
};
extern IGameLogic* gameLogic;

class EventHandler {
public:
    virtual void h0();
    virtual void h1();
    virtual void h2();
    virtual void h3();
    virtual void h4();
    virtual void h5();
    virtual void h6();
    virtual void h7();
    virtual void h8();
    virtual void h9();
    virtual void h10();
    virtual void h11();
    virtual void h12();
    virtual void h13();
    virtual void h14();
    virtual void handleEvent(GameEvent* e);
};

class ClientConnection {
public:
    char _pad0[0x18];
    int m_connectionState;
    char _pad1[0x38 - 0x1c];
    EventHandler* m_handler;
};

class GameServer {
public:
    char _pad[0xe8];
    std::map<unsigned int, ClientConnection*> m_connections;
    void _sendGameEventToAll(GameEvent* e, bool b1, bool b2);
};

// compile-state padding: 15 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_12(int x) { int y = x * 12 + 3; return y; }
__attribute__((used)) int __pad_13(int x) { int y = x * 13 + 3; return y; }
__attribute__((used)) int __pad_14(int x) { int y = x * 14 + 3; return y; }
void GameServer::_sendGameEventToAll(GameEvent* e, bool b1, bool b2) {
    if (gameLogic != 0) {
        if (gameLogic->slot86() == 3) {
            int t = e->getType();
            if (t == GEDestroyObject || t == GEEnterVehicle || t == GEExitVehicle) {
                e->release();
                return;
            }
        }
    }
    if (!b2) {
        std::map<unsigned int, ClientConnection*>::iterator eend = m_connections.end();
        for (std::map<unsigned int, ClientConnection*>::iterator it = m_connections.begin(); it != eend; ++it) {

            if (b1 == 0 || it->second->m_connectionState > 0) {
                e->addRef();
                it->second->m_handler->handleEvent(e);
            }
        }
    } else {
        std::map<unsigned int, ClientConnection*>::iterator eend = m_connections.end();
        for (std::map<unsigned int, ClientConnection*>::iterator it = m_connections.begin(); it != eend; ++it) {

            if (it->second->m_connectionState > 2) {
                e->addRef();
                it->second->m_handler->handleEvent(e);
            }
        }
    }
    if (e == 0) return;
    e->release();
}

} }

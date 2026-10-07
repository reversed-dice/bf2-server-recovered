// FUNCTION: BF2 0x429040
namespace dice { namespace hfe {

class IGameServer;
class SquadManager {
public:
    virtual ~SquadManager(); // 0x0 and 0x8
    virtual void pad1(); // 0x10
    virtual void pad2(); // 0x18
    virtual void pad3(); // 0x20
    virtual void pad4(); // 0x28
    virtual void pad5(); // 0x30
    virtual void pad6(); // 0x38
    virtual void pad7(); // 0x40
    virtual void pad8(); // 0x48
    virtual void pad9(); // 0x50
    virtual void method_0x58(unsigned char, unsigned char, unsigned char, unsigned char, int); // 0x58
    virtual void pad12(); // 0x60
    virtual void pad13(); // 0x68
    virtual void pad14(); // 0x70
    virtual int method_0x78(unsigned char, unsigned char); // 0x78
};

extern void* game;
extern unsigned int IID_IGameServer;
extern SquadManager* squadManager;

class InviteEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    unsigned char f_11;
    unsigned char f_12;
    unsigned char f_13;

    bool executeServer(int player);
};

bool InviteEvent::executeServer(int player) {
    typedef void* (*QueryInterfaceFn)(void*, unsigned int);
    void** gameVt = *(void***)game;
    QueryInterfaceFn qi = (QueryInterfaceFn)gameVt[3];
    if (!qi(game, IID_IGameServer))
        return false;

    if (!squadManager)
        return true;

    if (squadManager->method_0x78(f_10, f_12) != player) {
        if (f_13 != 0)
            return false;
    }

    squadManager->method_0x58(f_10, f_12, f_11, f_13, 0);
    return true;
}

} }

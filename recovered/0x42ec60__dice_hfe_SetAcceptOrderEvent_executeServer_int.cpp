// FUNCTION: BF2 0x42ec60
namespace dice { namespace hfe {

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
    virtual void method_0x48(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, int); // 0x48 (slot 9)
    virtual void pad9(); // 0x50
    virtual void pad10(); // 0x58
    virtual void pad11(); // 0x60
    virtual void pad12(); // 0x68
    virtual void pad13(); // 0x70
    virtual int method_0x78(unsigned char, unsigned char); // 0x78 (slot 15)
    virtual void pad15(); // 0x80
    virtual void pad16(); // 0x88
    virtual void pad17(); // 0x90
    virtual void pad18(); // 0x98
    virtual void pad19(); // 0xa0
    virtual void pad20(); // 0xa8
    virtual void pad21(); // 0xb0
    virtual void pad22(); // 0xb8
    virtual void pad23(); // 0xc0
    virtual void pad24(); // 0xc8
    virtual void pad25(); // 0xd0
    virtual void pad26(); // 0xd8
    virtual int method_0xe0(unsigned char); // 0xe0 (slot 28)
};

extern SquadManager* squadManager;

class SetAcceptOrderEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    unsigned char f_11;
    unsigned char f_12;
    unsigned char f_13;
    unsigned char f_14;

    bool executeServer(int player);
};

bool SetAcceptOrderEvent::executeServer(int player) {
    if (!squadManager)
        return true;
    int s1 = squadManager->method_0x78(f_10, f_11);
    player = (unsigned char)player;
    int s2 = squadManager->method_0xe0(f_10);
    if (s1 == player)
        goto accept;
    if (player == s2)
        goto accept;
    return true;
accept:
    squadManager->method_0x48(f_10, f_11, f_12, f_13, f_14, 0);
    return true;
}

} }

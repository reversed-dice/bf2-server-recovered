#include <string>
namespace dice { namespace hfe {

extern const int IID_IGameServer;
std::string& getEmptyString();

class IGame {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void* queryInterface(int iid);
};

class IGameServer {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual void f31();
    virtual void f32();
    virtual void f33();
    virtual bool isRunning();
};

extern IGame* game;

class ServerSettings {
public:
    std::string setInternet(bool value);
    std::string setNoVehicles(bool value);

    char m_pad0[0x18];
    bool m_internet;
    char m_pad1[0x138];
    bool m_noVehicles;
};

// FUNCTION: BF2 0x468c70
std::string ServerSettings::setInternet(bool value)
{
    IGameServer* gs = 0;
    if (game)
        gs = (IGameServer*)game->queryInterface(IID_IGameServer);
    if (m_internet != value && gs != 0) {
        if (gs->isRunning())
            return std::string("Cannot change sv.internet while running.");
    }
    m_internet = value;;
    return std::string(getEmptyString());
}

} }

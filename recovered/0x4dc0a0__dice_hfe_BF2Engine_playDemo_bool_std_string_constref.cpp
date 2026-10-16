// FUNCTION: BF2 0x4dc0a0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class IGameClient;

class Game {
public:
    virtual void g0(); virtual void g1(); virtual void g2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
};
extern Game* game;
extern unsigned int IID_IGameClient;

struct Settings {
    virtual void slot0(); virtual void slot1(); virtual void slot2();
    virtual void slot3(); virtual void slot4(); virtual void slot5();
    virtual void slot6(); virtual void slot7(); virtual void slot8();
    virtual void slot9(); virtual void slot10(); virtual void slot11();
    virtual void slot12(); virtual void slot13(); virtual void slot14();
    virtual void slot15(); virtual void slot16(); virtual void slot17();
    virtual void slot18(); virtual void slot19(); virtual void slot20();
    virtual const char* getFlag(const std::string& name, const char& def) const; // slot 21 (+0xa8)
};
extern Settings* settings;

class DemoConfig {
public:
    DemoConfig();
    ~DemoConfig();
    int m_mode;          // +0x00
    int m_subMode;       // +0x04
    std::string m_path1; // +0x08
    char _pad[0x40];     // to reach 0x50
};

class Demo {
public:
    bool playDemo(IGameClient* client, const std::string& name); // 0x4e5bd0
    bool playDemo(IGameClient* client, const DemoConfig& cfg);   // 0x4e5aa0
};

class BF2Engine {
public:
    char _pad[0x108];
    Demo* m_demo;        // +0x108
public:
    void shutdownGame(bool b);
    bool startGame(bool a, bool b);
    int playDemo(bool demo, const std::string& name);
};

int BF2Engine::playDemo(bool demo, const std::string& name) {
    shutdownGame(false);
    settings->getFlag(std::string("GSIsServer"), (char)0);
    if (startGame(true, false)) {
        bool ok;
        if (demo) {
            IGameClient* gc = 0;
            if (game) gc = (IGameClient*)game->queryInterface(IID_IGameClient);
            ok = m_demo->playDemo(gc, name);
        } else {
            DemoConfig cfg;
            cfg.m_path1.assign(name);
            IGameClient* gc = 0;
            if (game) gc = (IGameClient*)game->queryInterface(IID_IGameClient);
            ok = m_demo->playDemo(gc, cfg);
        }
        if (ok) {
            ((void (*)(int, int))((*(void***)0)[0x48 / 8]))(0, 0);
        }
    }
    return 1;
}

} } // namespace dice::hfe

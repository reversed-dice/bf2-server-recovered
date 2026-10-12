// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x44f600
#include <string>

namespace dice { namespace hfe {

class Mutex {
public:
    Mutex();
    void lock();
    void unlock();
private:
    int m_a;
    int m_b;
};

class GameServer;
class Demo { public: void recordDemo(void*, std::string const&, void*); };

class ServerSettings {
public:
    char _pad[0xdd];
    char m_flagDD;
};

class BF2Engine {
public:
    char _pad[0x28];
    void* m_console;
};

extern void* gameLogic;
extern void* game;
extern void* bf2Engine;
extern ServerSettings* serverSettings;

class IEventListener {
public:
    virtual void handleEvent(int, unsigned int, void*, void*);
    virtual ~IEventListener();
};

class AutoRecorder : public IEventListener {
public:
    void roundStarted();
    std::string makeFilename();
private:
    GameServer* m_gs;
    Demo* m_demo;
    bool m_flag18;
    char _pad1[7];
    std::string m_s20;
    std::string m_s28;
    std::string m_s30;
    Mutex m_mutex;
};

void AutoRecorder::roundStarted()
{
    m_mutex.lock();
    int state = ((int (*)(void*))(*(void***)gameLogic)[0x2b8 / 8])(gameLogic);
    if (state == 3) {
        if (!m_flag18 && serverSettings->m_flagDD != 0) {
            m_s20 = makeFilename();
            if (!m_s20.empty()) {
                m_demo->recordDemo(m_gs, m_s20, ((BF2Engine*)bf2Engine)->m_console);
                m_flag18 = true;
                if (game != 0)
                    m_s30 = ((std::string const& (*)(void*))(*(void***)game)[0x1e0 / 8])(game);
            }
        }
    }
    m_mutex.unlock();
}

} }

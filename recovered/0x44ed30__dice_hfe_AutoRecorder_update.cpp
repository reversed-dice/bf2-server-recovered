// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x44ed30
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

class Mutex {
public:
    void lock();
    void unlock();
    char _pad[8];
};

class IEventListener {
public:
    virtual void handleEvent(int, unsigned int, void*, void*);
    virtual ~IEventListener();
};

class GameServer {
public:
    void onAutoRecordingAvailable(std::string const& url, std::string const& mapName);
};

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, std::string const& file, int line, std::string const& tag);
    ~Debug();
};

std::string extractFileName(std::string const& path);

class AutoRecorder : public IEventListener {
public:
    void update();
private:
    GameServer* m_gs;
    char _pad0x10[0x10];
    std::string m_0x20;
    std::string m_0x28;
    std::string m_0x30;
    Mutex m_0x38;
    char _pad0x40[0x40];
    bool m_hookCompleted;
    char _pad0x81[0x7];
    std::string m_result;
};

void AutoRecorder::update()
{
    std::string url;
    bool done = false;
    bool failed = false;

    m_0x38.lock();
    if (m_hookCompleted) {
        url = extractFileName(m_0x28);
        m_hookCompleted = false;
        failed = false;
        done = true;
        if (!m_result.empty()) {
            Debug(1, std::string("Game/GameServer/AutoRecorder.cpp"), 0x57,
                  std::string(&DAT_00bb25f1)).os
                << "Demo upload failed. Check 'rotate_demo_err.txt' for more info.";
            done = true;
            failed = true;
        }
    }
    m_0x38.unlock();
    if (done && !failed)
        m_gs->onAutoRecordingAvailable(url, m_0x30);
}

} }

// FUNCTION: BF2 0x44ec10
#include <string>
namespace dice { namespace hfe {

class Mutex {
public:
    void lock();
    void unlock();
};

class ISystem {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void sleep(unsigned int ms);   // 0x40
};
extern ISystem* g_system;

const char* process_autodemo_synchronized_(const char* dir, const char* name);

class AutoRecorder {
public:
    void hookCompleted(const char* result);
};

class Thread {
public:
    virtual ~Thread();
    virtual void run() = 0;
    void* m_handle;
};

class AutoRecorderHookThread : public Thread {
public:
    virtual void run();
    int m_state;
    std::string m_demoName;
    std::string m_dir;
    AutoRecorder* m_recorder;
    Mutex* m_mutex;
    bool m_quit;
};

void AutoRecorderHookThread::run()
{
    m_mutex->lock();
    while (!m_quit) {
        m_state = 1;
        while (!m_quit && m_demoName.empty()) {
            m_mutex->unlock();
            g_system->sleep(500);
            m_mutex->lock();
        }
        m_state = 2;
        m_mutex->unlock();
        const char* result = 0;
        if (!m_quit || !m_demoName.empty())
            result = process_autodemo_synchronized_(m_dir.c_str(), m_demoName.c_str());
        m_mutex->lock();
        m_demoName.clear();
        m_recorder->hookCompleted(result);
    }
    m_mutex->unlock();
}

} }

// FUNCTION: BF2 0x44f8e0
#include <string>

namespace dice { namespace hfe {

class Mutex {
public:
    void lock();
    void unlock();
    ~Mutex();
    char _pad[8];
};

class Thread {
public:
    virtual void t0();
    virtual void t1();
    virtual void t2();
    void stop();
    char _pad[0x10];
};

class AutoRecorderHookThread : public Thread {
public:
    std::string m_0x18;
    std::string m_0x20;
    char _pad[0x10];
    bool m_stop;
    ~AutoRecorderHookThread();
};

class EventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void e5();
    virtual void e6();
    virtual void e7();
    virtual void e8();
    virtual void e9();
    virtual void e10();
    virtual void e11();
    virtual void e12(int, void*);
};

extern EventManager* eventManager;

class AutoRecorder {
public:
    char _pad0x08[0x18];
    std::string m_0x20;
    std::string m_0x28;
    std::string m_0x30;
    Mutex m_0x38;
    AutoRecorderHookThread m_0x40;
    char _pad0x80[0x8];
    std::string m_0x88;
    virtual ~AutoRecorder();
};

AutoRecorder::~AutoRecorder() {
    eventManager->e12(0, this);
    AutoRecorderHookThread* hook = &m_0x40;
    m_0x38.lock();
    hook->m_stop = true;
    m_0x38.unlock();
    hook->stop();
}

} }
// REVERSED_FUNCTION: dice_hfe_AutoRecorder_dtor_AutoRecorder

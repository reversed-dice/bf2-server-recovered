// FUNCTION: BF2 0x4d3da0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

extern void* g_system;

class Mutex {
public:
    void lock();
    void unlock();
};

class BF2Engine {
public:
    int getTouchedServerCount();
};

class CheckServerAliveThread {
public:
    char pad0[0x10];
    BF2Engine* m_engine;
    int m_count;
    unsigned char m_flag;

    void run();
};

// REVERSED_FUNCTION: dice_hfe_CheckServerAliveThread_run (0x4d3da0)
void CheckServerAliveThread::run() {
    for (;;) {
        Mutex* lock = (Mutex*)((char*)m_engine + 0x128);
        lock->lock();
        if (*(char*)((char*)m_engine + 0x140) != 0) {
            lock->unlock();
            return;
        }
        lock->unlock();
        ((Mutex*)((char*)m_engine + 0x130))->lock();
        int count = m_engine->getTouchedServerCount();
        ((Mutex*)((char*)m_engine + 0x130))->unlock();
        if (!m_flag && count == m_count)
            *(int*)0 = 0xdeadbeef;
        m_count = count;
        m_flag = 0;
        ((void (*)(void*, int))(*(void***)g_system)[8])(g_system, 30000);
    }
}

} }

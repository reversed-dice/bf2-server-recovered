#include <string>
// FUNCTION: BF2 0x4d43b0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
class IEventListener { public: virtual void notify(); };
class Thread {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    void stop();
};
class ClassManager {
public:
    virtual void g0();
    virtual void g1();
    virtual void g2();
    virtual void g3();
    virtual void g4();
    virtual void g5();
};
extern ClassManager* classManager;
namespace io {
class IInputFilter { public: virtual ~IInputFilter(); };
class Mutex {
public:
    Mutex();
    ~Mutex();
    void lock();
    void unlock();
    char _pad[8];
};
}
using io::IInputFilter;
using io::Mutex;
struct AutoDelete { char* p; ~AutoDelete() { if (p) delete p; } };
class BF2Engine : public IInputFilter, public IEventListener {
public:
    char _pad10[0x40];
    AutoDelete m_0x50;
    char _pad58[0x30];
    std::string m_0x88;
    std::string m_0x90;
    char _pad98[0x90];
    Mutex m_0x128;
    Mutex m_0x130;
    Thread* m_0x138;
    bool m_0x140;
    char _pad141[7];
    char* m_0x148;
    char* m_0x150;
    void closeLog();
    virtual ~BF2Engine();
};
BF2Engine::~BF2Engine() {
    if (m_0x138) {
        m_0x128.lock();
        m_0x140 = true;
        m_0x128.unlock();
        m_0x138->stop();
        if (m_0x138) m_0x138->f1();
        m_0x138 = 0;
        m_0x140 = false;
    }
    closeLog();
    if (classManager) classManager->g5();
    classManager = 0;
    delete m_0x150;
    delete m_0x148;
}
} }

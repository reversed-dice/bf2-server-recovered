// FUNCTION: BF2 0x73bea0
#include <string>
#include <vector>

namespace dice { namespace hfe {

class IDebugCounterManager {
public:
    virtual void c0();
    virtual void c1();
    virtual void c2();
    virtual void c3();
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual void c10();
    virtual void c11();
    virtual void c12();
    virtual void c13();
    virtual void c14();
    virtual void c15();
    virtual void c16();
    virtual void c17();
};

class IEventListener {
public:
    virtual void l0();
};

class Counter {
public:
    virtual void n0();
    virtual void n1();
    virtual void n2();
    virtual void n3();
    virtual void n4();
    virtual void v28(void*);
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
    virtual void e13();
    virtual void e14(int, int);
};
extern EventManager* eventManager;

class DebugCounter;

class DebugCounterManager : public IDebugCounterManager, public IEventListener {
public:
    char _pad0x10[0x18];
    std::string m_28;
    void* m_30;
    Counter* m_38;
    std::string m_40;
    char _pad0x48[0x20];
    void* m_68;
    static std::vector<DebugCounter*> m_counterVec;
    virtual ~DebugCounterManager();
};

} }

dice::hfe::DebugCounterManager::~DebugCounterManager()
{
    dice::hfe::eventManager->e14(5, 5);
    dice::hfe::eventManager->e12(5, (void*)((char*)this + 8));
    if (m_30)
        m_38->v28(m_30);
    ::operator delete(m_68);
    int n = (int)m_counterVec.size();
    for (int i = 0; i < n; ++i)
    {
        dice::hfe::DebugCounter* dc = m_counterVec[i];
        if (dc)
            ::operator delete(dc);
    }
}

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x73b740
#include <string>
#include <ostream>

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

class Counter;
class DebugCounter;

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
    virtual bool e11(int category, IEventListener* listener, int flags);
    virtual void e12(int, void*);
    virtual void e13(int, int, std::string const& name);
    virtual void e14(int, int);
};

extern EventManager* eventManager;

enum DebugType { DEBUG_ERROR = 6 };

class Debug {
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

class DebugCounterManager : public IDebugCounterManager, public IEventListener {
public:
    int m_10;
    bool m_14;
    int m_18;
    int m_1c;
    int m_20;
    int m_24;
    std::string m_28;
    void* m_30;
    Counter* m_38;
    std::string m_40;
    int m_48;
    int m_4c;
    int m_50;
    int m_54;
    int m_58;
    int m_5c;
    int m_60;
    int m_64;
    char* m_68;
    virtual ~DebugCounterManager();
    DebugCounterManager();
};

DebugCounterManager::DebugCounterManager()
    : m_10(1), m_14(false), m_18(0), m_1c(0), m_20(0), m_24(0),
      m_28(""), m_30(0), m_38(0), m_40("0"),
      m_48(0), m_4c(0), m_50(0), m_54(400), m_58(200), m_5c(-100), m_60(100),
      m_68(0)
{
    eventManager->e13(5, 5, std::string("ECCoreCEDrawDebugCounters"));
    if (!eventManager->e11(5, this, 0)) {
        Debug(DEBUG_ERROR, std::string("Core/DebugCounterManager.cpp"), 0x2d, std::string("")).stream()
            << "Failed to register DebugCounterManager as event handler for ECCore.";
    }
    m_68 = new char[0x400];
}

} }

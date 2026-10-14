// FUNCTION: BF2 0x73d700
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>
#include <map>

extern char DAT_00bb25f1;
extern char DAT_00b986e8;
extern char DAT_00b98748;

namespace dice { namespace hfe {

struct HandlerNode {
    void* m_listener;
    HandlerNode* m_next;
    int m_priority;
};

class IEventManager {
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
    char _pad0[0x20];
    HandlerNode* m_heads[12];
};

struct EventNode {
    virtual ~EventNode() {}
    char _pad0[0x30];
    int m_x38;
    char _pad1[4];
};

struct Debug_73d700 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_73d700(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_73d700();
};

class EventManager : public IEventManager {
public:
    EventNode m_node;
    std::map<int, std::string> m_maps[12];
    void removePendingEvents();
    virtual ~EventManager();
};

EventManager::~EventManager()
{
    removePendingEvents();
    bool leaked = false;
    for (int i = 0; i < 12; ++i) {
        int n = 0;
        for (HandlerNode* p = m_heads[i]; p != 0; p = p->m_next)
            ++n;
        if (n > 0)
            leaked = true;
    }
    if (leaked) {
        Debug_73d700(6, std::string(&DAT_00b986e8), 0x33, std::string(&DAT_00bb25f1)).os
            << &DAT_00b98748;
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_EventManager_dtor_EventManager (0x73d700)

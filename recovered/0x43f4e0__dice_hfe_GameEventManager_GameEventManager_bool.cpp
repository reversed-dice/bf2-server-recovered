// FUNCTION: BF2 0x43f4e0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// dice_hfe_GameEventManager_GameEventManager_bool
#include <deque>
#include <list>
#include <map>

namespace dice { namespace hfe {

class GameEvent {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    char _pad8[4];
    int m_0xc;
};

template <class T>
class SmartPtr {
public:
    T* m_p;
    SmartPtr() : m_p(0) {}
    SmartPtr(const SmartPtr& o) : m_p(o.m_p) { if (m_p) m_p->addRef(); }
    ~SmartPtr() { if (m_p) m_p->release(); }
    T* operator->() const { return m_p; }
};

struct EventSaveQueueEntry {
    unsigned int m_a;
    std::list<SmartPtr<GameEvent> > m_list;
};

struct VPtrStore {
    void* m_vt;
    VPtrStore() { *(void**)this = (void*)0xb2f790; }
};

struct EmptySaveQueue {
    std::deque<EventSaveQueueEntry> m_q;
};

class GameEventManager : public VPtrStore {
public:
    GameEventManager(bool b);

private:
    void* m_8;                                                  // 0x08
    int m_10;                                                   // 0x10
    int m_14;                                                   // 0x14
    int m_18;                                                   // 0x18
    int m_1c;                                                   // 0x1c
    std::list<SmartPtr<GameEvent> > m_l20;                      // 0x20
    std::deque<EventSaveQueueEntry> m_d30;                      // 0x30
    std::deque<EventSaveQueueEntry> m_d80;                      // 0x80
    std::map<int, std::list<SmartPtr<GameEvent> >*> m_map;      // 0xd0
    std::list<SmartPtr<GameEvent> > m_l100;                     // 0x100
    int m_110;                                                  // 0x110
    int m_114;                                                  // 0x114
    int m_118;                                                  // 0x118
    int m_11c;                                                  // 0x11c
    int m_120;                                                  // 0x120
    int m_124;                                                  // 0x124
    int m_128;                                                  // 0x128
    int m_12c;                                                  // 0x12c
    int m_130;                                                  // 0x130
    char m_134;                                                 // 0x134
    char _pad135[3];
    std::list<SmartPtr<GameEvent> >* m_arr138[32];              // 0x138
    bool m_238;                                                 // 0x238
};

GameEventManager::GameEventManager(bool b)
    : m_10(1),
      m_18(0),
      m_l20(),
      m_d30(EmptySaveQueue().m_q),
      m_d80(EmptySaveQueue().m_q),
      m_map(),
      m_l100(),
      m_110(0),
      m_114(0),
      m_118(0x1f),
      m_11c(0xf),
      m_120(-1),
      m_124(0),
      m_128(0),
      m_12c(0),
      m_130(0),
      m_134(0),
      m_238(b)
{
    m_l20.clear();
    for (int i = 0; i < 32; ++i)
        m_arr138[i] = 0;
}

} }

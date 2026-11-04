// FUNCTION: BF2 0x442160
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

namespace dice { namespace hfe {

class GameEvent {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    char _pad8[4];
    int m_0xc;
};

} }

namespace dice { namespace hfe {

template <class T>
class SmartPtr {
public:
    T* m_p;
    SmartPtr() : m_p(0) {}
    SmartPtr(const SmartPtr& o) : m_p(o.m_p) { if (m_p) m_p->addRef(); }
    ~SmartPtr() { if (m_p) m_p->release(); }
    T* operator->() const { return m_p; }
};

} }

namespace dice { namespace hfe {

struct EventSaveQueueEntry {
    unsigned int m_a;
    std::list<SmartPtr<GameEvent> > m_list;
};

} }

template class std::deque<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >;

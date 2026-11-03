// FUNCTION: BF2 0x441fb0
#include <deque>
#include <list>
namespace dice { namespace hfe {
class GameEvent;
template <class T> class SmartPtr { public: T* m_ptr; };
struct EventSaveQueueEntry {
    char pad[8];
    std::list<SmartPtr<GameEvent> > m_list;
};
void pop_one(std::deque<EventSaveQueueEntry>& d)
{
    d.pop_front();
}
}}

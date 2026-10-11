// FUNCTION: BF2 0x440540
// dice_hfe_GameEventManager_dtor_GameEventManager
#include <deque>
#include <list>
#include <map>

namespace dice { namespace hfe {

struct GameEvent;
template <class T> struct SmartPtr { T* m_p; };

struct EventSaveQueueEntry {
    unsigned int m_a;
    unsigned int m_b;
    std::list<SmartPtr<GameEvent> > m_list;
};

extern void fn_43f1b0(void* self);   // GameEventManager::reset()

class GameEventManager {
public:
    virtual ~GameEventManager();

private:
    unsigned char _pad1[0x20 - 0x8];
    std::list<SmartPtr<GameEvent> > m_l20;                      // 0x20
    std::deque<EventSaveQueueEntry> m_d30;                      // 0x30
    std::deque<EventSaveQueueEntry> m_d80;                      // 0x80
    std::map<int, std::list<SmartPtr<GameEvent> >*> m_map;      // 0xd0
    std::list<SmartPtr<GameEvent> > m_l100;                     // 0x100
};

GameEventManager::~GameEventManager() {
    fn_43f1b0(this);
}

} }

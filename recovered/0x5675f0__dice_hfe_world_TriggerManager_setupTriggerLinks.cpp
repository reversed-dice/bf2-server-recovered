// FUNCTION: BF2 0x5675f0
#include <list>

namespace dice { namespace hfe { namespace world {
class Trigger;
struct TriggerManager {
    unsigned char _pad0[0x08];
    std::list<Trigger*> m_triggers;                    // 0x08
    unsigned char _pad1[0x48 - 0x18];
    std::list<Trigger*>::iterator m_it;                // 0x48
};
} } }

extern "C" void fn_561340(void* a);
extern "C" bool fn_560f80(void* a);

void setup_0x5675f0(dice::hfe::world::TriggerManager* self)
{
    std::list<std::list<dice::hfe::world::Trigger*>::iterator> dead;
    for (std::list<dice::hfe::world::Trigger*>::iterator it = self->m_triggers.begin();
         it != self->m_triggers.end(); ++it) {
        dice::hfe::world::Trigger* t = *it;
        fn_561340(t);
        if (!fn_560f80(t))
            dead.push_back(it);
    }
    for (std::list<std::list<dice::hfe::world::Trigger*>::iterator>::iterator j = dead.begin();
         j != dead.end(); ++j)
        self->m_triggers.erase(*j);
    self->m_it = self->m_triggers.begin();
}

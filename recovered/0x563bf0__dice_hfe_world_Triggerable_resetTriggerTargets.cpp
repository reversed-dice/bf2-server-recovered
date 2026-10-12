// FUNCTION: BF2 0x563bf0
#include <list>
#include <string>
extern "C" {
long getTriggerableTargetByName_563770(void*, std::string*);
extern void* dice_hfe_world_TriggerableManager_m_instance;
}
struct TriggerableImpl { char pad[0x1f8]; std::list<const char*> m_names; };
struct Triggerable { char pad0[0x248]; TriggerableImpl* m_impl; };
extern "C" void fn_0x563bf0(Triggerable* self) {
    void* inst = dice_hfe_world_TriggerableManager_m_instance;
    for (std::list<const char*>::iterator it = self->m_impl->m_names.begin(); it != self->m_impl->m_names.end(); ++it) {
        long t;
        {
            std::string tmp(*it);
            t = getTriggerableTargetByName_563770(inst, &tmp);
        }
        if (t != 0) *(int*)(t + 0x258) = 6;
    }
}
// REVERSED_FUNCTION: 0x563bf0

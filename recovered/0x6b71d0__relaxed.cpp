// FUNCTION: BF2 0x6b71d0
// TriggerManager::getTriggerByName 0x6d0220 — call + compare + champ
namespace dice { namespace anim {

extern void* tm_find(void* self, void* name);

void* getTriggerByName(void* self, void* name) {
    void* r = tm_find(self, name);
    if ((char*)self + 8 == r)
        return 0;
    return *(void**)((char*)r + 0x28);
}

}}

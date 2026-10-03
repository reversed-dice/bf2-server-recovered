// FUNCTION: BF2 0x4c0df0
// SquadManager::getSquad 0x4c0df0 — méthode, b en 3e param (EDX)
namespace dice { namespace hfe {

extern void* squad_get(void* self);
extern void* squad_fn(void* s, int b);

void* getSquad(void* self, int a, int b) {
    void* s = squad_get(self);
    if (s == 0)
        return 0;
    return squad_fn(s, b);
}

}}

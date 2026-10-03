// FUNCTION: BF2 0x4c0b30
// SquadManager::getTeam 0x4c0b30 — recherche map + CMOV
namespace dice { namespace hfe {

extern void* map_find2(void* map, void* key);

void* getTeam(void* self, int squad_id) {
    int id = squad_id;
    void* r = map_find2((char*)self + 0x10, &id);
    if (r == (char*)self + 0x18)
        return 0;
    return (char*)r + 0x28;
}

}}

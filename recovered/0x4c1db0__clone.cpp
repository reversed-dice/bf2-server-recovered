// FUNCTION: BF2 0x4c1db0
// SquadManager::getFirstUnusedSquad 0x4c0b00 — tail-call Team::getFirstUnusedSquad
namespace dice { namespace hfe {

extern void* get_squad4(void* self);
extern int team_get_first_unused(void* squad);

int getFirstUnusedSquad(void* self) {
    void* squad = get_squad4(self);
    if (squad != 0)
        return team_get_first_unused(squad);
    return -1;
}

}}

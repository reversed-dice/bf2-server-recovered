// FUNCTION: BF2 0x4c1da0
// Team::popNextCommanderApplicant 0x4c1da0 — tail-call avec self+0x48
namespace dice { namespace hfe {

extern int team_pop(void* list);

int popNextCommanderApplicant(void* self) {
    return team_pop((char*)self + 0x48);
}

}}

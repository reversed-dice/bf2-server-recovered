// FUNCTION: BF2 0x4c5810
// Team::declineCommander 0x4c5810 — args (list, player, self)
namespace dice { namespace hfe {

extern void team_decline2(void* list, int player, void* team);

void declineCommander(void* self, int player) {
    team_decline2((char*)self + 0x48, player, self);
}

}}

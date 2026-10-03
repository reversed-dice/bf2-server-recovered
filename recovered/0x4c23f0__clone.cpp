// FUNCTION: BF2 0x4c23f0
// Team::acceptCommander 0x4c5640 — args (list, player, self)
namespace dice { namespace hfe {

extern void team_accept2(void* list, int player, void* team);

void acceptCommander(void* self, int player) {
    team_accept2((char*)self + 0x48, player, self);
}

}}

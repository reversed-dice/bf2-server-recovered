// FUNCTION: BF2 0x4c5640
// Team::applyForCommander 0x4c23f0 — args (list, player, self)
namespace dice { namespace hfe {

extern void team_apply3(void* list, int player, void* team);

void applyForCommander(void* self, int player) {
    team_apply3((char*)self + 0x48, player, self);
}

}}

// FUNCTION: BF2 0x4c5930
// Team::resignCommander 0x4c5930 — tail-call avec self
namespace dice { namespace hfe {

extern void team_resign(void* list, void* team);

void resignCommander(void* self) {
    team_resign((char*)self + 0x48, self);
}

}}

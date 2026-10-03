// FUNCTION: BF2 0x4c0cd0
// SquadManager::applyForCommander 0x4c2400 — wrapper
namespace dice { namespace hfe {

extern void* get_applicant10(void* self, int squad, int player);
extern void apply_impl(void* applicant, int player);

void applyForCommander(void* self, int squad, int player) {
    void* a = get_applicant10(self, squad, player);
    if (a != 0)
        apply_impl(a, player);
}

}}

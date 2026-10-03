// FUNCTION: BF2 0x4c5820
// SquadManager::declineCommander 0x4c5820 — wrapper (3 args)
namespace dice { namespace hfe {

extern void* get_applicant3(void* self, int squad, int player);
extern void decline_impl(void* applicant, int player);

void declineCommander(void* self, int squad, int player) {
    void* a = get_applicant3(self, squad, player);
    if (a != 0)
        decline_impl(a, player);
}

}}

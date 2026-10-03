// FUNCTION: BF2 0x4c57f0
// SquadManager::removeCommanderApplicant 0x4c57f0 — wrapper (3 args)
namespace dice { namespace hfe {

extern void* get_applicant2(void* self, int squad, int player);
extern void remove_impl(void* applicant, int player);

void removeCommanderApplicant(void* self, int squad, int player) {
    void* a = get_applicant2(self, squad, player);
    if (a != 0)
        remove_impl(a, player);
}

}}

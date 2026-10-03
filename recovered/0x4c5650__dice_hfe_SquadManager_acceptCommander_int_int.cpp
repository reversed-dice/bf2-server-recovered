// FUNCTION: BF2 0x4c5650
// SquadManager::acceptCommander 0x4c5650 — wrapper (3 args passés)
namespace dice { namespace hfe {

extern void* get_applicant4(void* self, int squad, int player);
extern void accept_impl(void* applicant, int player);

void acceptCommander(void* self, int squad, int player) {
    void* a = get_applicant4(self, squad, player);
    if (a != 0)
        accept_impl(a, player);
}

}}

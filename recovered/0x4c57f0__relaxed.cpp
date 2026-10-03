// FUNCTION: BF2 0x4c57f0
// SquadManager::remove 0x4c0cd0 — wrapper
namespace dice { namespace hfe {

extern void* get_applicant9(void* self, int squad, int player);
extern void remove_impl2(void* applicant, int player);

void remove(void* self, int squad, int player) {
    void* a = get_applicant9(self, squad, player);
    if (a != 0)
        remove_impl2(a, player);
}

}}

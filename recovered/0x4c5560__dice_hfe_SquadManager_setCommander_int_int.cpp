// FUNCTION: BF2 0x4c5560
// SquadManager::setCommander 0x4c5560 — set + bool
namespace dice { namespace hfe {

extern void* get_applicant8(void* self, int squad, int player);
extern bool set_cmd_impl(void* applicant, int player);

bool setCommander(void* self, int squad, int player) {
    void* a = get_applicant8(self, squad, player);
    if (a == 0)
        return false;
    return set_cmd_impl(a, player);
}

}}

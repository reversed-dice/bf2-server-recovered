// FUNCTION: BF2 0x4c1db0
// SquadManager::popNextCommanderApplicant 0x4c1db0 — pop ou -1 (tail-call)
namespace dice { namespace hfe {

extern void* get_applicant6(void* self);
extern int pop_impl(void* applicant);

int popNextCommanderApplicant(void* self) {
    void* a = get_applicant6(self);
    if (a != 0)
        return pop_impl(a);
    return -1;
}

}}

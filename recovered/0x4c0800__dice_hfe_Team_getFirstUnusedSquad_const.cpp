// FUNCTION: BF2 0x4c0800
namespace dice { namespace hfe {
typedef int (*vfn_18)(void*);
int cb_4c0800(void* self) {
    void* head = *(void**)((char*)self + 0x38);
    if (head == (void*)((char*)self + 0x38))
        return -1;
    void* q = *(void**)((char*)head + 0x10);
    return (*(vfn_18*)((char*)*(void**)q + 0x18))(q);
}
} }
// REVERSED_FUNCTION: dice_hfe_Team_getFirstUnusedSquad_const (0x4c0800)

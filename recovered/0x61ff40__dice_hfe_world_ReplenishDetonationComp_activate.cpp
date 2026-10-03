// FUNCTION: BF2 0x61ff40
namespace dice { namespace hfe { namespace world {
extern void fn_61c460(void* self);
extern void fn_4085b8(void* p);
void cb_61ff40(void* self) {
    fn_61c460(self);
    void* q = *(void**)((char*)self + 0x60);
    if (q != 0) {
        int r = *(int*)((char*)q + 0x0) - 1;
        *(int*)((char*)q + 0x0) = r;
        if (r == 0)
            fn_4085b8(q);
    }
    *(void**)((char*)self + 0x60) = 0;
    *(int*)((char*)self + 0x68) = 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishDetonationComp_activate (0x61ff40)

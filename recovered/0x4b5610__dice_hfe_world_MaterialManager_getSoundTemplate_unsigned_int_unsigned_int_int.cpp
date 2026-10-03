// FUNCTION: BF2 0x4b5610
typedef void* (*getfn_4b5610)(void*, unsigned int, unsigned int);
typedef long  (*subfn_4b5610)(void*, unsigned int, int);

// Both fall-through choices are forced: the target keeps each `return` on the
// fall-through path and jumps away on the other side. Without the
// __builtin_expect hints GCC inverts all three branches and emits one shared
// epilogue instead of the target's three inline ones (74.42%).
extern "C" long f_4b5610(void* self, unsigned int p2, unsigned int p3, unsigned int p4) {
    long r;
    void* a = (*(getfn_4b5610*)(*(char**)self + 0xa0))(self, p2, p3);
    if (a) {
        r = (*(subfn_4b5610*)(*(char**)a + 0x60))(a, p4, 1);
        if (__builtin_expect(r != 0, 1)) return r;
    }
    void* b = (*(getfn_4b5610*)(*(char**)self + 0xa0))(self, p2, 0);
    if (__builtin_expect(b == 0, 1)) return 0;
    r = (*(subfn_4b5610*)(*(char**)b + 0x60))(b, p4, 1);
    if (__builtin_expect(r == 0, 0)) return 0;
    return r;
}
// REVERSED_FUNCTION: dice_hfe_world_MaterialManager_getSoundTemplate_unsigned_int_unsigned_int_int (0x4b5610)

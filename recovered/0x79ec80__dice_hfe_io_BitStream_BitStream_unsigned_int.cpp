// FUNCTION: BF2 0x79ec80
// 0x79ec80 - BitStream constructor
extern "C" void* _Znam(unsigned int);
extern "C" void dice_hfe_io_BitStream_init_unsigned_charptr_unsigned_int(void*, void*, unsigned int);

void fn_0x79ec80(void* self, unsigned int size) {
    // The three zeroed members at +0x58 are floats, so GCC materialises the
    // constant once in a GPR (XOR EAX,EAX) and reuses it for all three stores,
    // and forms their common base with a single LEA. Writing them as ints
    // would emit three immediate stores instead.
    float* p58 = (float*)((char*)self + 0x58);
    p58[0] = 0.0f;
    p58[1] = 0.0f;
    p58[2] = 0.0f;

    void* buf = _Znam(size);
    *(int*)((char*)self + 0x8) = size;
    *(void**)self = buf;
    *(char*)((char*)self + 0x10) = 1;
    dice_hfe_io_BitStream_init_unsigned_charptr_unsigned_int(self, buf, size);
}

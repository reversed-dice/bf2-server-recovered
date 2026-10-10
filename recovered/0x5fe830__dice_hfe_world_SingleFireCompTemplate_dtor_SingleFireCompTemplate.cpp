// FUNCTION: BF2 0x5fe830
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void _ZdlPv(void*);

struct FakeThis {
    void* vtable1;        // 0x00
    void* vtable2;        // 0x08
    char pad1[0x28];
    void* vec2_start;     // 0x38
    void* vec2_end;       // 0x40
    char pad2[0x48];
    void* vec1_start;     // 0x90
    void* vec1_end;       // 0x98
};

extern "C" void dtor_5fe830(FakeThis* self) {
    self->vtable1 = (void*)0xb74e10;
    self->vtable2 = (void*)0xb74e98;

    void** vec1 = (void**)&self->vec1_start;
    long s1 = (long)*vec1;
    long e1 = (long)*(vec1 + 1);
    while (s1 != e1) { s1 += 0x10; }
    if (__builtin_expect(*vec1 != 0, 1)) {
        _ZdlPv(*vec1);
    }

    self->vtable1 = (void*)0xb73770;
    self->vtable2 = (void*)0xb737f8;

    void** vec2 = (void**)&self->vec2_start;
    long s2 = (long)*vec2;
    long e2 = (long)*(vec2 + 1);
    while (s2 != e2) { s2 += 4; }
    if (__builtin_expect(*vec2 != 0, 1)) {
        _ZdlPv(*vec2);
    }
}

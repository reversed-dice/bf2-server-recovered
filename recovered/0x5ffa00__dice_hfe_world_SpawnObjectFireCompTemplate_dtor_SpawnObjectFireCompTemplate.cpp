// FUNCTION: BF2 0x5ffa00
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>

extern "C" void _ZdlPv(void*);

struct FakeThis {
    void* vtable1;       // [0] offset 0x00
    void* vtable2;       // [1] offset 0x08
    char pad1[0x28];     // [2]-[6]
    void* vec2_start;    // [7] offset 0x38
    void* vec2_end;      // [8] offset 0x40
    char pad2[0x48];     // [9]-[0x11]
    void* vec1_start;    // [0x12] offset 0x90
    void* vec1_end;      // [0x13] offset 0x98
};

extern "C" void dtor_SpawnObjectFireCompTemplate(FakeThis* self) {
    self->vtable1 = (void*)0xb74e10;
    self->vtable2 = (void*)0xb74e98;

    // Clear vector at offset 0x90 (stride 0x10)
    void** vec1_ptr = (void**)&self->vec1_start;
    long start1 = (long)*vec1_ptr;
    long end1 = (long)*(vec1_ptr + 1);
    while (start1 != end1) { start1 += 0x10; }
    if (__builtin_expect(*vec1_ptr != 0, 1)) {
        _ZdlPv(*vec1_ptr);
    }

    self->vtable1 = (void*)0xb73770;
    self->vtable2 = (void*)0xb737f8;

    // Clear vector at offset 0x38 (stride 4)
    void** vec2_ptr = (void**)&self->vec2_start;
    long start2 = (long)*vec2_ptr;
    long end2 = (long)*(vec2_ptr + 1);
    while (start2 != end2) { start2 += 4; }
    if (__builtin_expect(*vec2_ptr != 0, 1)) {
        _ZdlPv(*vec2_ptr);
    }
}

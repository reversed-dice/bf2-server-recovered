// FUNCTION: BF2 0x5fc250
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>

extern "C" void _ZdlPv(void*);

struct FakeThis {
    void* vtable1;       // [0] offset 0x00
    void* vtable2;       // [1] offset 0x08
    char pad1[0x28];     // [2]-[6]
    void* vec_start;     // [7] offset 0x38
    void* vec_end;       // [8] offset 0x40
    char pad2[0x50];     // [9]-[0x12]
    void* list_node;     // [0x13] offset 0x98
};

extern "C" void std_List_base_std_string_std_allocator_std_string_M_clear(void* list);

extern "C" void dtor_MultiFireCompTemplate(FakeThis* self) {
    self->vtable1 = (void*)0xb74710;
    self->vtable2 = (void*)0xb74798;

    std_List_base_std_string_std_allocator_std_string_M_clear(&self->list_node);

    self->vtable1 = (void*)0xb73770;
    self->vtable2 = (void*)0xb737f8;

    // Clear vector at offset 0x38 (stride 4)
    void** vec_ptr = (void**)&self->vec_start;
    long start = (long)*vec_ptr;
    long end = (long)*(vec_ptr + 1);
    while (start != end) { start += 4; }
    if (__builtin_expect(*vec_ptr != 0, 1)) {
        _ZdlPv(*vec_ptr);
    }

    _ZdlPv(self);
}

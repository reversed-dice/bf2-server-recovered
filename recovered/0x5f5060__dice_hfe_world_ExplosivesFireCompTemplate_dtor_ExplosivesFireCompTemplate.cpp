// FUNCTION: BF2 0x5f5060
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>
#include <string>
#include <vector>

extern "C" void _ZdlPv(void*);

struct E4 { int v; ~E4() {} };

struct ExplosivesFireCompTemplate {
    void* vtable1;          // 0x00
    void* vtable2;          // 0x08
    char pad1[0x28];
    std::vector<E4> m_vec;  // 0x38
    char pad2[0x58];
    std::string m_str;      // 0xa8
};

extern "C" void dtor_ExplosivesFireCompTemplate(ExplosivesFireCompTemplate* self) {
    self->vtable1 = (void*)0xb72df0;
    self->vtable2 = (void*)0xb72e78;
    self->m_str.~basic_string();
    self->vtable1 = (void*)0xb73770;
    self->vtable2 = (void*)0xb737f8;
    self->m_vec.~vector();
}

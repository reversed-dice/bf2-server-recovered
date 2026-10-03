// FUNCTION: BF2 0x5f21a0
namespace dice { namespace hfe { namespace world {
extern void sub_0x005f2e00(void* self, void* arg);
extern void base_0x005ef310(void* self);
extern void del_0x004085b8(void* self);
void dtor_5f21a0(void* self) {
    *(void**)self = (void*)0xb72470;
    *(void**)((char*)self + 0x20) = (void*)0xb725f8;
    char* s0 = (char*)(self) + 0x60;
    sub_0x005f2e00(s0, *(void**)(s0 + 0x10));
    base_0x005ef310(self);
    del_0x004085b8(self);
}
} } }

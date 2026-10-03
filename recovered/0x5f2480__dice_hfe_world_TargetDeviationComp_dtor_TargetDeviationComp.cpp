// FUNCTION: BF2 0x5f2480
namespace dice { namespace hfe {
extern void sub_0x005f2e00(void* self, void* arg);
extern void del_0x005ef310(void* self);
void dtor_5f2480(void* self) {
    *(void**)self = (void*)0xb72470;
    *(void**)((char*)self + 0x20) = (void*)0xb725f8;
    char* s60 = (char*)self + 0x60;
    sub_0x005f2e00(s60, *(void**)(s60 + 0x10));
    del_0x005ef310(self);
}
} }

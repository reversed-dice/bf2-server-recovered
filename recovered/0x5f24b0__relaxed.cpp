// FUNCTION: BF2 0x5f24b0
namespace dice { namespace hfe {
extern void sub_0x005f2e00(void* self, void* arg);
extern void del_0x005ef310(void* self);
void dtor_5ad8a0(void* self) {
    *(void**)self = (void*)0xb72470;
    *(void**)((char*)self + 0x20) = (void*)0xb725f8;
    char* s230 = (char*)self + 0x60;
    sub_0x005f2e00(s230, *(void**)(s230 + 0x10));
    del_0x005ef310(self);
}
} }

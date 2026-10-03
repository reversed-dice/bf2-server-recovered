// FUNCTION: BF2 0x64b040
namespace dice { namespace hfe {
extern void sub_0x0064b500(void* self);
extern void sub_0x0064ce80(void* self);
void ctor_64b040(void* self) {
    *(void**)self = (void*)0xb89650;
    sub_0x0064b500((char*)self + 0x8);
    *(void**)self = (void*)0xb89570;
    *(void**)((char*)self + 0x8) = (void*)0xb895e8;
    *(int*)((char*)self + 0x28) = (int)0x1;
    sub_0x0064ce80((char*)self + 0x30);
    *(void**)((char*)self + 0x50) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x58) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x60) = (void*)0xf6c6e8;
    *(void**)((char*)self + 0x70) = (void*)0xf6c6e8;
}
} }

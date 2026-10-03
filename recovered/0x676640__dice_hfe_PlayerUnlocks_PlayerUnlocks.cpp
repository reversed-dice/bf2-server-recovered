// FUNCTION: BF2 0x676640
namespace dice { namespace hfe {
extern void sub_0x0064b500(void* self);
extern void sub_0x0064ce80(void* self);
void ctor_676640(void* self) {
    *(void**)self = (void*)0xb8b8f0;
    sub_0x0064b500((char*)self + 0x8);
    *(void**)self = (void*)0xb8b810;
    *(void**)((char*)self + 0x8) = (void*)0xb8b888;
    *(int*)((char*)self + 0x28) = (int)0x1;
    *(void**)((char*)self + 0x30) = (void*)0x0;
    *(void**)((char*)self + 0x38) = (void*)0x0;
    sub_0x0064ce80((char*)self + 0x40);
    *(char*)((char*)self + 0x58) = (char)0x0;
    *(int*)((char*)self + 0x5c) = (int)0x0;
    *(char*)((char*)self + 0x60) = (char)0x0;
}
} }

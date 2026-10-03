// FUNCTION: BF2 0x656a20
namespace dice { namespace hfe {
extern void sub_0x0064b500(void* self);
extern void sub_0x0064ce80(void* self);
void ctor_656a20(void* self) {
    *(void**)self = (void*)0xb8a430;
    sub_0x0064b500((char*)self + 0x8);
    *(void**)self = (void*)0xb8a350;
    *(void**)((char*)self + 0x8) = (void*)0xb8a3e0;
    *(int*)((char*)self + 0x28) = (int)0x1;
    sub_0x0064ce80((char*)self + 0x30);
    *(int*)((char*)self + 0x4c) = (int)0x0;
}
} }

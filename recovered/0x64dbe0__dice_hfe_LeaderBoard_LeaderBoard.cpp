// FUNCTION: BF2 0x64dbe0
namespace dice { namespace hfe {
extern void sub_0x0064b500(void* self);
extern void sub_0x0064ce80(void* self);
void ctor_64dbe0(void* self) {
    *(void**)self = (void*)0xb89d90;
    sub_0x0064b500((char*)self + 0x8);
    *(void**)self = (void*)0xb89cb0;
    *(void**)((char*)self + 0x8) = (void*)0xb89d30;
    *(int*)((char*)self + 0x28) = (int)0x1;
    sub_0x0064ce80((char*)self + 0x30);
    *(int*)((char*)self + 0x48) = (int)0x0;
    *(int*)((char*)self + 0x4c) = (int)0x0;
}
} }

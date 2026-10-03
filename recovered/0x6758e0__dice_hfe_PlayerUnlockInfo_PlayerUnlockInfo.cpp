// FUNCTION: BF2 0x6758e0
namespace dice { namespace hfe {
extern void fn_0x0064b500(void* p);
extern void fn_0x0064ce80(void* p);
void ctor_6758e0(void* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb8b6d0;
    fn_0x0064b500((char*)self + 0x8);
    *(void**)((char*)self + 0x0) = (void*)0xb8b5d0;
    *(void**)((char*)self + 0x8) = (void*)0xb8b670;
    *(int*)((char*)self + 0x28) = 0x1;
    fn_0x0064ce80((char*)self + 0x30);
    char* a_48 = (char*)self + 0x48;
    *(void**)((char*)self + 0x48) = (void*)0x0;
    *(void**)(a_48 + 0x8) = 0;
    *(void**)(a_48 + 0x10) = 0;
}
} }

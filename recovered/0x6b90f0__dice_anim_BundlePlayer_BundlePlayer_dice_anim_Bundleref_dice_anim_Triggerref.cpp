// FUNCTION: BF2 0x6b90f0
namespace dice { namespace hfe {
extern void fn_0x006b9070(void* self, void* a, void* b, void* c, void* d);
void ctor_6b90f0(void* self, void* a, void* b, void* c, void* d) {
    *(void**)self = (void*)0x0;
    *(void**)((char*)self + 0x8) = (void*)0x0;
    *(void**)((char*)self + 0x10) = a;
    *(void**)((char*)self + 0x18) = b;
    *(int*)((char*)self + 0x24) = (int)0x0;
    *(char*)((char*)self + 0x28) = (char)0x0;
    fn_0x006b9070(self, a, b, c, d);
}
} }

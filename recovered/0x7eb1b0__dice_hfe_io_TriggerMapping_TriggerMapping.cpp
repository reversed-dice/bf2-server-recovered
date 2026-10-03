// FUNCTION: BF2 0x7eb1b0
namespace dice { namespace hfe {
extern void fn_0x007eb150(void* self, void* a, void* b, void* c, void* d);
void ctor_7eb1b0(void* self, void* a, void* b, void* c, void* d) {
    *(int*)self = (int)0x0;
    *(int*)((char*)self + 0x4) = (int)0x0;
    *(char*)((char*)self + 0x18) = (char)0x0;
    *(void**)((char*)self + 0x20) = (void*)0x0;
    fn_0x007eb150(self, a, b, c, d);
}
} }

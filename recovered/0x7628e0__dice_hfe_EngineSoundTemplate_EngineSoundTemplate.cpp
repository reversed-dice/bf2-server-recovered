// FUNCTION: BF2 0x7628e0
namespace dice { namespace hfe {
extern void fn_0x007626d0(void* self, void* a, void* b, void* c, void* d);
void ctor_7628e0(void* self, void* a, void* b, void* c, void* d) {
    *(char*)self = (char)0x0;
    *(char*)((char*)self + 0x1) = (char)0x0;
    fn_0x007626d0(self, a, b, c, d);
}
} }

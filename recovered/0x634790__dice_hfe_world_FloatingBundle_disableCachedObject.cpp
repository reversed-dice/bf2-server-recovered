// FUNCTION: BF2 0x634790
namespace dice { namespace hfe {
extern void fn_0x00585540(void* self, void* a, void* b, void* c, void* d);
void ctor_634790(void* self, void* a, void* b, void* c, void* d) {
    *(int*)((char*)self + 0x2bc) = (int)0x0;
    fn_0x00585540(self, a, b, c, d);
}
} }

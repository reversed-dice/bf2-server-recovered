// FUNCTION: BF2 0x62c370
namespace dice { namespace hfe {
extern void fn_0x006303e0(void* self, void* a, void* b, void* c, void* d);
void ctor_62c370(void* self, void* a, void* b, void* c, void* d) {
    *(int*)((char*)self + 0x334) = (int)0x0;
    *(int*)((char*)self + 0x338) = (int)0x0;
    fn_0x006303e0(self, a, b, c, d);
}
} }

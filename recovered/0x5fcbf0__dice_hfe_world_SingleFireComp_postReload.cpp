// FUNCTION: BF2 0x5fcbf0
namespace dice { namespace hfe {
extern void fn_0x005f53d0(void* self, void* a, void* b, void* c, void* d);
void ctor_5fcbf0(void* self, void* a, void* b, void* c, void* d) {
    *(int*)((char*)self + 0x90) = (int)0x0;
    fn_0x005f53d0(self, a, b, c, d);
}
} }

// FUNCTION: BF2 0x6ff520
namespace dice { namespace hfe {
extern void fn_0x006ff4d0(void* self, void* a, void* b, void* c, void* d);
void ctor_6ff520(void* self, void* a, void* b, void* c, void* d) {
    *(void**)self = (void*)0xb96690;
    *(void**)((char*)self + 0x8) = (void*)0xb96810;
    *(int*)((char*)self + 0x10) = (int)0x1;
    fn_0x006ff4d0(self, a, b, c, d);
}
} }

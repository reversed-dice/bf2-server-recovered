// FUNCTION: BF2 0x57ca70
namespace dice { namespace hfe {
extern void fn_0x00573e60(void* self);
extern void fn_0x0068a600(void* self, int a, int b);
void ctor_57ca70(void* self) {
    fn_0x00573e60(self);
    *(void**)self = (void*)0xb584f0;
    *(void**)((char*)self + 0x100) = (void*)0xb58800;
    fn_0x0068a600(self, 0x8, 0);
}
} }

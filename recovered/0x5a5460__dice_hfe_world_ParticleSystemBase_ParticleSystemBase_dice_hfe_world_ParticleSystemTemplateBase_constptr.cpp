// FUNCTION: BF2 0x5a5460
namespace dice { namespace hfe {
extern void fn_0x00689370(void* self);
extern void fn_0x0068a600(void* self, int a, int b);
void ctor_5a5460(void* self) {
    fn_0x00689370(self);
    *(void**)self = (void*)0xb62f10;
    *(void**)((char*)self + 0x100) = (void*)0xb63228;
    *(void**)((char*)self + 0x218) = (void*)0x0;
    fn_0x0068a600(self, 0x1802, 0);
}
} }

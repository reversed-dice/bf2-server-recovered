// FUNCTION: BF2 0x5adec0
namespace dice { namespace hfe {
extern void fn_0x0058b960(void* p);
extern void fn_0x00598c00(void* p);
void ctor_5adec0(void* self) {
    fn_0x0058b960(self);
    fn_0x00598c00((char*)self + 0x1c8);
    *(void**)((char*)self + 0x0) = (void*)0xb65f10;
    *(void**)((char*)self + 0x10) = (void*)0xb66158;
    *(void**)((char*)self + 0x68) = (void*)0xb66190;
    *(void**)((char*)self + 0x1c8) = (void*)0xb66210;
    *(char*)((char*)self + 0x326) = 0x1;
}
} }

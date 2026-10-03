// FUNCTION: BF2 0x5454d0
namespace dice { namespace hfe {
extern void fn_0x0058b960(void* self);
extern void fn_0x0069f270(void* self, int a, int b);
void ctor_5454d0(void* self) {
    fn_0x0058b960(self);
    *(void**)self = (void*)0xb4d410;
    *(void**)((char*)self + 0x10) = (void*)0xb4d648;
    *(void**)((char*)self + 0x68) = (void*)0xb4d680;
    *(int*)((char*)self + 0x1c8) = 0x1;
    fn_0x0069f270(self, 0x40, 0);
}
} }

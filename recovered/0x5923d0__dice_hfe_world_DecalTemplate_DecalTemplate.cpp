// FUNCTION: BF2 0x5923d0
namespace dice { namespace hfe {
extern void fn_0x0069f570(void* self);
extern void fn_0x0069f270(void* self, int a, int b);
void ctor_5923d0(void* self) {
    fn_0x0069f570(self);
    *(void**)self = (void*)0xb5e0b0;
    *(void**)((char*)self + 0x10) = (void*)0xb5e290;
    *(int*)((char*)self + 0x68) = 0x1;
    *(void**)((char*)self + 0x70) = (void*)0x0;
    fn_0x0069f270(self, 0x40, 0);
}
} }

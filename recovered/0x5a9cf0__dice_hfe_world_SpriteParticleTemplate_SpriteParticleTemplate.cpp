// FUNCTION: BF2 0x5a9cf0
namespace dice { namespace hfe {
extern void fn_0x0069f570(void* self);
extern void fn_0x0069f270(void* self, int a, int b);
void f_5a9cf0(void* self) {
    fn_0x0069f570(self);
    *(void**)self = (void*)0xb64990;
    *(void**)((char*)self + 0x10) = (void*)0xb64b70;
    *(int*)((char*)self + 0x68) = 0x1;
    fn_0x0069f270(self, 0x40, 0);
    *(void**)((char*)self + 0x70) = 0;
}
} }

// FUNCTION: BF2 0x56af10
namespace dice { namespace hfe {
extern void fn_0x0058a480(void* self);
extern void fn_0x0068a600(void* self, int a, int b);
void ctor_56af10(void* self) {
    fn_0x0058a480(self);
    *(void**)self = (void*)0xb548d0;
    *(void**)((char*)self + 0x100) = (void*)0xb54be0;
    *(int*)((char*)self + 0x22c) = 0x1;
    *(int*)((char*)self + 0x230) = 0x0;
    fn_0x0068a600(self, 0x1804, 0);
}
} }

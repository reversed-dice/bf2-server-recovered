// FUNCTION: BF2 0x569a30
namespace dice { namespace hfe {
extern void fn_0x005767f0(void* self);
extern void fn_0x0069f270(void* self, int a, int b);
void ctor_569a30(void* self) {
    fn_0x005767f0(self);
    *(void**)self = (void*)0xb542f0;
    *(void**)((char*)self + 0x10) = (void*)0xb54580;
    *(void**)((char*)self + 0x68) = (void*)0xb545b8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb54638;
    fn_0x0069f270(self, 0x40, 0);
}
} }

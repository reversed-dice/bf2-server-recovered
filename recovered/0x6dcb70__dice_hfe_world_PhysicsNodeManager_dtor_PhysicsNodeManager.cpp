// FUNCTION: BF2 0x6dcb70
namespace dice { namespace hfe {
extern void fn_0x006dcca0(void* p);
extern void fn_0x006d66b0(void* p);
void ctor_6dcb70(void* self) {
    *(void**)self = (void*)0xb94330;
    fn_0x006dcca0((char*)self + 0x10);
    fn_0x006d66b0(self);
}
} }

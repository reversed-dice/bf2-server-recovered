// FUNCTION: BF2 0x7baf80
namespace dice { namespace hfe {
extern void fn_0x007bdeb0(void* p);
extern void fn_0x004085b8(void* p);
void ctor_7baf80(void* self) {
    *(void**)self = (void*)0xba9c10;
    fn_0x007bdeb0((char*)self + 0x8);
    fn_0x004085b8(self);
}
} }

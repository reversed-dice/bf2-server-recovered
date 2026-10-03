// FUNCTION: BF2 0x7dadc0
namespace dice { namespace hfe {
extern void fn_0x007db5c0(void* p);
extern void fn_0x004085b8(void* p);
void ctor_7dadc0(void* self) {
    *(void**)self = (void*)0xbab970;
    fn_0x007db5c0((char*)self + 0x10);
    fn_0x004085b8(self);
}
} }

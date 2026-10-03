// FUNCTION: BF2 0x78b900
namespace dice { namespace hfe { namespace world {
extern void f_0x004085b8(void* p);
extern void base_0x0078bc40(void* self);
void dtor_78b900(void* self) {
    *(void**)self = (void*)0xba4f70;
    f_0x004085b8(*(void**)((char*)self + 0x18));
    base_0x0078bc40(self);
}
} } }

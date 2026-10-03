// FUNCTION: BF2 0x52e3f0
namespace dice { namespace hfe { namespace world {
extern void base_0x005090b0(void* self);
extern void del_0x004085b8(void* self);
void dtor_52e3f0(void* self) {
    *(void**)self = (void*)0xb477d0;
    *(void**)((char*)self + 0x10) = (void*)0xb47a60;
    *(void**)((char*)self + 0x68) = (void*)0xb47a98;
    *(void**)((char*)self + 0x1c8) = (void*)0xb47b18;
    base_0x005090b0(self);
    del_0x004085b8(self);
}
} } }

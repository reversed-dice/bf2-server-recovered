// FUNCTION: BF2 0x584f00
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5155e0(void* self) {
    *(void**)self = (void*)0xb5b030;
    *(void**)((char*)self + 0x10) = (void*)0xb5b2c0;
    *(void**)((char*)self + 0x68) = (void*)0xb5b2f8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb5b378;
    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }

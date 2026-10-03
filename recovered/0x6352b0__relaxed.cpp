// FUNCTION: BF2 0x6352b0
namespace dice { namespace hfe { namespace world {
extern void base_0x005881c0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5155e0(void* self) {
    *(void**)self = (void*)0xb82e10;
    *(void**)((char*)self + 0x10) = (void*)0xb830a0;
    *(void**)((char*)self + 0x68) = (void*)0xb830d8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb83158;
    base_0x005881c0(self);
    del_0x004085b8(self);
}
} } }

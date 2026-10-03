// FUNCTION: BF2 0x6373d0
namespace dice { namespace hfe { namespace world {
extern void base_0x005881c0(void* self);
extern void del_0x004085b8(void* self);
void dtor_6373d0(void* self) {
    *(void**)self = (void*)0xb83ed0;
    *(void**)((char*)self + 0x10) = (void*)0xb84160;
    *(void**)((char*)self + 0x68) = (void*)0xb84198;
    *(void**)((char*)self + 0x1c8) = (void*)0xb84218;
    base_0x005881c0(self);
    del_0x004085b8(self);
}
} } }

// FUNCTION: BF2 0x5a5880
namespace dice { namespace hfe { namespace world {
extern void base_0x005a54a0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5a5880(void* self) {
    *(void**)self = (void*)0xb632d0;
    *(void**)((char*)self + 0x100) = (void*)0xb635e8;
    base_0x005a54a0(self);
    del_0x004085b8(self);
}
} } }

// FUNCTION: BF2 0x5f0fc0
namespace dice { namespace hfe { namespace world {
extern void base_0x005ef310(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb71e70;
    *(void**)((char*)self + 0x20) = (void*)0xb71ff8;
    base_0x005ef310(self);
    del_0x004085b8(self);
}
} } }

// FUNCTION: BF2 0x59f100
namespace dice { namespace hfe { namespace world {
extern void base_0x005a54a0(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb61db0;
    *(void**)((char*)self + 0x100) = (void*)0xb620c8;
    base_0x005a54a0(self);
    del_0x004085b8(self);
}
} } }

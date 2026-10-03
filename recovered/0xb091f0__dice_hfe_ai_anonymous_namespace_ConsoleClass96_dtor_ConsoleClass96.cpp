// FUNCTION: BF2 0xb091f0
namespace dice { namespace hfe { namespace world {
extern void base_0x00756000(void* self);
extern void del_0x004085b8(void* self);
void dtor_b091f0(void* self) {
    *(void**)self = (void*)0xc96b90;
    base_0x00756000(self);
    del_0x004085b8(self);
}
} } }

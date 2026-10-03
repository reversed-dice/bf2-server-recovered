// FUNCTION: BF2 0xb0a360
namespace dice { namespace hfe { namespace world {
extern void base_0x00756000(void* self);
extern void del_0x004085b8(void* self);
void dtor_b0a360(void* self) {
    *(void**)self = (void*)0xca0fb0;
    base_0x00756000(self);
    del_0x004085b8(self);
}
} } }

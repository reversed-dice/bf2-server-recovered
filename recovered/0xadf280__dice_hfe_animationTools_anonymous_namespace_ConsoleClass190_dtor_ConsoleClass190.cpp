// FUNCTION: BF2 0xadf280
namespace dice { namespace hfe { namespace world {
extern void base_0x00756000(void* self);
extern void del_0x004085b8(void* self);
void dtor_adf280(void* self) {
    *(void**)self = (void*)0xc8d1d0;
    base_0x00756000(self);
    del_0x004085b8(self);
}
} } }

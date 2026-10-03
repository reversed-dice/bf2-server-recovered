// FUNCTION: BF2 0xb09700
namespace dice { namespace hfe { namespace world {
extern void base_0x00756000(void* self);
extern void del_0x004085b8(void* self);
void dtor_b09700(void* self) {
    *(void**)self = (void*)0xc99df0;
    base_0x00756000(self);
    del_0x004085b8(self);
}
} } }

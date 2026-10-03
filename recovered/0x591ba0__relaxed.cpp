// FUNCTION: BF2 0x591ba0
namespace dice { namespace hfe { namespace world {
extern void base_0x0069f670(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb5e0b0;
    *(void**)((char*)self + 0x10) = (void*)0xb5e290;
    base_0x0069f670(self);
    del_0x004085b8(self);
}
} } }

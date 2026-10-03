// FUNCTION: BF2 0x6077b0
namespace dice { namespace hfe { namespace world {
extern void base_0x00608e20(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb771d0;
    *(void**)((char*)self + 0x20) = (void*)0xb773b0;
    base_0x00608e20(self);
    del_0x004085b8(self);
}
} } }

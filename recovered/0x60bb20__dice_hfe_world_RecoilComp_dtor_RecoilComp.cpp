// FUNCTION: BF2 0x60bb20
namespace dice { namespace hfe { namespace world {
extern void base_0x004085b8(void* self);
void dtor_60bb20(void* self) {
    *(void**)((char*)self + 0x20) = (void*)0xb794f0;
    *(void**)self = (void*)0xb70110;
    base_0x004085b8(self);
}
} } }

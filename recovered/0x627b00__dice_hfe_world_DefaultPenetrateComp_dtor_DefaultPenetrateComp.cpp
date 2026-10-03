// FUNCTION: BF2 0x627b00
namespace dice { namespace hfe { namespace world {
extern void base_0x004085b8(void* self);
void dtor_627b00(void* self) {
    *(void**)((char*)self + 0x20) = (void*)0xb7f8d0;
    *(void**)self = (void*)0xb7bcb0;
    base_0x004085b8(self);
}
} } }

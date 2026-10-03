// FUNCTION: BF2 0x5ec740
namespace dice { namespace hfe { namespace world {
extern void base_0x005eace0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5ec740(void* self) {
    *(void**)self = (void*)0xb70650;
    *(void**)((char*)self + 0x20) = (void*)0xb70838;
    base_0x005eace0(self);
    del_0x004085b8(self);
}
} } }

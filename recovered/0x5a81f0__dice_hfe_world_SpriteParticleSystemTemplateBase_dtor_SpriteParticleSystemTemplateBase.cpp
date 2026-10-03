// FUNCTION: BF2 0x5a81f0
namespace dice { namespace hfe { namespace world {
extern void base_0x005a8150(void* self);
extern void del_0x004085b8(void* self);
void dtor_5a81f0(void* self) {
    *(void**)self = (void*)0xb63d30;
    *(void**)((char*)self + 0x10) = (void*)0xb63f98;
    base_0x005a8150(self);
    del_0x004085b8(self);
}
} } }

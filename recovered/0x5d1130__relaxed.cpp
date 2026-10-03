// FUNCTION: BF2 0x5d1130
namespace dice { namespace hfe { namespace world {
extern void base_0x007c3c80(void* self);
extern void del_0x004085b8(void* self);
void dtor_50ccc0(void* self) {
    *(void**)self = (void*)0xb6cef0;
    *(void**)((char*)self + 0x50) = (void*)0xb6cf98;
    base_0x007c3c80(self);
    del_0x004085b8(self);
}
} } }

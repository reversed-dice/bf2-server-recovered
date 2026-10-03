// FUNCTION: BF2 0x60eb80
namespace dice { namespace hfe { namespace world {
extern void base_0x0060bcc0(void* self);
extern void del_0x004085b8(void* self);
void dtor_60eb80(void* self) {
    *(void**)self = (void*)0xb79d10;
    *(void**)((char*)self + 0x20) = (void*)0xb79ea0;
    base_0x0060bcc0(self);
    del_0x004085b8(self);
}
} } }

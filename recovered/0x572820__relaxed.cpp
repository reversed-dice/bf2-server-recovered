// FUNCTION: BF2 0x572820
namespace dice { namespace hfe { namespace world {
extern void base_0x0053bf90(void* self);
extern void del_0x004085b8(void* self);
void dtor_521d90(void* self) {
    *(void**)self = (void*)0xb55ed0;
    *(void**)((char*)self + 0x10) = (void*)0xb56370;
    *(void**)((char*)self + 0x68) = (void*)0xb563a8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb56428;
    *(void**)((char*)self + 0x1f8) = (void*)0xb56490;
    base_0x0053bf90(self);
    del_0x004085b8(self);
}
} } }

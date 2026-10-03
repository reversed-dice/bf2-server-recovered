// FUNCTION: BF2 0x536660
namespace dice { namespace hfe { namespace world {
extern void base_0x0053bf90(void* self);
extern void del_0x004085b8(void* self);
void dtor_521d90(void* self) {
    *(void**)self = (void*)0xb49df0;
    *(void**)((char*)self + 0x10) = (void*)0xb4a290;
    *(void**)((char*)self + 0x68) = (void*)0xb4a2c8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb4a348;
    *(void**)((char*)self + 0x1f8) = (void*)0xb4a3b0;
    base_0x0053bf90(self);
    del_0x004085b8(self);
}
} } }

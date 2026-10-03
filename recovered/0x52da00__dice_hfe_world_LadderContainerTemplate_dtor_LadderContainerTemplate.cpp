// FUNCTION: BF2 0x52da00
namespace dice { namespace hfe { namespace world {
extern void base_0x0053bf90(void* self);
extern void del_0x004085b8(void* self);
void dtor_52da00(void* self) {
    *(void**)self = (void*)0xb46890;
    *(void**)((char*)self + 0x10) = (void*)0xb46d30;
    *(void**)((char*)self + 0x68) = (void*)0xb46d68;
    *(void**)((char*)self + 0x1c8) = (void*)0xb46de8;
    *(void**)((char*)self + 0x1f8) = (void*)0xb46e50;
    base_0x0053bf90(self);
    del_0x004085b8(self);
}
} } }

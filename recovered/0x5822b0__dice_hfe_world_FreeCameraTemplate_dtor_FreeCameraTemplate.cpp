// FUNCTION: BF2 0x5822b0
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_5822b0(void* self) {
    *(void**)self = (void*)0xb59ff0;
    *(void**)((char*)self + 0x10) = (void*)0xb5a280;
    *(void**)((char*)self + 0x68) = (void*)0xb5a2b8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb5a338;
    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }

// FUNCTION: BF2 0x57d020
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_57d020(void* self) {
    *(void**)self = (void*)0xb588b0;
    *(void**)((char*)self + 0x10) = (void*)0xb58b40;
    *(void**)((char*)self + 0x68) = (void*)0xb58b78;
    *(void**)((char*)self + 0x1c8) = (void*)0xb58bf8;
    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }

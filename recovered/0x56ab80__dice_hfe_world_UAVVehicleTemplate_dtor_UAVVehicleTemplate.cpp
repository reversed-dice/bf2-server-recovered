// FUNCTION: BF2 0x56ab80
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_56ab80(void* self) {
    *(void**)self = (void*)0xb542f0;
    *(void**)((char*)self + 0x10) = (void*)0xb54580;
    *(void**)((char*)self + 0x68) = (void*)0xb545b8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb54638;
    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }

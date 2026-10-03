// FUNCTION: BF2 0x584ed0
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
void dtor_584ed0(void* self) {
    *(void**)self = (void*)0xb5b030;
    *(void**)((char*)self + 0x10) = (void*)0xb5b2c0;
    *(void**)((char*)self + 0x68) = (void*)0xb5b2f8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb5b378;
    base_0x005768d0(self);
}
} } }

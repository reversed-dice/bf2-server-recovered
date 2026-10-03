// FUNCTION: BF2 0x5881f0
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
void dtor_5881f0(void* self) {
    *(void**)self = (void*)0xb5b990;
    *(void**)((char*)self + 0x10) = (void*)0xb5bc20;
    *(void**)((char*)self + 0x68) = (void*)0xb5bc58;
    *(void**)((char*)self + 0x1c8) = (void*)0xb5bcd8;
    base_0x005768d0(self);
}
} } }

// FUNCTION: BF2 0x57cff0
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
void dtor_57cff0(void* self) {
    *(void**)self = (void*)0xb588b0;
    *(void**)((char*)self + 0x10) = (void*)0xb58b40;
    *(void**)((char*)self + 0x68) = (void*)0xb58b78;
    *(void**)((char*)self + 0x1c8) = (void*)0xb58bf8;
    base_0x005768d0(self);
}
} } }

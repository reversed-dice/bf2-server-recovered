// FUNCTION: BF2 0x630d10
namespace dice { namespace hfe { namespace world {
extern void base_0x005881c0(void* self);
void dtor_630d10(void* self) {
    *(void**)self = (void*)0xb81c70;
    *(void**)((char*)self + 0x10) = (void*)0xb81f70;
    *(void**)((char*)self + 0x68) = (void*)0xb81fa8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb82028;
    *(void**)((char*)self + 0x290) = (void*)0xb82090;
    base_0x005881c0(self);
}
} } }

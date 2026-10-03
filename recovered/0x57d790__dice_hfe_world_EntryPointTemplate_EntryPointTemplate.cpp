// FUNCTION: BF2 0x57d790
namespace dice { namespace hfe { namespace world {
extern void base_0x0058b960(void* self);
void ctor_57d790(void* self) {
    base_0x0058b960(self);
    *(void**)self = (void*)0xb59150;
    *(void**)((char*)self + 0x10) = (void*)0xb59388;
    *(void**)((char*)self + 0x68) = (void*)0xb593c0;
    *(int*)((char*)self + 0x1c8) = (int)0x40400000;
}
} } }

// FUNCTION: BF2 0x59d8d0
namespace dice { namespace hfe { namespace world {
extern void base_0x0058b960(void* self);
void ctor_59d8d0(void* self) {
    base_0x0058b960(self);
    *(void**)self = (void*)0xb61230;
    *(void**)((char*)self + 0x10) = (void*)0xb61468;
    *(void**)((char*)self + 0x68) = (void*)0xb614a0;
    *(int*)((char*)self + 0x1c8) = (int)0x40400000;
}
} } }

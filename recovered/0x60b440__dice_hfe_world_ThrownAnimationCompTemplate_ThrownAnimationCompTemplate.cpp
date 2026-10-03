// FUNCTION: BF2 0x60b440
namespace dice { namespace hfe { namespace world {
extern void base_0x00609f90(void* self);
void ctor_60b440(void* self) {
    base_0x00609f90(self);
    *(void**)self = (void*)0xb78f30;
    *(void**)((char*)self + 0x8) = (void*)0xb78fb8;
    *(int*)((char*)self + 0x14) = (int)0x1;
}
} } }

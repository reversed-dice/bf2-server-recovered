// FUNCTION: BF2 0x6f8590
namespace dice { namespace hfe { namespace world {
extern void base_0x006d65b0(void* self);
void ctor_6f8590(void* self) {
    base_0x006d65b0(self);
    *(void**)self = (void*)0xb95e10;
    *(int*)((char*)self + 0x10) = (int)0x1;
    *(unsigned char*)((char*)self + 0x14) = (unsigned char)0x1;
    *(void**)((char*)self + 0x18) = (void*)0x0;
    *(int*)((char*)self + 0x20) = (int)0x3f800000;
    *(int*)((char*)self + 0x24) = (int)0x0;
}
} } }

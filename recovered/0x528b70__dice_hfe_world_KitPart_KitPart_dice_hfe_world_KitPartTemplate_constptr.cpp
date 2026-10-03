// FUNCTION: BF2 0x528b70
namespace dice { namespace hfe { namespace world {
extern void base_0x00573e60(void* self);
void ctor_528b70(void* self) {
    base_0x00573e60(self);
    *(void**)self = (void*)0xb45030;
    *(void**)((char*)self + 0x100) = (void*)0xb45350;
    *(void**)((char*)self + 0x238) = (void*)0xb45388;
    *(int*)((char*)self + 0x240) = (int)0x1;
}
} } }

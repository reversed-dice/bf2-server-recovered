// FUNCTION: BF2 0x516d90
namespace dice { namespace hfe { namespace world {
extern void base_0x00573e60(void* self);
void ctor_516d90(void* self) {
    base_0x00573e60(self);
    *(void**)self = (void*)0xb410d0;
    *(void**)((char*)self + 0x100) = (void*)0xb413e0;
    *(int*)((char*)self + 0x238) = (int)0x1;
    *(int*)((char*)self + 0x23c) = (int)0xffffffff;
    *(int*)((char*)self + 0x240) = (int)0x0;
}
} } }

// FUNCTION: BF2 0x42c170
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void base_42c0c0(void* self);
extern "C" void helper_42c0c0(void* self, int cat, unsigned int a, bool b, void* p, unsigned int c, float f);

extern "C" void ctor_42c0c0(void* self, int cat, unsigned int a, bool b, void* p, unsigned int c, float f)
{
    base_42c0c0(self);
    *(void**)self = (void*)0xb2d6b0;
    *(unsigned int*)((char*)self + 0x10) = cat;
    *(unsigned int*)((char*)self + 0x14) = a;
    *(unsigned char*)((char*)self + 0x4c) = (unsigned char)c;
    *(float*)((char*)self + 0x50) = f;
    helper_42c0c0(self, cat, a, b, p, c, f);
}

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6387a0
extern "C" void base_638550(void* self);

extern "C" void ctor_638550(void* self, void* a, void* b)
{
    base_638550(self);
    *(void**)self = (void*)0xb847d0;
    *(int*)((char*)self + 0x244) = 1;
    float z = 0;
    float* v1 = (float*)((char*)self + 0x250);
    v1[0] = 0;
    v1[1] = 0;
    v1[2] = 0;
    float* v2 = (float*)((char*)self + 0x25c);
    v2[0] = 0;
    v2[1] = 0;
    v2[2] = 0;
    *(void**)((char*)self + 0x248) = a;
    *(float*)((char*)self + 0x268) = z;
    *(float*)((char*)self + 0x26c) = z;
    *(float*)((char*)self + 0x270) = z;
    *(char*)((char*)self + 0x128) = 0;
}

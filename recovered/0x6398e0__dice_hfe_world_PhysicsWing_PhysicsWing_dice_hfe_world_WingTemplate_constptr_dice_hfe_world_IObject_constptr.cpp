// FUNCTION: BF2 0x6398e0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" void base_6398e0(void* self);

extern "C" void ctor_6398e0(void* self, void* a, void* b)
{
    base_6398e0(self);
    *(void**)self = (void*)0xb84cd0;
    *(int*)((char*)self + 0x244) = 1;
    char* base = (char*)self + 0x260;
    unsigned int* p = (unsigned int*)base;
    for (unsigned long i = 4; i != 0; --i) {
        p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
        p += 4;
    }
    *(float*)(base + 0x3c) = 1.0f;
    *(float*)(base + 0x28) = 1.0f;
    *(float*)(base + 0x14) = 1.0f;
    *(float*)(base + 0x0) = 1.0f;
    *(void**)((char*)self + 0x258) = b;
    *(void**)((char*)self + 0x250) = a;
    *(int*)((char*)self + 0x248) = -1;
}

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x51d3e0
namespace dice { namespace hfe { namespace world {
extern void func_0x0058a480(void* self, void const* tpl);
extern void func_0x0068a600(void* self, unsigned int a, unsigned int b);

void ctor_51d210(void* self, void const* tpl) {
    char* s = (char*)self;
    float zero = 0.0f;
    float half = 0.5f;

    func_0x0058a480(self, tpl);
    *(void**)s = (void*)0xb41d70;
    *(void**)(s + 0x100) = (void*)0xb42080;
    *(int*)(s + 0x22c) = 1;
    {
        unsigned long* l = (unsigned long*)(s + 0x230);
        l[1] = (unsigned long)l;
        *(unsigned long*)(s + 0x230) = (unsigned long)l;
        *(unsigned long*)(s + 0x240) = 0;
    }
    {
        unsigned long* q1 = (unsigned long*)(s + 0x258);
        *(unsigned long*)(s + 0x258) = 0;
        q1[1] = 0;
        q1[2] = 0;
    }
    {
        unsigned long* q2 = (unsigned long*)(s + 0x270);
        *(unsigned long*)(s + 0x270) = 0;
        q2[1] = 0;
        q2[2] = 0;
    }
    *(float*)(s + 0x2a0) = zero;
    *(int*)(s + 0x2a4) = 0;
    {
        float* v1 = (float*)(s + 0x2a8);
        *(float*)(s + 0x2a8) = zero;
        v1[1] = zero;
        v1[2] = zero;
    }
    *(float*)(s + 0x2b4) = zero;
    *(float*)(s + 0x2b8) = zero;
    *(int*)(s + 0x2bc) = 6;
    *(float*)(s + 0x2c0) = 0.2f;
    *(int*)(s + 0x2c4) = -1;
    {
        float* v2 = (float*)(s + 0x2cc);
        *(float*)(s + 0x2cc) = zero;
        v2[1] = zero;
        v2[2] = zero;
    }
    {
        float* v3 = (float*)(s + 0x2d8);
        *(float*)(s + 0x2d8) = zero;
        v3[1] = zero;
        v3[2] = zero;
    }
    *(float*)(s + 0x2e4) = half;
    *(char*)(s + 0x2f0) = 0;
    *(float*)(s + 0x2f4) = half;
    *(void**)(s + 0x2f8) = 0;
    {
        float* v4 = (float*)(s + 0x300);
        *(float*)(s + 0x300) = zero;
        v4[1] = zero;
        v4[2] = zero;
    }
    *(float*)(s + 0x310) = 0.3f;
    *(float*)(s + 0x314) = 1.0f;
    *(float*)(s + 0x318) = zero;
    *(char*)(s + 0x31c) = 1;
    *(float*)(s + 0x320) = zero;
    *(float*)(s + 0x324) = 6.0f;
    *(float*)(s + 0x328) = zero;
    *(float*)(s + 0x32c) = 4.0f;
    *(char*)(s + 0x330) = 0;
    *(char*)(s + 0x331) = 0;
    *(float*)(s + 0x334) = half;
    *(char*)(s + 0x338) = 1;
    *(char*)(s + 0x339) = 1;
    *(void**)(s + 0x248) = (void*)tpl;
    *(int*)(s + 0x250) = 0;
    func_0x0068a600(self, 0x3000, 0);
}
} } }

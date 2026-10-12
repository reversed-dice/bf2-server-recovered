// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7659f0
namespace dice { namespace hfe {
extern void fn_0x0069f570(void* self);
extern void fn_0x0069f270(void* self, unsigned int a, unsigned int b);
void ctor_7659f0(void* self) {
    fn_0x0069f570(self);
    *(void**)self = (void*)0xba0a90;
    *(void**)((char*)self + 0x10) = (void*)0xba0d48;
    *(void**)((char*)self + 0x68) = (void*)0xba0d80;
    *(int*)((char*)self + 0x70) = 1;
    *(void**)((char*)self + 0x78) = (void*)0;
    *(char*)((char*)self + 0xb0) = 0;
    void* sys = *(void**)0x10aa288;
    void* mid = ((void* (*)(void*))(*(void***)sys)[0x50 / 8])(sys);
    *(void**)((char*)self + 0x78) = ((void* (*)(void*))(*(void***)mid)[0x20 / 8])(mid);
    *(float*)((char*)self + 0x80) = ((float (*)(void*))(*(void***)*(void**)((char*)self + 0x78))[0x48 / 8])(*(void**)((char*)self + 0x78));
    *(float*)((char*)self + 0x84) = ((float (*)(void*))(*(void***)*(void**)((char*)self + 0x78))[0x70 / 8])(*(void**)((char*)self + 0x78));
    *(float*)((char*)self + 0x88) = ((float (*)(void*))(*(void***)*(void**)((char*)self + 0x78))[0xb8 / 8])(*(void**)((char*)self + 0x78));
    *(float*)((char*)self + 0x8c) = ((float (*)(void*))(*(void***)*(void**)((char*)self + 0x78))[0xc8 / 8])(*(void**)((char*)self + 0x78));
    *(float*)((char*)self + 0x90) = ((float (*)(void*))(*(void***)*(void**)((char*)self + 0x78))[0xf8 / 8])(*(void**)((char*)self + 0x78));
    *(float*)((char*)self + 0x94) = ((float (*)(void*))(*(void***)*(void**)((char*)self + 0x78))[0x128 / 8])(*(void**)((char*)self + 0x78));
    *(float*)((char*)self + 0x98) = 1.0f;
    *(float*)((char*)self + 0x9c) = 1.0f;
    *(float*)((char*)self + 0xa0) = 1.0f;
    *(float*)((char*)self + 0xa4) = 1.0f;
    *(float*)((char*)self + 0xa8) = 1.0f;
    *(float*)((char*)self + 0xac) = 1.0f;
    fn_0x0069f270(self, 0x2000, 0);
}
} }

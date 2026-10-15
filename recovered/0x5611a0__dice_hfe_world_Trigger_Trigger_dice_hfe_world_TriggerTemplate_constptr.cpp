// BF2_FLAGS: -fno-strict-aliasing
// BF2_COMPILER: gcc-3.4
// FUNCTION: BF2 0x5611a0
namespace dice { namespace hfe { namespace world {

extern void bundle_base(void* p, void* tmpl);

void trigger_ctor(void* p, void* tmpl) {
    bundle_base(p, tmpl);
    *(void**)p = (void*)0xb51c50;
    *(void**)((char*)p + 0x100) = (void*)0xb51f60;
    *(void**)((char*)p + 0x240) = tmpl;
    *(unsigned int*)((char*)p + 0x238) = 1u;
    *(unsigned int*)((char*)p + 0x248) = 0u;
    *(unsigned int*)((char*)p + 0x24c) = 0u;
    char* a = (char*)p + 0x250;
    *(unsigned long long*)(a + 8) = 0ULL;
    *(unsigned long long*)(a + 16) = 0ULL;
    char* b = (char*)p + 0x270;
    *(unsigned char*)((char*)p + 0x268) = 0u;
    *(unsigned long long*)((char*)p + 0x250) = 0ULL;
    *(unsigned long long*)(b + 8) = 0ULL;
    *(unsigned long long*)(b + 16) = 0ULL;
    *(unsigned long long*)((char*)p + 0x270) = 0ULL;
    *(unsigned long long*)((char*)p + 0x288) = 0x00000000759dc150ULL;
}

}}}

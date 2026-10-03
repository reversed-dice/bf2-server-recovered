// FUNCTION: BF2 0xaf7750
namespace dice { namespace hfe {
extern void* fn_0xaf3820(void);
int execute_0xaf7750(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        unsigned char v = *(unsigned char*)*(void**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        void* p = fn_0xaf3820();
        ((void (*)(void*, unsigned char))(*(void***)p)[0xa])(p, v);
    }
    return 0;
}
} }

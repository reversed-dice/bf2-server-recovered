// FUNCTION: BF2 0xaf74b0
namespace dice { namespace hfe {
extern void* fn_af3820(void);
int execute_0xaf74b0(void* self) {
    if (*(int*)((char*)self + 0x30) == 2) {
        int a = *(int*)*(void**)((char*)self + 0x38);
        int b = *(int*)*(void**)((char*)self + 0x40);
        *(char*)((char*)self + 0x108) = 0;
        void* p = fn_af3820();
        ((void (*)(void*, int, int))(*(void***)p)[0xb])(p, a, b);
    }
    return 0;
}
} }

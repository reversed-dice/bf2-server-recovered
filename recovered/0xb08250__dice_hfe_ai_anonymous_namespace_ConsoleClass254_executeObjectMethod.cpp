// FUNCTION: BF2 0xb08250
namespace dice { namespace hfe {
extern void* fn_afedf0(void);
int execute_0xb08250(void* self) {
    if (*(int*)((char*)self + 0x30) == 2) {
        int a2 = *(int*)*(void**)((char*)self + 0x38);
        int b = *(int*)*(void**)((char*)self + 0x40);
        *(char*)((char*)self + 0x108) = 0;
        void* p = fn_afedf0();
        ((void (*)(void*, int, int))(*(void***)p)[0x0])(p, a2, b);
    }
    return 0;
}
} }

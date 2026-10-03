// FUNCTION: BF2 0xb081f0
namespace dice { namespace hfe {
extern void* fn_0xafedf0(void);
int execute_0xb081f0(void* self) {
    if (*(int*)((char*)self + 0x30) == 1) {
        int v = *(int*)*(void**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        void* p = fn_0xafedf0();
        ((void (*)(void*, int))(*(void***)p)[0x2])(p, v);
    }
    return 0;
}
} }

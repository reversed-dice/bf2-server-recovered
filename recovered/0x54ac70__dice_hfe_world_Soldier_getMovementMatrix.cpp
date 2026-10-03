// FUNCTION: BF2 0x54ac70
namespace dice { namespace hfe { namespace world {
extern void* fn_546820(void);
extern void fn_407af8(void) __attribute__((noreturn));
void getMovementMatrix_0x54ac70(void* self) {
    void* p = fn_546820();
    if (p) {
        void* q = ((void* (*)(void*, int))(*(void***)p)[0x3])(p, *(int*)0x00c7d110);
        ((void (*)(void*))(*(void***)q)[0x21])(q);
        return;
    }
    fn_407af8();
}
} } }

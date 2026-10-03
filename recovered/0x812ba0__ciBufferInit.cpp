// FUNCTION: BF2 0x812ba0
namespace dice { namespace hfe {
extern void* fn_83eef0(unsigned long);
extern void fn_407ee8(void*, void*, int, void*) __attribute__((noreturn));
int ciBufferInit_0x812ba0(void* self) {
    if (!self)
        fn_407ee8((void*)0xbb2c0c, (void*)0xbb2920, 0x5f, (void*)0xbb2810);
    *(int*)((char*)self + 0x8) = 0;
    *(int*)((char*)self + 0xc) = 0x2000;
    void* p = fn_83eef0(0x2001);
    *(void**)self = p;
    if (!p)
        return 0;
    *(char*)p = 0;
    return 1;
}
} }

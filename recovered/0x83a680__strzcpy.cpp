// FUNCTION: BF2 0x83a680
namespace dice { namespace hfe {
extern void fn_407648(void* a, void* b, long c);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void strzcpy_0x83a680(void* arg1, void* arg2, long arg3) {
    if (!arg1)
        fn_407ee8((void*)0xbb6b68, (void*)0xbb6b08, 0x2f, (void*)0xbb6a90);
    if (!arg2)
        fn_407ee8((void*)0xbb6b7c, (void*)0xbb6b08, 0x30, (void*)0xbb6a90);
    fn_407648(arg1, arg2, arg3);
    *(char*)((char*)arg1 + arg3 - 1) = 0;
}
} }

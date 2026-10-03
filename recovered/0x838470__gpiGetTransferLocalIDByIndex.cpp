// FUNCTION: BF2 0x838470
namespace dice { namespace hfe {
extern int fn_83af50(void* a);
extern void* fn_83ad40(void* a, int b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
int gpiGetTransferLocalIDByIndex_0x838470(void* self, int arg2) {
    void* p = *(void**)self;
    int n = fn_83af50(*(void**)((char*)p + 0x508));
    if (arg2 < 0)
        fn_407ee8((void*)0xbb5354, (void*)0xbb6a10, 0x1ad, (void*)0xbb6960);
    if (n <= arg2)
        fn_407ee8((void*)0xbb681a, (void*)0xbb6a10, 0x1ae, (void*)0xbb6960);
    void* q = fn_83ad40(*(void**)((char*)p + 0x508), arg2);
    if (!q)
        fn_407ee8((void*)0xbb6826, (void*)0xbb6a10, 0x1b3, (void*)0xbb6960);
    return *(int*)((char*)q + 0x1c);
}
} }

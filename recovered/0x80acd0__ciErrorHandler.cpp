// FUNCTION: BF2 0x80acd0
namespace dice { namespace hfe {
extern void fn_80e280(void* a, void* b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void ciErrorHandler_0x80acd0(void* self, void* arg2) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb1b88, 0x8f1, (void*)0xbb1588);
    if (*(int*)((char*)arg2 + 0x48) != 1)
        fn_407ee8((void*)0xbb0e2f, (void*)0xbb1b88, 0x8f7, (void*)0xbb1588);
    fn_80e280(self, *(void**)((char*)*(void**)((char*)arg2 + 0x40)));
}
} }

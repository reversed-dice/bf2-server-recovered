// FUNCTION: BF2 0x80a9b0
namespace dice { namespace hfe {
extern void fn_806bb0(void* a, void* b, void* c, void* d);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void ciQuitHandler_0x80a9b0(void* self, void* arg2) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb1b88, 0x813, (void*)0xbb153b);
    if (*(int*)((char*)arg2 + 0x48) != 1)
        fn_407ee8((void*)0xbb0e2f, (void*)0xbb1b88, 0x819, (void*)0xbb153b);
    fn_806bb0(self, *(void**)((char*)arg2 + 0x10), (void*)0x80a800,
              *(void**)((char*)*(void**)((char*)arg2 + 0x40)));
}
} }

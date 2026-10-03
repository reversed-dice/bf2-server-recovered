// FUNCTION: BF2 0x8062f0
namespace dice { namespace hfe {
extern unsigned long fn_407878(char* a);
extern void* fn_8052f0(void* a, char* b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void ciJoinCallbackCalled_0x8062f0(void* self, char* arg2) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb0930, 0x278, (void*)0xbb0680);
    if (!arg2)
        fn_407ee8((void*)0xbb0f69, (void*)0xbb0930, 0x27a, (void*)0xbb0680);
    if (!*arg2)
        fn_407ee8((void*)0xbb0f86, (void*)0xbb0930, 0x27a, (void*)0xbb0680);
    if (fn_407878(arg2) > 0x100)
        fn_407ee8((void*)0xbb0a55, (void*)0xbb0930, 0x27a, (void*)0xbb0680);
    void* p = fn_8052f0(self, arg2);
    if (p)
        *(int*)((char*)p + 0x1a0) = 1;
}
} }

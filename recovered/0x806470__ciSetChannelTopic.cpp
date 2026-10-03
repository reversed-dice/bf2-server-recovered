// FUNCTION: BF2 0x806470
namespace dice { namespace hfe {
extern unsigned long fn_407878(char* a);
extern void* fn_8052f0(void* a, char* b);
extern void fn_407648(void* a, void* b, int c);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void ciSetChannelTopic_0x806470(void* self, char* arg2, char* arg3) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb0930, 0x29a, (void*)0xbb06c0);
    if (!arg2)
        fn_407ee8((void*)0xbb0f69, (void*)0xbb0930, 0x29c, (void*)0xbb06c0);
    if (!*arg2)
        fn_407ee8((void*)0xbb0f86, (void*)0xbb0930, 0x29c, (void*)0xbb06c0);
    if (fn_407878(arg2) > 0x100)
        fn_407ee8((void*)0xbb0a55, (void*)0xbb0930, 0x29c, (void*)0xbb06c0);
    void* p = fn_8052f0(self, arg2);
    if (p) {
        fn_407648((char*)p + 0x1a4, arg3, 0x80);
        *(char*)((char*)p + 0x223) = 0;
    }
}
} }

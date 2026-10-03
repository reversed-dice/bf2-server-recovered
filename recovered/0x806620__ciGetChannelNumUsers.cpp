// FUNCTION: BF2 0x806620
namespace dice { namespace hfe {
extern unsigned long func_0x00407878(char*);  // strlen
extern void* func_0x008052f0(void*, char*);  // ciGetChannel
extern unsigned int func_0x0083b820(void*);  // TableCount
extern void func_0x00407af8(void*, void*, unsigned int, void*) __attribute__((noreturn));  // __assert_fail
unsigned int ciGetChannelNumUsers_0x806620(void* chat, char* channel) {
    if (chat == 0) {
        func_0x00407af8((void*)0xbb03a4, (void*)0xbb0930, 0x2bc, (void*)0xbb0700);
    }
    if (channel == 0) {
        func_0x00407af8((void*)0xbb03b2, (void*)0xbb0930, 0x2be, (void*)0xbb0700);
    }
    if (*channel == 0) {
        func_0x00407af8((void*)0xbb03c0, (void*)0xbb0930, 0x2be, (void*)0xbb0700);
    }
    if (func_0x00407878(channel) < 0x101) {
        void* c = func_0x008052f0(chat, channel);
        if (c != 0) {
            return func_0x0083b820(*(void**)((char*)c + 0x168));
        }
        return 0xffffffff;
    }
    func_0x00407af8((void*)0xbb03d6, (void*)0xbb0930, 0x2be, (void*)0xbb0700);
}
} }
// REVERSED_FUNCTION: ciGetChannelNumUsers (0x806620)

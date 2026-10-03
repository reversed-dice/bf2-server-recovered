// FUNCTION: BF2 0x8063b0
namespace dice { namespace hfe {
extern unsigned long func_0x00407878(char*);  // strlen
extern void* func_0x008052f0(void*, char*);  // ciGetChannel
extern void func_0x00407af8(void*, void*, unsigned int, void*) __attribute__((noreturn));  // __assert_fail
unsigned int ciWasJoinCallbackCalled_0x8063b0(void* chat, char* channel) {
    if (chat == 0) {
        func_0x00407af8((void*)0x4375d5, (void*)0x43763c, 0x28a, (void*)0x436e60);
    }
    if (channel == 0) {
        func_0x00407af8((void*)0x4375dd, (void*)0x43763c, 0x28c, (void*)0x436e60);
    }
    if (*channel == 0) {
        func_0x00407af8((void*)0x4375ea, (void*)0x43763c, 0x28c, (void*)0x436e60);
    }
    if (func_0x00407878(channel) < 0x101) {
        void* c = func_0x008052f0(chat, channel);
        unsigned int r = 0;
        if (c != 0) {
            r = *(unsigned int*)((char*)c + 0x1a0);
        }
        return r;
    }
    func_0x00407af8((void*)0x437600, (void*)0x43763c, 0x28c, (void*)0x436e60);
}
} }
// REVERSED_FUNCTION: ciWasJoinCallbackCalled (0x8063b0)

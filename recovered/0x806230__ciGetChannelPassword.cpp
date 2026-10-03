// FUNCTION: BF2 0x806230
namespace dice { namespace hfe {
extern unsigned long func_0x00407878(char*);  // strlen
extern void* func_0x008052f0(void*, char*);  // ciGetChannel
extern void func_0x00407af8(void*, void*, unsigned int, void*) __attribute__((noreturn));  // __assert_fail
void* ciGetChannelPassword_0x806230(void* chat, char* channel) {
    if (chat == 0) {
        func_0x00407af8((void*)0x4375d5, (void*)0x43763c, 0x266, (void*)0x436e44);
    }
    if (channel == 0) {
        func_0x00407af8((void*)0x4375dd, (void*)0x43763c, 0x268, (void*)0x436e44);
    }
    if (*channel == 0) {
        func_0x00407af8((void*)0x4375ea, (void*)0x43763c, 0x268, (void*)0x436e44);
    }
    if (func_0x00407878(channel) < 0x101) {
        void* c = func_0x008052f0(chat, channel);
        void* r = 0;
        if (c != 0) {
            r = *(void**)((char*)c + 0x198);
        }
        return r;
    }
    func_0x00407af8((void*)0x437600, (void*)0x43763c, 0x268, (void*)0x436e44);
}
} }
// REVERSED_FUNCTION: ciGetChannelPassword (0x806230)

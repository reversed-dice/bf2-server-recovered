// FUNCTION: BF2 0x805ec0
namespace dice { namespace hfe {
extern unsigned long func_0x00407878(char*);  // strlen
extern void* func_0x008052f0(void*, char*);  // ciGetChannel
extern void func_0x00407af8(void*, void*, unsigned int, void*) __attribute__((noreturn));  // __assert_fail
int ciGetChannelMode_0x805ec0(void* chat, char* channel, void* mode) {
    if (chat == 0) {
        func_0x00407af8((void*)0x4375d5, (void*)0x43763c, 0x21a, (void*)0x436de0);
    }
    if (channel == 0) {
        func_0x00407af8((void*)0x4375dd, (void*)0x43763c, 0x21c, (void*)0x436de0);
    }
    if (*channel == 0) {
        func_0x00407af8((void*)0x4375ea, (void*)0x43763c, 0x21c, (void*)0x436de0);
    }
    if (func_0x00407878(channel) < 0x101) {
        void* c = func_0x008052f0(chat, channel);
        if (c != 0) {
            if (*(int*)((char*)c + 400) != 0) {
                char* s = (char*)c + 0x170;
                *(void**)mode = *(void**)s;
                *(void**)((char*)mode + 8) = *(void**)(s + 8);
                *(void**)((char*)mode + 0x10) = *(void**)(s + 0x10);
                *(void**)((char*)mode + 0x18) = *(void**)(s + 0x18);
                return 1;
            }
        }
        return 0;
    }
    func_0x00407af8((void*)0x437600, (void*)0x43763c, 0x21c, (void*)0x436de0);
}
} }
// REVERSED_FUNCTION: ciGetChannelMode (0x805ec0)

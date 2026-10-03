// FUNCTION: BF2 0x805e80
namespace dice { namespace hfe {
extern void* fn_8052f0(void* a, char* b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
bool ciInChannel_0x805e80(void* self, char* arg2) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb0930, 0x20f, (void*)0xbb05f3);
    return fn_8052f0(self, arg2) != 0;
}
} }

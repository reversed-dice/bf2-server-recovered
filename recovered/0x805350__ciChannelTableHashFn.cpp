// FUNCTION: BF2 0x805350
namespace dice { namespace hfe {
extern void fn_805240(void* a, int b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void ciChannelTableHashFn_0x805350(void* self, int arg2) {
    if (!self)
        fn_407ee8((void*)0xbb09b4, (void*)0xbb0930, 0xb4, (void*)0xbb0460);
    if (arg2 <= 0)
        fn_407ee8((void*)0xbb09c8, (void*)0xbb0930, 0xb5, (void*)0xbb0460);
    fn_805240(self, arg2);
}
} }

// FUNCTION: BF2 0x81e310
namespace dice { namespace hfe {
extern void fn_83b7a0(void* a);
extern void fn_83ef10(void* a);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void FreeBucketSet_0x81e310(void* self) {
    if (!self)
        fn_407ee8((void*)0xbab2bc, (void*)0xbb42c0, 0x5b, (void*)0xbb4282);
    if (!*(void**)self)
        fn_407ee8((void*)0xbb42e2, (void*)0xbb42c0, 0x5c, (void*)0xbb4282);
    fn_83b7a0(*(void**)self);
    fn_83ef10(self);
}
} }

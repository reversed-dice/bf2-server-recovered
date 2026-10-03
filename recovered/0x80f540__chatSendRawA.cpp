// FUNCTION: BF2 0x80f540
namespace dice { namespace hfe {
extern void fn_8139d0(void* a);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void chatSendRawA_0x80f540(void* self) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb2208, 0x421, (void*)0xbb1d30);
    if (!*(void**)self)
        return;
    fn_8139d0((char*)self + 0x30);
}
} }

// FUNCTION: BF2 0x80f970
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
int chatGetProfileID_0x80f9a0(void* self) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb2208, 0x4f3, (void*)0xbb1d83);
    return *(int*)((char*)self + 0x920);
}
} }

// FUNCTION: BF2 0x80f9a0
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
int chatGetUserID_0x80f970(void* self) {
    if (!self)
        fn_407ee8((void*)0xbb03a4, (void*)0xbb2208, 0x4fa, (void*)0xbb1da0);
    return *(int*)((char*)self + 0x924);
}
} }

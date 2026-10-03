// FUNCTION: BF2 0x8079b0
namespace dice { namespace hfe {
extern void fn_83b960(void* a, void* b);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void ciClearAllUsersUsersMap_0x8079b0(void* self, void* arg2) {
    if (!self)
        fn_407ee8((void*)0xbb09b4, (void*)0xbb0930, 0x4b6, (void*)0xbb08e0);
    if (!arg2)
        fn_407ee8((void*)0xbb0a84, (void*)0xbb0930, 0x4b7, (void*)0xbb08e0);
    fn_83b960(*(void**)((char*)*(void**)((char*)arg2 + 8) + 0x168), self);
}
} }

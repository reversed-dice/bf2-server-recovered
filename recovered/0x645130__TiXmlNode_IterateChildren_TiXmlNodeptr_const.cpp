// FUNCTION: BF2 0x645130
namespace dice { namespace hfe {
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void* IterateChildren_0x645130(void* self, void* arg2) {
    if (!arg2)
        return *(void**)((char*)self + 0x28);
    if (*(void**)((char*)arg2 + 0x18) != self)
        fn_407ee8((void*)0xb887ca, (void*)0xb88705, 0x158, (void*)0xb88600);
    return *(void**)((char*)arg2 + 0x50);
}
} }

// FUNCTION: BF2 0x645fc0
namespace dice { namespace hfe {
extern void* fn_645d70(void* a);
extern void* fn_645c40(void* a);
extern void fn_407ee8(void* a, void* b, int c, void* d) __attribute__((noreturn));
void* IterateChildren_0x645fc0(void* self, void* arg2, void* arg3) {
    if (!arg3)
        return fn_645d70(self);
    if (*(void**)((char*)arg3 + 0x18) != self)
        fn_407ee8((void*)0xb887ca, (void*)0xb88705, 0x165, (void*)0xb886c0);
    return fn_645c40(arg3);
}
} }

// FUNCTION: BF2 0x4539b0
namespace dice { namespace hfe {
extern void* fn_4536f0(void* a, int b);
extern void* fn_7c62b0(void* a, unsigned short b);
extern void fn_43bb40(void* a, void* b, int c);
void confirmGhost_0x4539b0(void* self, int arg2, unsigned short arg3) {
    void* p = fn_4536f0(self, arg2);
    if (!p)
        return;
    void* q = fn_7c62b0(*(void**)0x10aebe8, arg3);
    if (!q)
        return;
    fn_43bb40(p, q, 1);
}
} }

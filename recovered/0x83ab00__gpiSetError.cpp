// FUNCTION: BF2 0x83ab00
namespace dice {
extern void fn_83a680(void* a, void* b, int c);
void gpiSetError_0x83ab00(void* self, int err, void* msg) {
    void* m = *(void**)self;
    fn_83a680(m, msg, 0x100);
    *(int*)((char*)m + 0x494) = err;
}
}

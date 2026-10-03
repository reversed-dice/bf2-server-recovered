// FUNCTION: BF2 0x832c20
namespace dice { namespace hfe {
extern void fn_838ec0(void* a);
extern void fn_408428(int a, int b);
extern int fn_408298(int a);
extern void fn_83ef10(void* a);
extern void fn_83ae70(void* a);
void gpiDestroyPeer_0x832c20(void* self, void* arg2) {
    fn_838ec0(self);
    fn_408428(*(int*)((char*)arg2 + 8), 2);
    fn_408298(*(int*)((char*)arg2 + 8));
    fn_83ef10(*(void**)((char*)arg2 + 0x20));
    *(void**)((char*)arg2 + 0x20) = 0;
    fn_83ef10(*(void**)((char*)arg2 + 0x38));
    *(void**)((char*)arg2 + 0x38) = 0;
    if (__builtin_expect(*(void**)((char*)arg2 + 0x50) != 0, 1)) {
        fn_83ae70(*(void**)((char*)arg2 + 0x50));
        *(void**)((char*)arg2 + 0x50) = 0;
    }
    fn_83ef10(arg2);
}
} }

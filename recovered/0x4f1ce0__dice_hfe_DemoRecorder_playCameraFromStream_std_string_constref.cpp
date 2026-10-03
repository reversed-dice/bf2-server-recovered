// FUNCTION: BF2 0x4f1ce0
namespace dice { namespace hfe {
extern void* fn_4f1ba0(void* s, int a, int b);
extern void fn_4f4ab0(void* a, int b);
extern void fn_4f4ac0(void* a, void* b);
int playCameraFromStream_0x4f1ce0(void* self, void* s) {
    int r = 0;
    void* v = fn_4f1ba0(s, 0, 0);
    *(void**)((char*)self + 0x70) = v;
    if (v) {
        *(char*)((char*)self + 0x7a) = 0;
        *(char*)((char*)self + 0x7b) = 1;
        fn_4f4ab0(*(void**)((char*)self + 0xa0), 1);
        fn_4f4ac0(*(void**)((char*)self + 0xa0), *(void**)((char*)self + 0x70));
        r = 1;
    }
    return r;
}
} }

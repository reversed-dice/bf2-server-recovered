// FUNCTION: BF2 0x82c760
namespace dice {
extern int fn_83ad30(void* a, int b);
extern int fn_83af50(void* a);
int gpGetNumTransfers_0x82c760(void* a, int* out) {
    if (a && *(void**)a) {
        if (out) {
            *out = fn_83af50(*(void**)((char*)*(void**)a + 0x508));
            return 0;
        }
        fn_83ad30(a, 0xbb5065);
        return 2;
    }
    return 2;
}
}

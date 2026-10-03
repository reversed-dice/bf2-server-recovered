// FUNCTION: BF2 0x83d690
namespace dice {
extern int fn_83d590(void* a, int a0, void* b, int b0, void* c, void* c0);
extern void fn_83d380(void* c);
int gsLargeIntSub_0x83d690(void* a, void* b, void* c) {
    int r = fn_83d590((char*)a + 4, *(int*)a, (char*)b + 4, *(int*)b, (char*)c + 4, c);
    if (r)
        fn_83d380(c);
    return r;
}
}

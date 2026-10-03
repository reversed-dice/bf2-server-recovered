// FUNCTION: BF2 0x82bdb0
namespace dice {
extern void* fn_840a50(void* a);
extern int fn_82bca0(void* a, int b, void* c);
extern void fn_83ef10(void* a);
int gpSetTransferDirectoryW_0x82bdb0(void* a, int b, void* c) {
    void* r = fn_840a50(c);
    int v = fn_82bca0(a, b, r);
    fn_83ef10(r);
    return v;
}
}

// FUNCTION: BF2 0x8258b0
namespace dice { namespace hfe {
extern int fn_4071d8(void* a, void* b, ...);
int KeyValCompareKey_0x8258b0(void* a, void* b) {
    void* ka = *(void**)a;
    if (!ka)
        return 1;
    void* kb = *(void**)b;
    if (!kb)
        return 1;
    return fn_4071d8(ka, kb);
}
} }

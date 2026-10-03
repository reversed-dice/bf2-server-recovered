// FUNCTION: BF2 0x4e55e0
namespace dice { namespace hfe {
extern bool fn_4f1d70(void* q);
int cb_4e55e0(void* self) {
    void* q = *(void**)((char*)self + 0x10);
    if (q != 0 && fn_4f1d70(q))
        return 0;
    return 1;
}
} }
// REVERSED_FUNCTION: dice_hfe_Demo_allowRendering_const (0x4e55e0)

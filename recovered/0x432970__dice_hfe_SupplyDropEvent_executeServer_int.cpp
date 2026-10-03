// FUNCTION: BF2 0x432970
namespace dice { namespace hfe {
typedef int (*vfn_e0)(void*, unsigned char);
extern void fn_55cf90(void* g2, unsigned char c, void* p);
int cb_432970(void* self, unsigned char arg2) {
    void* g = *(void**)0x010b8c00;
    if (g != 0 && (*(vfn_e0*)((char*)*(void**)g + 0xe0))(g, *(unsigned char*)((char*)self + 0x18)) == arg2)
        fn_55cf90(*(void**)0x0108eed0, *(unsigned char*)((char*)self + 0x18), (char*)self + 0x10);
    return 1;
}
} }
// REVERSED_FUNCTION: dice_hfe_SupplyDropEvent_executeServer_int (0x432970)

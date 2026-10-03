// FUNCTION: BF2 0x7919f0
namespace dice { namespace hfe { namespace ai {
typedef int (*vfn_80)(void*);
typedef void (*vfn_a0)(void*, int);
void cb_7919f0(void* self) {
    void* g = *(void**)0x010ade00;
    int n = (*(vfn_80*)((char*)*(void**)g + 0x80))(g) + 1;
    for (int i = 0; i < n; i++)
        (*(vfn_a0*)((char*)*(void**)self + 0xa0))(self, i);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_deleteAllInformation (0x7919f0)

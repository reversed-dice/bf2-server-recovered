// FUNCTION: BF2 0x656b50
namespace dice { namespace hfe {
typedef int (*vfn_30)(void*);
extern void* fn_656b40(void* self, int x);
extern void* fn_64be00(void* p);
void* cb_656b50(void* self) {
    if (!(*(vfn_30*)((char*)*(void**)self + 0x30))(self))
        return 0;
    return fn_64be00(fn_656b40(self, 0));
}
} }
// REVERSED_FUNCTION: dice_hfe_PlayerStats_getNumKeys (0x656b50)

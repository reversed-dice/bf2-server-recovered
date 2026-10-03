// FUNCTION: BF2 0x655cc0
namespace dice { namespace hfe {
typedef int (*vfn_30)(void*);
extern void* fn_655c70(void* self, int x);
extern void* fn_64be00(void* p);
void* cb_655cc0(void* self) {
    if (!(*(vfn_30*)((char*)*(void**)self + 0x30))(self))
        return 0;
    return fn_64be00(fn_655c70(self, 0));
}
} }
// REVERSED_FUNCTION: dice_hfe_PlayerRankInfo_getNumKeys (0x655cc0)

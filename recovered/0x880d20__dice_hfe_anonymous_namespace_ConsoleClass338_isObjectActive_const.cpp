// FUNCTION: BF2 0x880d20
namespace dice { namespace hfe {

typedef void* (*vfn1)(void*,int);
bool fn_0x880d20() {
    void* g = *(void**)0x10c5420;
    void* r = 0;
    if (g) {
        void** vt = *(void***)g;
        int cid = *(int*)0x00c76028;
        r = ((vfn1)vt[0x18/8])(g, cid);
    }
    return r != 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass338_isObjectActive_const (0x880d20)

// FUNCTION: BF2 0x881160
namespace dice { namespace hfe {

typedef void* (*vfn0)(void*);
bool fn_0x880f70() {
    void* g = *(void**)0x112ee38;
    void* r = 0;
    if (g) {
        void** vt = *(void***)g;
        r = ((vfn0)vt[0x100/8])(g);
    }
    return r != 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass261_isObjectActive_const (0x880f70)

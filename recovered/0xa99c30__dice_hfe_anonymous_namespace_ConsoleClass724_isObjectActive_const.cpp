// FUNCTION: BF2 0xa99c30
namespace dice { namespace hfe {
typedef void* (*vfn_a99c30)(void*, int);
bool cb_a99c30() {
    void* game = *(void**)0x010c5420;
    void* puVar2 = 0;
    if (game == 0 || (*(vfn_a99c30*)((char*)*(void**)game + 0x18))(game, *(int*)0x00c76020) == 0) {
        puVar2 = *(void**)0x0108b660;
    }
    return puVar2 != 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass724_isObjectActive_const (0xa99c30)

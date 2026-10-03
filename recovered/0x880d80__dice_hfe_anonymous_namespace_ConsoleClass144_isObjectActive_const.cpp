// FUNCTION: BF2 0x880d80
namespace dice { namespace hfe { namespace world {
bool isObjectActive_880d80() {
    void* p = *(void**)0x010b8c08;
    if (p != 0) {
        char c = ((char(*)(void*))(*(void***)p)[0x278/8])(p);
        if (c != 0) goto done;
    }
    p = 0;
done:
    return p != 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass144_isObjectActive_const (0x880d80)

// FUNCTION: BF2 0x4ec3b0
namespace dice { namespace hfe {
extern "C" char anonymous_namespace_buildNr[1];
extern "C" int sprintf(char*, const char*, ...);

extern "C" char* dice_hfe_BuildNrUtil_getBuildNrString() {
    if (!anonymous_namespace_buildNr[0]) {
        sprintf(anonymous_namespace_buildNr, "%i.%i.%i-%i.%i", 1, 5, 0xc51, 0x322, 0);
    }
    return anonymous_namespace_buildNr;
}
} }

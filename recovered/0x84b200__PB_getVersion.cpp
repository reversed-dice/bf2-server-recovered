// FUNCTION: BF2 0x84b200
#include <string>
#include <cstring>
extern "C" {
extern char PB_getVersion_versionBuffer;
extern char DAT_010b346f;
void* dice_hfe_BuildNrUtil_getBuildNrString_4ec3b0();
}

extern "C" char* PB_getVersion(void) {
    if (PB_getVersion_versionBuffer == 0) {
        void* s = dice_hfe_BuildNrUtil_getBuildNrString_4ec3b0();
        std::string tmp((const char*)s);
        strncpy(&PB_getVersion_versionBuffer, tmp.c_str(), 0x4f);
        DAT_010b346f = 0;
    }
    return &PB_getVersion_versionBuffer;
}
// REVERSED_FUNCTION: PB_getVersion (0x84b200)

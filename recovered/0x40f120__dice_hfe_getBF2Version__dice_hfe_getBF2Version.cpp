// FUNCTION: BF2 0x40f120
namespace dice { namespace hfe {

class BuildNrUtil {
public:
    static const char* getBuildNrString();
};

char* formatString(char* dest, const char* format, ...);

char* getBF2Version(char* buffer) {
    const char* buildNr = BuildNrUtil::getBuildNrString();
    formatString(buffer, "BF2 build %s", buildNr);
    return buffer;
}

} }
// REVERSED_FUNCTION: dice_hfe_getBF2Version (0x40f120)
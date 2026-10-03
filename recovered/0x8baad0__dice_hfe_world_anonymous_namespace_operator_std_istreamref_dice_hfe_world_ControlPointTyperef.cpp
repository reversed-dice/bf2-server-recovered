// FUNCTION: BF2 0x8baad0
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_8baad0(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 2;
    if (s.compare("CPSpawnGroup") == 0) {
        *out = 2;
    } else if (s.compare("CPObjectSpawner") == 0) {
        *out = 4;
    } else if (s.compare("CPAreaValue") == 0) {
        *out = 0x10;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_operator_std_istreamref_dice_hfe_world_ControlPointTyperef (0x8baad0)

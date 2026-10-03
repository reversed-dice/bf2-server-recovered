// FUNCTION: BF2 0x8bc430
#include <istream>
#include <string>

extern "C" std::istream* op_8bc430(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    if (s.compare("ATNone") == 0 || s.compare("None") == 0) { *out = 0; }
    else if (s.compare("ATAmmoBar") == 0 || s.compare("AmmoBar") == 0) { *out = 1; }
    else if (s.compare("ATIcon") == 0 || s.compare("Icon") == 0) { *out = 2; }
    else if (s.compare("ATIconAndStrengthBar") == 0 || s.compare("IconAndStrengthBar") == 0) { *out = 3; }
    else if (s.compare("ATIconAndReloadBar") == 0 || s.compare("IconAndReloadBar") == 0) { *out = 4; }
    else if (s.compare("ATIconNoText") == 0 || s.compare("IconNoText") == 0) { *out = 5; }
    else if (s.compare("ATIconAndHeatBar") == 0 || s.compare("IconAndHeatBar") == 0) { *out = 6; }
    else { *out = 7; }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_world_operator_std_istreamref_dice_hfe_world_AmmoTyperef (0x8bc430)

// FUNCTION: BF2 0x8bc670
#include <istream>
#include <string>

extern "C" std::istream* op_8bc670(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    if (s.compare("ABNone") == 0 || s.compare("None") == 0) { *out = 0; }
    else if (s.compare("ABAmmoBarOnly") == 0 || s.compare("AmmoBarOnly") == 0) { *out = 1; }
    else if (s.compare("ABAmmoBarHeatBar") == 0 || s.compare("AmmoBarHeatBar") == 0) { *out = 2; }
    else if (s.compare("ABAmmoBarReloadBar") == 0 || s.compare("AmmoBarReloadBar") == 0) { *out = 3; }
    else if (s.compare("ABHeatBarOnly") == 0 || s.compare("HeatBarOnly") == 0) { *out = 4; }
    else if (s.compare("ABReloadBarOnly") == 0 || s.compare("ReloadBarOnly") == 0) { *out = 5; }
    else if (s.compare("ABIconOnly") == 0 || s.compare("IconOnly") == 0) { *out = 6; }
    else { *out = 7; }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_world_operator_std_istreamref_dice_hfe_world_AmmoBarref (0x8bc670)

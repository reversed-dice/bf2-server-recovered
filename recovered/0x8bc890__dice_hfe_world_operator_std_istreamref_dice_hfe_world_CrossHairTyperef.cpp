// FUNCTION: BF2 0x8bc890
#include <istream>
#include <string>

extern "C" std::istream* op_8bc890(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    if (s.compare("CHTNone") == 0 || s.compare("None") == 0) { *out = 0; }
    else if (s.compare("CHTIcon") == 0 || s.compare("Icon") == 0) { *out = 1; }
    else if (s.compare("CHTCrossHair") == 0 || s.compare("CrossHair") == 0) { *out = 2; }
    else { *out = 3; }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_world_operator_std_istreamref_dice_hfe_world_CrossHairTyperef (0x8bc890)

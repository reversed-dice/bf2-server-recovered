// FUNCTION: BF2 0x79b630
// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// SoldierPose enum.

#include <istream>
#include <string>

extern "C" std::istream* op_79b630(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    if (s.compare("SPNotAvailable") == 0 || s.compare("NotAvailable") == 0) {
        *out = 0;
    } else if (s.compare("SPStanding") == 0 || s.compare("Standing") == 0) {
        *out = 1;
    } else if (s.compare("SPCrouching") == 0 || s.compare("Crouching") == 0) {
        *out = 2;
    } else if (s.compare("SPLying") == 0 || s.compare("Lying") == 0) {
        *out = 3;
    } else if (s.compare("SPSwimming") == 0 || s.compare("Swimming") == 0) {
        *out = 4;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_ai_operator_std_istreamref_dice_hfe_ai_SoldierPoseref (0x79b630)

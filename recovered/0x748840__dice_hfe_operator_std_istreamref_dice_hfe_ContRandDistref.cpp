// FUNCTION: BF2 0x748840
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_748840(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 0;
    if (s.compare("CRD_NONE") == 0) {
        *out = 0;
    } else if (s.compare("CRD_UNIFORM") == 0) {
        *out = 1;
    } else if (s.compare("CRD_EXPONENTIAL") == 0) {
        *out = 2;
    } else if (s.compare("CRD_NORMAL") == 0) {
        *out = 3;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_operator_std_istreamref_dice_hfe_ContRandDistref (0x748840)

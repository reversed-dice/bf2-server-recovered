// FUNCTION: BF2 0x8ad690
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_8ad690(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 6;
    if (s.compare("CTConnecting") == 0) {
        *out = 0;
    } else if (s.compare("CTModem28Kbps") == 0) {
        *out = 1;
    } else if (s.compare("CTModem56Kbps") == 0) {
        *out = 2;
    } else if (s.compare("CTCable128Kbps") == 0) {
        *out = 3;
    } else if (s.compare("CTCable256Kbps") == 0) {
        *out = 4;
    } else if (s.compare("CTLanT1") == 0) {
        *out = 5;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_operator_std_istreamref_dice_hfe_ConnectionTyperef (0x8ad690)

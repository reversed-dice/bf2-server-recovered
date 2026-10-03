// FUNCTION: BF2 0x7eaf20
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_7eaf20(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 0;
    if (s.compare("IDPOV_0") == 0) {
        *out = 0;
    } else if (s.compare("IDPOV_1") == 0) {
        *out = 1;
    } else if (s.compare("IDPOV_2") == 0) {
        *out = 2;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_istreamref_dice_hfe_io_InputDevicePOVsref (0x7eaf20)

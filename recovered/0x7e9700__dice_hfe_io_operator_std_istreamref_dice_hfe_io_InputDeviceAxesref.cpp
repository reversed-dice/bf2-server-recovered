// FUNCTION: BF2 0x7e9700
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_7e9700(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 0;
    if (s.compare("IDAxis_0") == 0) {
        *out = 0;
    } else if (s.compare("IDAxis_1") == 0) {
        *out = 1;
    } else if (s.compare("IDAxis_2") == 0) {
        *out = 2;
    } else if (s.compare("IDAxis_3") == 0) {
        *out = 3;
    } else if (s.compare("IDAxis_4") == 0) {
        *out = 4;
    } else if (s.compare("IDAxis_5") == 0) {
        *out = 5;
    } else if (s.compare("IDAxis_6") == 0) {
        *out = 6;
    } else if (s.compare("IDAxis_7") == 0) {
        *out = 7;
    } else if (s.compare("IDAxis_8") == 0) {
        *out = 8;
    } else if (s.compare("IDAxis_9") == 0) {
        *out = 9;
    } else if (s.compare("IDAxis_10") == 0) {
        *out = 10;
    } else if (s.compare("IDAxis_11") == 0) {
        *out = 0xb;
    } else if (s.compare("IDAxis_12") == 0) {
        *out = 0xc;
    } else if (s.compare("IDAxis_13") == 0) {
        *out = 0xd;
    } else if (s.compare("IDAxis_14") == 0) {
        *out = 0xe;
    } else if (s.compare("IDAxis_None") == 0) {
        *out = 0xf;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_istreamref_dice_hfe_io_InputDeviceAxesref (0x7e9700)

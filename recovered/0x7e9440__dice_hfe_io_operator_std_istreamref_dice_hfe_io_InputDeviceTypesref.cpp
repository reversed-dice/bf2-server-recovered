// FUNCTION: BF2 0x7e9440
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_7e9440(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 0;
    if (s.compare("IDTUndefined") == 0) {
        *out = 0;
    } else if (s.compare("IDTMouse") == 0) {
        *out = 1;
    } else if (s.compare("IDTGameController") == 0) {
        *out = 2;
    } else if (s.compare("IDTKeyboard") == 0) {
        *out = 3;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_istreamref_dice_hfe_io_InputDeviceTypesref (0x7e9440)

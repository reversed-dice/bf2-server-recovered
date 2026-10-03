// FUNCTION: BF2 0x7e9520
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum, leaving the enum at 0 for anything unrecognised.

extern "C" std::istream* op_7e9520(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 0;
    if (s.compare("IDFNone") == 0) {
        *out = 0;
    } else if (s.compare("IDFMouse") == 0) {
        *out = 1;
    } else if (s.compare("IDFKeyboard") == 0) {
        *out = 2;
    } else if (s.compare("IDFGameController_0") == 0) {
        *out = 4;
    } else if (s.compare("IDFGameController_1") == 0) {
        *out = 8;
    } else if (s.compare("IDFGameController_2") == 0) {
        *out = 0x10;
    } else if (s.compare("IDFGameController_3") == 0) {
        *out = 0x20;
    } else if (s.compare("IDFGameController_4") == 0) {
        *out = 0x40;
    } else if (s.compare("IDFGameController_5") == 0) {
        *out = 0x80;
    } else if (s.compare("IDFGameController_6") == 0) {
        *out = 0x100;
    } else if (s.compare("IDFGameController_7") == 0) {
        *out = 0x200;
    } else if (s.compare("IDFFalcon") == 0) {
        *out = 0x400;
    } else if (s.compare("IDFAll") == 0) {
        *out = 0xffffffff;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_istreamref_dice_hfe_io_InputDeviceFlagsref (0x7e9520)

// FUNCTION: BF2 0x7e9940
#include <istream>
#include <string>

// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// enum. Literals Ghidra did not recover are referenced by their .rodata
// symbol rather than guessed.

extern char DAT_bad6f0[];
extern char DAT_bad72c[];

extern "C" std::istream* op_7e9940(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    *out = 0;
    if (s.compare("IDButton_0") == 0) {
        *out = 1;
    } else if (s.compare("IDButton_1") == 0) {
        *out = 2;
    } else if (s.compare("IDButton_2") == 0) {
        *out = 4;
    } else if (s.compare("IDButton_3") == 0) {
        *out = 8;
    } else if (s.compare("IDButton_4") == 0) {
        *out = 16;
    } else if (s.compare("IDButton_5") == 0) {
        *out = 32;
    } else if (s.compare("IDButton_6") == 0) {
        *out = 64;
    } else if (s.compare("IDButton_7") == 0) {
        *out = 128;
    } else if (s.compare("IDButton_8") == 0) {
        *out = 256;
    } else if (s.compare("IDButton_9") == 0) {
        *out = 512;
    } else if (s.compare("IDButton_10") == 0) {
        *out = 1024;
    } else if (s.compare("IDButton_11") == 0) {
        *out = 2048;
    } else if (s.compare("IDButton_12") == 0) {
        *out = 4096;
    } else if (s.compare("IDButton_13") == 0) {
        *out = 8192;
    } else if (s.compare("IDButton_14") == 0) {
        *out = 16384;
    } else if (s.compare("IDButton_15") == 0) {
        *out = 32768;
    } else if (s.compare("IDButton_16") == 0) {
        *out = 65536;
    } else if (s.compare("IDButton_17") == 0) {
        *out = 131072;
    } else if (s.compare("IDButton_18") == 0) {
        *out = 262144;
    } else if (s.compare("IDButton_19") == 0) {
        *out = 524288;
    } else if (s.compare("IDButton_20") == 0) {
        *out = 1048576;
    } else if (s.compare("IDButton_21") == 0) {
        *out = 2097152;
    } else if (s.compare("IDButton_22") == 0) {
        *out = 4194304;
    } else if (s.compare("IDButton_23") == 0) {
        *out = 8388608;
    } else if (s.compare(DAT_bad6f0) == 0) {
        *out = 16777216;
    } else if (s.compare("IDButton_25") == 0) {
        *out = 33554432;
    } else if (s.compare("IDButton_26") == 0) {
        *out = 67108864;
    } else if (s.compare("IDButton_27") == 0) {
        *out = 134217728;
    } else if (s.compare("IDButton_28") == 0) {
        *out = 268435456;
    } else if (s.compare(DAT_bad72c) == 0) {
        *out = 536870912;
    } else if (s.compare("IDButton_30") == 0) {
        *out = 1073741824;
    } else if (s.compare("IDButton_31") == 0) {
        *out = 2147483648;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_io_operator_std_istreamref_dice_hfe_io_InputDeviceButtonsref (0x7e9940)

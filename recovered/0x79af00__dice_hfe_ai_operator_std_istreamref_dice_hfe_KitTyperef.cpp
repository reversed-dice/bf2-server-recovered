// FUNCTION: BF2 0x79af00
// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// KitType enum, leaving the enum at 13 for anything unrecognised.

#include <istream>
#include <string>

extern "C" std::istream* op_79af00(std::istream* is, int* out)
{
    std::string s;
    *is >> s;
    if (s.compare("KTSpecops") == 0 || s.compare("Specops") == 0 || s.compare("0") == 0) {
        *out = 0;
    } else if (s.compare("KTSniper") == 0 || s.compare("Sniper") == 0 || s.compare("1") == 0) {
        *out = 1;
    } else if (s.compare("KTAssault") == 0 || s.compare("Assault") == 0 || s.compare("2") == 0) {
        *out = 2;
    } else if (s.compare("KTSupport") == 0 || s.compare("Support") == 0 || s.compare("3") == 0) {
        *out = 3;
    } else if (s.compare("KTEngineer") == 0 || s.compare("Engineer") == 0 || s.compare("4") == 0) {
        *out = 4;
    } else if (s.compare("KTMedic") == 0 || s.compare("Medic") == 0 || s.compare("5") == 0) {
        *out = 5;
    } else if (s.compare("KTAT") == 0 || s.compare("AT") == 0 || s.compare("6") == 0) {
        *out = 6;
    } else if (s.compare("KTExtended1") == 0 || s.compare("Extended1") == 0 || s.compare("7") == 0) {
        *out = 7;
    } else if (s.compare("KTExtended2") == 0 || s.compare("Extended2") == 0 || s.compare("8") == 0) {
        *out = 8;
    } else if (s.compare("KTExtended3") == 0 || s.compare("Extended3") == 0 || s.compare("9") == 0) {
        *out = 9;
    } else if (s.compare("KTExtended4") == 0 || s.compare("Extended4") == 0 || s.compare("10") == 0) {
        *out = 10;
    } else if (s.compare("KTExtended5") == 0 || s.compare("Extended5") == 0 || s.compare("11") == 0) {
        *out = 11;
    } else if (s.compare("KTExtended6") == 0 || s.compare("Extended6") == 0 || s.compare("12") == 0) {
        *out = 12;
    } else {
        *out = 13;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_ai_operator_std_istreamref_dice_hfe_KitTyperef (0x79af00)

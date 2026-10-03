// FUNCTION: BF2 0x8be0b0
// operator>>(std::istream&, enum&) -- reads one token and maps it onto the
// KitType enum, leaving the enum at 13 for anything unrecognised.
// dice::hfe::world variant (7 kit types).

#include <istream>
#include <string>

extern "C" std::istream* op_8be0b0(std::istream* is, int* out)
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
    } else {
        *out = 13;
    }
    return is;
}
// REVERSED_FUNCTION: dice_hfe_world_operator_std_istreamref_dice_hfe_world_KitTyperef (0x8be0b0)

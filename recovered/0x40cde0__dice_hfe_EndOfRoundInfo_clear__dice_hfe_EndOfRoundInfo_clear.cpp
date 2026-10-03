// FUNCTION: BF2 0x40cde0
#include <string>

namespace dice {
namespace hfe {

extern const std::string& getEmptyString();

class EndOfRoundInfo {
public:
    std::string field_00;
    int field_08;

    void clear();
};

void EndOfRoundInfo::clear() {
    field_00.assign(getEmptyString());
    field_08 = 0;
}

} // namespace hfe
} // namespace dice

// REVERSED_FUNCTION: dice_hfe_EndOfRoundInfo_clear::dice_hfe_EndOfRoundInfo_clear (0x40cde0)
// FUNCTION: BF2 0x450030
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    bool isNumeric(const std::string& s) const;
};

bool BanList::isNumeric(const std::string& s) const {
    return s.find('-', 0) == std::string::npos;
}

} }
// REVERSED_FUNCTION: dice_hfe_BanList_isNumeric_std_string_constref (0x450030)
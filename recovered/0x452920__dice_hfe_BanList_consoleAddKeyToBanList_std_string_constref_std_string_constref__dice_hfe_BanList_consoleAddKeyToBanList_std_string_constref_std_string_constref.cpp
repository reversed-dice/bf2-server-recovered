// FUNCTION: BF2 0x452920
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    void addKeyToBanList(std::string const& key, std::string const& val);
    void storeBanList();
    void consoleAddKeyToBanList(std::string const& key, std::string const& val);
};

void BanList::consoleAddKeyToBanList(std::string const& key, std::string const& val) {
    addKeyToBanList(key, val);
    storeBanList();
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_BanList_consoleAddKeyToBanList_std_string_constref_std_string_constref (0x452920)
// FUNCTION: BF2 0x4528c0
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    void consoleRemoveKeyFromBanList(const std::string& key);
    void removeKeyFromBanList(const std::string& key);
    void storeBanList();
};

void BanList::consoleRemoveKeyFromBanList(const std::string& key) {
    removeKeyFromBanList(key);
    storeBanList();
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_BanList_consoleRemoveKeyFromBanList_std_string_constref (0x4528e0)
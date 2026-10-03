// FUNCTION: BF2 0x452900
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    void removeAddressFromBanList(const std::string& address);
    void storeBanList();
    void consoleRemoveAddressFromBanList(const std::string& address);
};

void BanList::consoleRemoveAddressFromBanList(const std::string& address) {
    removeAddressFromBanList(address);
    storeBanList();
}

} }
// REVERSED_FUNCTION: dice_hfe_BanList_consoleRemoveAddressFromBanList_std_string_constref (0x452900)
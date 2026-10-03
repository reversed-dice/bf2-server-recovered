// FUNCTION: BF2 0x4529c0
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    void consoleAddAddressToBanList(std::string const& ip, std::string const& name);
    void addAddressToBanList(std::string const& ip, std::string const& name);
    void storeBanList();
};

void BanList::consoleAddAddressToBanList(std::string const& ip, std::string const& name) {
    addAddressToBanList(ip, name);
    storeBanList();
}

} }
// REVERSED_FUNCTION: dice_hfe_BanList_consoleAddAddressToBanList_std_string_constref_std_string_constref (0x4529c0)
// FUNCTION: BF2 0x4ec6d0
#include <string>

namespace dice { namespace hfe {

int compareIgnoreCase(std::string const& a, std::string const& b);

std::string getRegistryKeyNameFromModName(std::string const& modName) {
    if (compareIgnoreCase(modName, std::string("xpack")) == 0)
        return std::string("Battlefield 2 Special Forces");
    return std::string("");
}

} }

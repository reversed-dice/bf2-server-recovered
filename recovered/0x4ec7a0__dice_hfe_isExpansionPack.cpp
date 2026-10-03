// FUNCTION: BF2 0x4ec7a0
#include <string>

namespace dice { namespace hfe {

std::string getModName();
int compareIgnoreCase(const std::string& a, const std::string& b);

bool isExpansionPack() {
    std::string mod = getModName();
    int r = compareIgnoreCase(mod, std::string("xpack"));
    return r == 0;
}

} }

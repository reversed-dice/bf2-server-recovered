// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x6d0a70
#include <sstream>
#include <string>

namespace dice { namespace anim {

class TriggerManager {
public:
    std::string listTriggerTypes();
};

std::string TriggerManager::listTriggerTypes() {
    std::stringstream ss;
    const char* types[13] = {"Heal", "Repair", "Reload", "Fire", "Spawn", "Die", "Enter", "Exit", "Move", "Damage", "Destroy", "Unspawn", 0};
    for (int i = 0; types[i] != 0; i++)
        ss << types[i] << "\n";
    return ss.str();
}

} }

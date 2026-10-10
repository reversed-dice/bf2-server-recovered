// FUNCTION: BF2 0x5472e0
#include <vector>

namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    std::vector<int>& getPcoPosId();
};

std::vector<int>& Soldier::getPcoPosId() {
    static std::vector<int> dummy(0);
    return dummy;
}

} } }

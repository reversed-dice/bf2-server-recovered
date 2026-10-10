// FUNCTION: BF2 0x55b860
#include <vector>

namespace dice {
namespace hfe {
namespace world {

class SupplyDepot {
public:
    char pad[0x270];
    std::vector<int> m_vec1;
    char pad2[0x290 - 0x270 - sizeof(std::vector<int>)];
    std::vector<int> m_vec2;
    void debugInfo();
};

void SupplyDepot::debugInfo() {
    unsigned int i = 0;
    do {
    } while (i++ < m_vec1.size());

    i = 0;
    do {
    } while (i++ < m_vec2.size());
}

}
}
}

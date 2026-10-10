// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6ce280
#include <vector>

class Bundle;

class Trigger {
public:
    char _pad0[0x8];
    std::vector<Bundle*> m_bundles;
    void addBundle(Bundle* b);
};

void Trigger::addBundle(Bundle* b) {
    m_bundles.push_back(b);
}

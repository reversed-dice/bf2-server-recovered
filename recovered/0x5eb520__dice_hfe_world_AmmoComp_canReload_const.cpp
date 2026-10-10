// FUNCTION: BF2 0x5eb520
// Target: 0x5eb520
#include <vector>

namespace dice { namespace hfe { namespace world {

struct AmmoCompTemplate {
    char _pad[0x3c];
    int nrOfMags;   // 0x3c
    int magSize;    // 0x40
};

class AmmoComp {
public:
    char _pad[0x28];
    std::vector<int> m_mags; // 0x28
    char _pad2[0x80 - 0x40];
    AmmoCompTemplate* m_template; // 0x80

    bool canReload() const;
};

bool AmmoComp::canReload() const {
    if (m_mags[0] != m_template->magSize) {
        if (m_mags.size() > 1 || m_template->nrOfMags == -1)
            return true;
    }
    return false;
}

} } }

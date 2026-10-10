// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x522c60
#include <vector>

namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    void addPcoPosId(int id);

private:
    char m_pad0[0x318];               // 0x00
    std::vector<int> m_pcoPosIds;     // 0x318
};

void PlayerControlObjectTemplate::addPcoPosId(int id) {
    m_pcoPosIds.push_back(id);
}

}}}

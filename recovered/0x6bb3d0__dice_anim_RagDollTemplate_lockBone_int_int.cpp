// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6bb3d0
#include <vector>

namespace dice {
namespace anim {

class RagDollTemplate {
public:
    char _pad[0x50];
    std::vector<bool> m_lockedBones;

    void lockBone(int from, int to);
};

void RagDollTemplate::lockBone(int from, int to) {
    for (int i = from; i <= to; ++i) {
        m_lockedBones[i] = true;
    }
}

}
}

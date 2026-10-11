// FUNCTION: BF2 0x4d08f0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {

class Vote {
public:
    bool m_active;
    char pad[0x17];
    std::map<int, int> m_votes;
    int getPlayerVote(int player);
};

int Vote::getPlayerVote(int player) {
    if (!m_active) return -1;
    if (m_votes.find(player) == m_votes.end()) return -1;
    return m_votes[player];
}

} }

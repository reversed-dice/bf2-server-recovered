// FUNCTION: BF2 0x4d0890
#include <map>
#include <utility>
namespace dice { namespace hfe {

class Vote {
public:
    bool m_open;                    // +0x00
    char _pad0[0x4];
    int m_lo;                       // +0x08
    int m_hi;                       // +0x0c
    char _pad1[0x8];
    std::map<int, int> m_votes;     // +0x18
    char _pad2[0x18];
    char m_flag;                    // +0x60

    bool layVote(int a, int b);
};

bool Vote::layVote(int a, int b)
{
    if (!m_open)
        return false;
    if (m_hi < b)
        return false;
    if (b < m_lo)
        return false;
    m_votes.insert(std::pair<int, int>(a, b));
    m_flag = 0;
    return true;
}

} }

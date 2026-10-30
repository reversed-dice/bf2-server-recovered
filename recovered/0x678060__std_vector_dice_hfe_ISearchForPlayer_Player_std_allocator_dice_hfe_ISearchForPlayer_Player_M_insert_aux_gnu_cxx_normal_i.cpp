// FUNCTION: BF2 0x678060
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::hfe::ISearchForPlayer::Player, std::allocator<dice::hfe::ISearchForPlayer::Player> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

namespace dice { namespace hfe { namespace ISearchForPlayer {

struct Player {
        int m_id;
        std::string m_nick;
        int m_score;
    };

} } }

template class std::vector<dice::hfe::ISearchForPlayer::Player, std::allocator<dice::hfe::ISearchForPlayer::Player> >;

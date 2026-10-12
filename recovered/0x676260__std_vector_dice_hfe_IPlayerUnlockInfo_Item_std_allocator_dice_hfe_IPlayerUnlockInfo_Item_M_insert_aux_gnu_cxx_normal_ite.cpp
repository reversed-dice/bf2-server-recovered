// FUNCTION: BF2 0x676260
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::hfe::IPlayerUnlockInfo::Item, std::allocator<dice::hfe::IPlayerUnlockInfo::Item> >

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

namespace dice { namespace hfe { namespace IPlayerUnlockInfo {

struct Item {
        int m_id;
        int m_type;
        std::string m_name;
        std::string m_description;
    };

} } }

template class std::vector<dice::hfe::IPlayerUnlockInfo::Item, std::allocator<dice::hfe::IPlayerUnlockInfo::Item> >;

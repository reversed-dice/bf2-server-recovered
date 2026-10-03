// FUNCTION: BF2 0x439220
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::PacketStatus, std::allocator<dice::hfe::PacketStatus> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct PacketStatus { float x, y, z; }; } }

template class std::deque<dice::hfe::PacketStatus, std::allocator<dice::hfe::PacketStatus> >;

// FUNCTION: BF2 0x4393c0
// std::_Deque_base<dice::hfe::PacketStatus, std::allocator<dice::hfe::PacketStatus> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct PacketStatus { void* p; ~PacketStatus(); }; } }

template class std::_Deque_base<dice::hfe::PacketStatus, std::allocator<dice::hfe::PacketStatus> >;

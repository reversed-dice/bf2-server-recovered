// FUNCTION: BF2 0x465a20
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::ServerConnection*, std::allocator<dice::hfe::ServerConnection*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct ServerConnection; } }

template class std::vector<dice::hfe::ServerConnection*, std::allocator<dice::hfe::ServerConnection*> >;

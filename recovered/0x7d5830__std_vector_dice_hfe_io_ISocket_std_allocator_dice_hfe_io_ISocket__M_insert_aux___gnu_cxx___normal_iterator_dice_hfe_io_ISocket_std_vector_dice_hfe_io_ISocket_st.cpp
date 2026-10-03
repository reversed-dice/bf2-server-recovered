// FUNCTION: BF2 0x7d5830
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::io::ISocket*, std::allocator<dice::hfe::io::ISocket*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace io { struct ISocket; } } }

template class std::vector<dice::hfe::io::ISocket*, std::allocator<dice::hfe::io::ISocket*> >;

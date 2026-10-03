// FUNCTION: BF2 0x488700
// BF2_FLAGS: -fno-strict-aliasing
// std::_List_base<dice::hfe::io::FileInfo, std::allocator<dice::hfe::io::FileInfo> >

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

namespace dice { namespace hfe { namespace io { struct FileInfo { std::string s; }; } } }

template class std::_List_base<dice::hfe::io::FileInfo, std::allocator<dice::hfe::io::FileInfo> >;

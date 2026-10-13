// FUNCTION: BF2 0x7de400
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> >

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

namespace dice { namespace hfe { namespace io { namespace FileChangeManager {

struct File { void* m_a; std::string s; int m_b; void* m_c; };

} } } }

template class std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> >;

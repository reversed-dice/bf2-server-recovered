// FUNCTION: BF2 0x7e48f0
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> >*, std::allocator<std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> >*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace io { struct IArchive; } } }

template class std::vector<std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> >*, std::allocator<std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> >*> >;

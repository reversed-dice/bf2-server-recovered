// FUNCTION: BF2 0x7cb970
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned short, std::pair<unsigned short const, dice::hfe::io::NetworkableDescriptor*>, std::_Select1st<std::pair<unsigned short const, dice::hfe::io::NetworkableDescriptor*> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, dice::hfe::io::NetworkableDescriptor*> > >

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

namespace dice { namespace hfe { namespace io { struct NetworkableDescriptor ; } } }

template class std::_Rb_tree<unsigned short, std::pair<unsigned short const, dice::hfe::io::NetworkableDescriptor*>, std::_Select1st<std::pair<unsigned short const, dice::hfe::io::NetworkableDescriptor*> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, dice::hfe::io::NetworkableDescriptor*> > >;

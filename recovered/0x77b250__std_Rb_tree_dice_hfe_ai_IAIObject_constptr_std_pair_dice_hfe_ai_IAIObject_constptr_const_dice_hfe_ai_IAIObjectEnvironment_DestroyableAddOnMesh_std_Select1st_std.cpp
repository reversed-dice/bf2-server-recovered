// FUNCTION: BF2 0x77b250
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<dice::hfe::ai::IAIObject const*, std::pair<dice::hfe::ai::IAIObject const* const, dice::hfe::ai::IAIObjectEnvironment::DestroyableAddOnMesh>, std::_Select1st<std::pair<dice::hfe::ai::IAIObject const* const, dice::hfe::ai::IAIObjectEnvironment::DestroyableAddOnMesh> >, std::less<dice::hfe::ai::IAIObject const*>, std::allocator<std::pair<dice::hfe::ai::IAIObject const* const, dice::hfe::ai::IAIObjectEnvironment::DestroyableAddOnMesh> > >

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

namespace dice { namespace hfe { namespace ai { struct IAIObject { std::string s; }; } } }
namespace dice { namespace hfe { namespace ai { namespace IAIObjectEnvironment { struct DestroyableAddOnMesh { std::string s; }; } } } }

template class std::_Rb_tree<dice::hfe::ai::IAIObject const*, std::pair<dice::hfe::ai::IAIObject const* const, dice::hfe::ai::IAIObjectEnvironment::DestroyableAddOnMesh>, std::_Select1st<std::pair<dice::hfe::ai::IAIObject const* const, dice::hfe::ai::IAIObjectEnvironment::DestroyableAddOnMesh> >, std::less<dice::hfe::ai::IAIObject const*>, std::allocator<std::pair<dice::hfe::ai::IAIObject const* const, dice::hfe::ai::IAIObjectEnvironment::DestroyableAddOnMesh> > >;

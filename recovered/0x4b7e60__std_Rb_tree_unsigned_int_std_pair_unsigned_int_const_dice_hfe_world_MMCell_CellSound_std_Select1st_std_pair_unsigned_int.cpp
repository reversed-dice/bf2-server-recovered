// FUNCTION: BF2 0x4b7e60
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::MMCell::CellSound>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::MMCell::CellSound> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::MMCell::CellSound> > >

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

namespace dice { namespace hfe { namespace world { namespace MMCell { struct CellSound { float x, y, z, w, v; }; } } } }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::MMCell::CellSound>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::MMCell::CellSound> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::MMCell::CellSound> > >;

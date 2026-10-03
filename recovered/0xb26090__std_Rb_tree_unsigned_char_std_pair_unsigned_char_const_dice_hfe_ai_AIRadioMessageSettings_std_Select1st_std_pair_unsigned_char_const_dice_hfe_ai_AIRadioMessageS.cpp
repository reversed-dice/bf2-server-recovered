// FUNCTION: BF2 0xb26090
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned char, std::pair<unsigned char const, dice::hfe::ai::AIRadioMessageSettings>, std::_Select1st<std::pair<unsigned char const, dice::hfe::ai::AIRadioMessageSettings> >, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, dice::hfe::ai::AIRadioMessageSettings> > >

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

namespace dice { namespace hfe { namespace ai { struct AIRadioMessageSettings { std::string s; }; } } }

template class std::_Rb_tree<unsigned char, std::pair<unsigned char const, dice::hfe::ai::AIRadioMessageSettings>, std::_Select1st<std::pair<unsigned char const, dice::hfe::ai::AIRadioMessageSettings> >, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, dice::hfe::ai::AIRadioMessageSettings> > >;

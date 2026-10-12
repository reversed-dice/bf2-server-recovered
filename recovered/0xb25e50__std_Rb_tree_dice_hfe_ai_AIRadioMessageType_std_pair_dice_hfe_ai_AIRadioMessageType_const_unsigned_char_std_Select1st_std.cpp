// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0xb25e50
// std::_Rb_tree<dice::hfe::ai::AIRadioMessageType, std::pair<dice::hfe::ai::AIRadioMessageType const, unsigned char>, std::_Select1st<std::pair<dice::hfe::ai::AIRadioMessageType const, unsigned char> >, std::less<dice::hfe::ai::AIRadioMessageType>, std::allocator<std::pair<dice::hfe::ai::AIRadioMessageType const, unsigned char> > >

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

namespace dice { namespace hfe { namespace ai {
enum AIRadioMessageType { AIRM_0 = 0 };
} } }

template class std::_Rb_tree<dice::hfe::ai::AIRadioMessageType, std::pair<dice::hfe::ai::AIRadioMessageType const, unsigned char>, std::_Select1st<std::pair<dice::hfe::ai::AIRadioMessageType const, unsigned char> >, std::less<dice::hfe::ai::AIRadioMessageType>, std::allocator<std::pair<dice::hfe::ai::AIRadioMessageType const, unsigned char> > >;

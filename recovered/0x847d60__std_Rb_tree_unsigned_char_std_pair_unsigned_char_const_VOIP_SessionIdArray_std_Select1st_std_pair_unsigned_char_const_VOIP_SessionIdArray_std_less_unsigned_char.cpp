// FUNCTION: BF2 0x847d60
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned char, std::pair<unsigned char const, VOIP::SessionIdArray>, std::_Select1st<std::pair<unsigned char const, VOIP::SessionIdArray> >, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, VOIP::SessionIdArray> > >

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

namespace VOIP { struct SessionIdArray { std::string s; }; }

template class std::_Rb_tree<unsigned char, std::pair<unsigned char const, VOIP::SessionIdArray>, std::_Select1st<std::pair<unsigned char const, VOIP::SessionIdArray> >, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, VOIP::SessionIdArray> > >;

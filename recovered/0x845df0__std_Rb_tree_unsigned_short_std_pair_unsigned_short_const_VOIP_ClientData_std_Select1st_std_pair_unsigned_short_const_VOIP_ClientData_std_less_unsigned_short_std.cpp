// FUNCTION: BF2 0x845df0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned short, std::pair<unsigned short const, VOIP::ClientData>, std::_Select1st<std::pair<unsigned short const, VOIP::ClientData> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, VOIP::ClientData> > >

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

namespace VOIP { struct ClientData { std::string s; }; }

template class std::_Rb_tree<unsigned short, std::pair<unsigned short const, VOIP::ClientData>, std::_Select1st<std::pair<unsigned short const, VOIP::ClientData> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, VOIP::ClientData> > >;

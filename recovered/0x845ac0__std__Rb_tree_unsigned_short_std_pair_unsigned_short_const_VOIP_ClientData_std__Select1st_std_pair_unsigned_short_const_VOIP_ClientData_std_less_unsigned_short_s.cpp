// FUNCTION: BF2 0x845ac0
// std::_Rb_tree<unsigned short, std::pair<unsigned short const, VOIP::ClientData>, std::_Select1st<std::pair<unsigned short const, VOIP::ClientData> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, VOIP::ClientData> > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace VOIP { struct ClientData { void* p; ~ClientData(); }; }

template class std::_Rb_tree<unsigned short, std::pair<unsigned short const, VOIP::ClientData>, std::_Select1st<std::pair<unsigned short const, VOIP::ClientData> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, VOIP::ClientData> > >;

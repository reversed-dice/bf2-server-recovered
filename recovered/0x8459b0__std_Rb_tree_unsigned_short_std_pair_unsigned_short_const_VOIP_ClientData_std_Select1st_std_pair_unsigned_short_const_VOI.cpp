// FUNCTION: BF2 0x8459b0
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

namespace VOIP {

struct Inner { char* p; char _pad[0x10]; ~Inner() { if (p) { delete p; } } };

}

namespace VOIP {

struct ClientData
    {
        char pad00[0x10];
        std::vector<Inner> m_list;
        unsigned int m_index;
        char pad2c[4];
        std::vector<char> m_bytes;
        char _pad48[8];
    };

}

template class std::_Rb_tree<unsigned short, std::pair<unsigned short const, VOIP::ClientData>, std::_Select1st<std::pair<unsigned short const, VOIP::ClientData> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, VOIP::ClientData> > >;

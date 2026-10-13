// FUNCTION: BF2 0x845d40
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
struct ChannelEntry { unsigned char b[24]; };
class ClientData {
public:
    char pad00[0x10];
    std::vector<ChannelEntry> m_list;
    unsigned int m_index;
    char pad2c[4];
    std::vector<unsigned char> m_bytes;
    unsigned char m_flag;
    ClientData(ClientData const&);
};
}

template class std::_Rb_tree<unsigned short, std::pair<unsigned short const, VOIP::ClientData>, std::_Select1st<std::pair<unsigned short const, VOIP::ClientData> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, VOIP::ClientData> > >;

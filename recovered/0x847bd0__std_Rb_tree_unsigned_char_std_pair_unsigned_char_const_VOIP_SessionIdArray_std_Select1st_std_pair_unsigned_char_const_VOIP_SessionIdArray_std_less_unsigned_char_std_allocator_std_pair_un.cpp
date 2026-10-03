// FUNCTION: BF2 0x847bd0
// std::_Rb_tree<unsigned char, std::pair<unsigned char const, VOIP::SessionIdArray>, ...>::_M_erase (0x847bd0)
#include <map>

namespace VOIP {
struct Pod { ~Pod() {} int _p; };
struct SessionIdArray { Pod* m_data; ~SessionIdArray() { delete m_data; } };
}

template class std::_Rb_tree<
    unsigned char,
    std::pair<unsigned char const, VOIP::SessionIdArray>,
    std::_Select1st<std::pair<unsigned char const, VOIP::SessionIdArray> >,
    std::less<unsigned char>,
    std::allocator<std::pair<unsigned char const, VOIP::SessionIdArray> > >;

// REVERSED_FUNCTION: std_Rb_tree_M_erase (0x847bd0)

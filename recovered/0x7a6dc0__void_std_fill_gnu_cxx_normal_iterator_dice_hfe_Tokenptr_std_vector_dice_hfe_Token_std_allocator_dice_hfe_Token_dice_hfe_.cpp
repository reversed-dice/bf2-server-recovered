// FUNCTION: BF2 0x7a6dc0
// from api 97.30%
// BF2_FLAGS: -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::Token*, std::vector<dice::hfe::Token, std::allocator<di

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

namespace dice { namespace hfe {

class Token {
public:
    char* m_root;
    unsigned m_index;
    std::string m_text;
    short m_a;
    short m_b;
    int m_c;
    Token* operator--();
};

} }

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::Token*, std::vector<dice::hfe::Token, std::allocator<dice::hfe::Token> > >, dice::hfe::Token>(__gnu_cxx::__normal_iterator<dice::hfe::Token*, std::vector<dice::hfe::Token, std::allocator<dice::hfe::Token> > >, __gnu_cxx::__normal_iterator<dice::hfe::Token*, std::vector<dice::hfe::Token, std::allocator<dice::hfe::Token> > >, dice::hfe::Token const&);

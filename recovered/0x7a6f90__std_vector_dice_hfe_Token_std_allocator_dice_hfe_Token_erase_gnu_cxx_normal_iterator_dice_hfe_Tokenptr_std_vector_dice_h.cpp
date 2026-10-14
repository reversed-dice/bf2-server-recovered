// FUNCTION: BF2 0x7a6f90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct TokenList;

struct Token {
    TokenList* m_list;
    unsigned int m_index;
    std::string m_text;
    short m_type;
    short m_flags;
    int m_value;
};

struct TokenList {
    Token* m_tokens;
    void* m_pad8;
    void* m_pad10;
    unsigned int m_count;
};

} }

template class std::vector<dice::hfe::Token, std::allocator<dice::hfe::Token> >;

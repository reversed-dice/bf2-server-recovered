// FUNCTION: BF2 0x7a5d70
#include <string>
namespace dice { namespace hfe {

struct TokenList;

struct Token {
    TokenList* m_list;
    unsigned int m_index;
    std::string m_text;
    short m_type;
    short m_flags;
    int m_value;
    Token& operator+=(unsigned int n);
};

struct TokenList {
    Token* m_tokens;
    void* m_pad8;
    void* m_pad10;
    unsigned int m_count;
};

Token& Token::operator+=(unsigned int n)
{
    unsigned int i = m_index + n;
    if (i >= m_list->m_count)
        m_index = m_list->m_tokens[m_list->m_count].m_index;
    else
        m_index = i;
    *this = m_list->m_tokens[m_index];
    return *this;
}

} }

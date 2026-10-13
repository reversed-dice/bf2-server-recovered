// FUNCTION: BF2 0x7a5d10
#include <string>

namespace dice { namespace hfe {

class Token {
public:
    char* m_root;
    unsigned m_index;
    int m_pad;
    std::string m_text;
    short m_a;
    short m_b;
    int m_c;
    Token* operator--();
};

Token* Token::operator--() {
    unsigned c = m_index;
    if (c != 0) {
        c = c - 1;
        m_index = c;
    }
    char* p = *(char**)m_root + (unsigned long)c * 0x20;
    m_root = *(char**)p;
    m_index = *(unsigned*)(p + 0x8);
    m_text = *(std::string*)(p + 0x10);
    m_a = (short)*(int*)(p + 0x18);
    m_b = *(short*)(p + 0x1a);
    m_c = *(int*)(p + 0x1c);
    return this;
}

}}

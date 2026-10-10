// FUNCTION: BF2 0x7a5e60
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct Token {
    Token();
    char pad[0x10];
    std::string m_text;
    char tail[8];
};

class Tokenizer {
public:
    void clean();
    std::vector<Token> m_tokens;
    unsigned int m_pad;
    std::string m_line;
};

void Tokenizer::clean() {
    m_line.assign(1, '\0');
    {
        Token t;
        if (m_tokens.size() != 0)
            m_tokens.erase(m_tokens.begin(), m_tokens.end());
        else
            m_tokens.insert(m_tokens.end(), 0, t);
    }
    m_pad = 0;
}

} }

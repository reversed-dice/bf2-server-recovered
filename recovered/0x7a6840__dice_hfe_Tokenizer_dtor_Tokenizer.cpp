// FUNCTION: BF2 0x7a6840
#include <string>
#include <vector>

namespace dice { namespace hfe {

struct Token {
    char pad[0x10];
    std::string m_text;
    char tail[8];
};

class Tokenizer {
public:
    void clean();
    ~Tokenizer();
    std::vector<Token> m_tokens;
    unsigned long long m_pad;
    std::string m_line;
};

Tokenizer::~Tokenizer() {
    clean();
}

} }

// FUNCTION: BF2 0x7a6b20
#include <string>
#include <string.h>

namespace dice { namespace hfe {

extern "C" long __strtol_internal(const char*, char**, int, int);

class Token {
public:
    void operator++();
    char m_pad[0x10];
    char* m_text;
};

class Tokenizer {
public:
    static int getIntNumber(Token& t);
};

int Tokenizer::getIntNumber(Token& t) {
    std::string s(t.m_text);
    ++t;
    if (s.compare("-") == 0 || s.compare("+") == 0) {
        char* p = t.m_text;
        s.append(p, strlen(p));
        ++t;
    }
    return (int)__strtol_internal(s.c_str(), 0, 10, 0);
}

} }
// REVERSED_FUNCTION: dice_hfe_Tokenizer_getIntNumber_dice_hfe_Tokenref (0x7a6b20)

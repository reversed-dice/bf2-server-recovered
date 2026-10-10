// FUNCTION: BF2 0x7a6c00
#include <string>
#include <iostream>
#include <string.h>

namespace dice { namespace hfe {

enum DebugType {
    DebugType_Error = 6
};

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

class Token {
public:
    void operator++();
    char m_pad[0x10];
    char* m_text;
};

class Tokenizer {
public:
    static long long getInt64Number(Token& t);
};

long long Tokenizer::getInt64Number(Token& t) {
    std::string s(t.m_text);
    ++t;
    if (s.compare("-") == 0 || s.compare("+") == 0) {
        char* p = t.m_text;
        s.append(p, strlen(p));
        ++t;
    }
    Debug(DebugType_Error, "IO/Tokenizer.cpp", 373, "").stream() << "we need atoi64 or similar";
    return 0;
}

} }

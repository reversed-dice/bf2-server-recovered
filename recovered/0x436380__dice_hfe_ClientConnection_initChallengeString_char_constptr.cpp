// FUNCTION: BF2 0x436380
#include <cstdlib>

namespace dice { namespace hfe {

class ClientConnection {
public:
    char _pad_000[0x1a4];
    char m_challenge[10];
    char _pad_1ae[0x200];
    char* initChallengeString(char const* s);
};

char* ClientConnection::initChallengeString(char const* s)
{
    if (s != 0) {
        for (int i = 0; i < 10; ++i)
            m_challenge[i] = s[i];
    } else {
        for (int i = 0; i < 10; ++i)
            m_challenge[i] = (char)(rand() % 26 + 'a');
        m_challenge[9] = 0;
    }
    return m_challenge;
}

}}

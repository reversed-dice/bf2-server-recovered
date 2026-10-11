// FUNCTION: BF2 0x8470e0
#include <fstream>

namespace BF2VoipServer {

class CDebugVoiceTrace {
public:
    std::ofstream* m_pStream;
    unsigned int m_a;
    unsigned int m_b;
    void Reset();
};

}

void BF2VoipServer::CDebugVoiceTrace::Reset()
{
    if (m_pStream)
    {
        m_pStream->close();
        delete m_pStream;
    }
    m_pStream = 0;
    m_b = 0;
    m_a = 0;
}

// FUNCTION: BF2 0x847020
#include <fstream>

namespace BF2VoipServer {

class CDebugStandard {
public:
    std::ofstream* m_pStream;
    ~CDebugStandard();
};

}

BF2VoipServer::CDebugStandard::~CDebugStandard()
{
    if (m_pStream)
    {
        m_pStream->close();
        delete m_pStream;
        m_pStream = 0;
    }
}

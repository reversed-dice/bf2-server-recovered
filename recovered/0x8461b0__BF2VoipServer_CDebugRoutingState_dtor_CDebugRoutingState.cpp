// FUNCTION: BF2 0x8461b0
#include <fstream>

namespace BF2VoipServer {

class CDebugRoutingState {
public:
    virtual ~CDebugRoutingState();
    std::ofstream* m_pStream;
};

}

BF2VoipServer::CDebugRoutingState::~CDebugRoutingState()
{
    if (m_pStream)
    {
        m_pStream->close();
        delete m_pStream;
        m_pStream = 0;
    }
}

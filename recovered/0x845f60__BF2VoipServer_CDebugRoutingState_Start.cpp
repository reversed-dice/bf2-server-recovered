// FUNCTION: BF2 0x845f60
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdio>
#include <fstream>
#include <string>

namespace VOIP { extern const char c_debugPath[]; }

namespace BF2VoipServer {

class CDebugStandard {
public:
    std::string m_str;
    static CDebugStandard* GetInstance();
    std::string CTimeDateStringNoSpaces() const;
};

class CDebugRoutingState {
public:
    virtual ~CDebugRoutingState();
    std::ofstream* m_pStream;
    bool Enabled() const;
    bool Start();
};

}

bool BF2VoipServer::CDebugRoutingState::Start()
{
    bool result = false;
    if (!Enabled())
    {
        m_pStream = new std::ofstream();
        CDebugStandard* d = CDebugStandard::GetInstance();
        std::string s = d->CTimeDateStringNoSpaces();
        char buf[512];
        sprintf(buf, "%sVoipServerRouting_Instance_%s%s", VOIP::c_debugPath, s.c_str(), ".log");
        if (m_pStream)
        {
            m_pStream->open(buf, std::ios::out);
        }
        result = true;
    }
    return result;
}

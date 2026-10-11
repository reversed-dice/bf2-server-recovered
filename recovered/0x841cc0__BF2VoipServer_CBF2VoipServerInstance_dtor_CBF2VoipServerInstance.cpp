// FUNCTION: BF2 0x841cc0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <deque>

namespace VOIP {
class CVoipRouterInstance {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual ~CVoipRouterInstance();
};
}

namespace BF2VoipServer {

class CDebugRoutingState {
public:
    ~CDebugRoutingState();
    char pad[0x10];
};

class CDebugVoiceTrace {
public:
    ~CDebugVoiceTrace();
    char pad[0x10];
};

class CBF2VoipServerInstance : public VOIP::CVoipRouterInstance {
public:
    ~CBF2VoipServerInstance();
private:
    char pad0[0x880 - 8];
    std::string m_name;
    std::deque<std::string> m_hist;
    char pad1[0x1288 - 0x888 - 0x50];
    CDebugRoutingState m_routing;
    CDebugVoiceTrace m_trace;
};

CBF2VoipServerInstance::~CBF2VoipServerInstance() {
}
}

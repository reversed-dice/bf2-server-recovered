// FUNCTION: BF2 0x842d20
#include <string>
#include <stdio.h>

namespace VOIP { class CVoipRouterInstance { public: void Update(); }; }
namespace BF2VoipServer {
class CBF2VoipServerInstance : public VOIP::CVoipRouterInstance
{
public:
    int Update();
    void NullifyConnection();
};
}

struct in_addr { unsigned int s_addr; };
extern "C" char* inet_ntoa(struct in_addr);

int BF2VoipServer::CBF2VoipServerInstance::Update()
{
    VOIP::CVoipRouterInstance::Update();
    if (*(unsigned int*)((char*)this + 0xaa8) != 0)
    {
        typedef double (*GetDouble)(void*);
        if (((GetDouble)(*(void***)this)[22])(this) > 0.0)
        {
            char text[256];
            sprintf(text, "BF2 server %s:%d disconnected",
                    inet_ntoa(*(in_addr*)((char*)this + 0xaa8)), *(int*)((char*)this + 0xaa4));
            typedef void (*CallStr)(void*, const std::string&);
            ((CallStr)(*(void***)this)[26])(this, std::string(text));
            NullifyConnection();
        }
    }
    return 1;
}

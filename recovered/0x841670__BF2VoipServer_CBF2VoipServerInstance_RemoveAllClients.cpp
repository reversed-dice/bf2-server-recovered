// FUNCTION: BF2 0x841670
extern "C" char* strcpy(char*, const char*);

namespace VOIP
{
class CVoipRouterInstance
{
public:
    static int RemoveAllClients();
};
}

namespace BF2VoipServer
{
class CDebugStandard
{
public:
    static CDebugStandard* GetInstance();
    void Output(int type, const char* message);
};

class CBF2VoipServerInstance
{
public:
    static int RemoveAllClients();
};
}

int BF2VoipServer::CBF2VoipServerInstance::RemoveAllClients()
{
    int removed = VOIP::CVoipRouterInstance::RemoveAllClients();
    char text[512];
    if (removed == 1)
    {
        strcpy(text, "  Remove All Clients");
        BF2VoipServer::CDebugStandard::GetInstance()->Output(0, text);
    }
    else
    {
        strcpy(text, "  Remove All Clients Failed");
        BF2VoipServer::CDebugStandard::GetInstance()->Output(3, text);
    }
    return removed;
}

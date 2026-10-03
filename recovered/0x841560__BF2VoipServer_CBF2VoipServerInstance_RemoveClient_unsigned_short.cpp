// FUNCTION: BF2 0x841560
// BF2VoipServer::RemoveClient: remove client and log
#include <cstdio>

extern "C" {
    int VOIP_CVoipRouterInstance_RemoveClient(long self, int id);
    long BF2VoipServer_CDebugStandard_GetInstance();
    void BF2VoipServer_CDebugStandard_Output(long self, int type, const char* msg);
}

int BF2VoipServer_RemoveClient(long self, short id) {
    int result = VOIP_CVoipRouterInstance_RemoveClient(self, (int)(unsigned short)id);
    if (result == 1) {
        char buf[512];
        sprintf(buf, "  Remove Client Session Id: %d", (int)(unsigned short)id);
        long debug = BF2VoipServer_CDebugStandard_GetInstance();
        BF2VoipServer_CDebugStandard_Output(debug, 0, buf);
    }
    return result;
}

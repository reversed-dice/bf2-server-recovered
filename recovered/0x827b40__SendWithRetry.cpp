// FUNCTION: BF2 0x827b40
extern "C" long send(int fd, const void* buf, unsigned long len, int flags);

struct SBServerList
{
    int state;
    char pad0[0x88 - 4];
    char* inbuffer;
    int inbufferlen;
    char pad1[0xad8 - 0x94];
    int slsocket;
};

extern "C" int SBServerListConnectAndQuery(SBServerList* slist, const char* hostname, const char* gamename, int maxServers, int queryPort);
extern "C" void SBServerListDisconnect(SBServerList* slist);
extern "C" void ErrorDisconnect(SBServerList* slist);

int SendWithRetry(SBServerList* slist, char* data, int len)
{
    int err;
    int ret = 0;

    int retryCount = 1;

    while (retryCount >= 0)
    {
        retryCount--;
        ret = (int)send(slist->slsocket, data, len, 0);
        if (retryCount >= 0 && ret <= 0)
        {
            SBServerListDisconnect(slist);
            err = SBServerListConnectAndQuery(slist, 0, 0, 2, 0);
            if (err != 0)
            {
                ErrorDisconnect(slist);
                return err;
            }
        }
        else
            break;
    }

    if (ret <= 0)
        return 3;
    else
        return 0;
}

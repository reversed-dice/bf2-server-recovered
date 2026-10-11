// FUNCTION: BF2 0x8281e0
extern "C" void* memcpy(void* dst, const void* src, unsigned long n);
#define BF2_SWAP16(a) ((unsigned short)(((unsigned short)(a) >> 8) | ((unsigned short)(a) << 8)))

typedef void (*SBMaploopCallbackFn)(void* server, void* maploop);

struct SBServerList
{
    int state;
    char pad0[0x8a0 - 4];
    SBMaploopCallbackFn MaploopCallback;
};

extern "C" int SBServerListConnectAndQuery(SBServerList* slist, const char* hostname, const char* gamename, int maxServers, int queryPort);
extern "C" unsigned int SBServerGetPublicInetAddress(void* server);
extern "C" unsigned short SBServerGetPublicQueryPortNBO(void* server);
extern "C" int SendWithRetry(SBServerList* slist, const char* buffer, int len);

int SBSendMaploopRequest(SBServerList* slist, void* server, SBMaploopCallbackFn callback)
{
    char requestBuffer[16];
    unsigned short tmp;
    unsigned short msgLen = 9;
    unsigned short port;
    unsigned int ip;
    int ret;

    if (slist->state == 1)
        SBServerListConnectAndQuery(slist, 0, 0, 2, 0);
    if (slist->state == 1)
        return 3;

    slist->MaploopCallback = callback;

    tmp = BF2_SWAP16(msgLen);
    memcpy(requestBuffer, &tmp, 2);
    requestBuffer[2] = 4;
    ip = SBServerGetPublicInetAddress(server);
    port = SBServerGetPublicQueryPortNBO(server);
    memcpy(requestBuffer + 3, &ip, sizeof(ip));
    memcpy(requestBuffer + 7, &port, sizeof(port));
    ret = SendWithRetry(slist, requestBuffer, msgLen);
    if (ret != 0)
        return ret;
    return 0;
}

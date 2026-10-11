// FUNCTION: BF2 0x825f90
struct SBServer
{
    unsigned int publicip;
    unsigned short publicport;
    unsigned char pad0[0x15 - 0x6];
    unsigned char flags;
};

struct SBQueryEngine
{
    unsigned char data[0x70];
};

struct SBServerList
{
    unsigned char data[0xbf4];
    unsigned short backendgameflags;
    unsigned char pad0[0xc0c - 0xbf6];
};

struct ServerBrowserRec
{
    SBQueryEngine engine;
    SBServerList list;
    int dontUpdate;
    unsigned int triggerIP;
    unsigned short triggerPort;
    unsigned char pad0[0xc88 - 0xc86];
    void* BrowserCallback;
    void* instance;
};

extern "C" void SBQueryEngineRemoveServerFromFIFOs(void* engine, SBServer* server);
extern "C" void SBQueryEngineUpdateServer(void* engine, SBServer* server, int flag, int qtype, int usequerychallenge);
extern "C" int SBGetServerRulesFromMaster(void* serverList, unsigned int publicip, unsigned short publicport);
extern "C" int WaitForTriggerUpdate(void* sb, int viaMaster);

extern "C" int ServerBrowserAuxUpdateServer(struct ServerBrowserRec* sb, SBServer* server, int async, int fullUpdate)
{
    int viaMaster;
    int err = 0;
    int usequerychallenge;

    sb->dontUpdate = 1;

    usequerychallenge = ((sb->list.backendgameflags & 128) > 0) ? 1 : 0;

    if (server->flags & 1)
    {
        SBQueryEngineRemoveServerFromFIFOs(&sb->engine, server);
        SBQueryEngineUpdateServer(&sb->engine, server, 1, fullUpdate ? 1 : 0, usequerychallenge);
        viaMaster = 0;
    }
    else
    {
        err = SBGetServerRulesFromMaster(&sb->list, server->publicip, server->publicport);
        viaMaster = 1;
    }

    if (!async && (err == 0))
    {
        sb->triggerIP = server->publicip;
        sb->triggerPort = server->publicport;
        err = WaitForTriggerUpdate(sb, viaMaster);
    }

    sb->dontUpdate = 0;

    return err;
}

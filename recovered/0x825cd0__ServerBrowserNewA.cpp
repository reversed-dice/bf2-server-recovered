// FUNCTION: BF2 0x825cd0
extern "C" int __GSIACResult;
extern "C" void* gsimalloc(unsigned int size);
extern "C" void SBServerListInit(void* serverList, const char* queryForGamename, const char* queryFromGamename, const char* queryFromKey, int queryFromVersion, int lanBrowse, void* callback, void* instance);
extern "C" void SBQueryEngineInit(void* engine, int maxupdates, int queryversion, int lanBrowse, void* callback, void* instance);

struct SBQueryEngine
{
    int queryversion;
    int maxupdates;
    unsigned char data[0x70 - 0x8];
};

struct SBServerList
{
    unsigned char data[0xc0c];
};

struct ServerBrowserRec
{
    SBQueryEngine engine;
    SBServerList list;
    int dontUpdate;
    unsigned char pad0[0xc88 - 0xc80];
    void* BrowserCallback;
    void* instance;
};

static void ListCallback(void) {}
static void EngineCallback(void) {}

extern "C" struct ServerBrowserRec* ServerBrowserNewA(const char* queryForGamename, const char* queryFromGamename, const char* queryFromKey, int queryFromVersion, int maxConcUpdates, int queryVersion, int lanBrowse, void* callback, void* instance)
{
    struct ServerBrowserRec* sb;

    if (lanBrowse == 0)
    {
        if (__GSIACResult != 1)
            return 0;
    }

    sb = (struct ServerBrowserRec*)gsimalloc(sizeof(struct ServerBrowserRec));
    if (sb == 0)
        return 0;

    sb->BrowserCallback = callback;
    sb->instance = instance;
    sb->dontUpdate = 0;

    SBServerListInit(&sb->list, queryForGamename, queryFromGamename, queryFromKey, queryFromVersion, lanBrowse, (void*)ListCallback, sb);
    SBQueryEngineInit(&sb->engine, maxConcUpdates, queryVersion, lanBrowse, (void*)EngineCallback, sb);

    return sb;
}

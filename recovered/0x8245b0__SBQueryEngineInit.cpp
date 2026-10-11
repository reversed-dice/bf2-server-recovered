// FUNCTION: BF2 0x8245b0
extern "C" int __GSIACResult;
extern "C" void SocketStartUp(...);
extern "C" int socket(int domain, int type, int protocol);
extern "C" void FIFOClear(void* fifo);

typedef int (*SBEngineCallbackFn)(int a, int b, void* c);

struct FIFO
{
    unsigned char data[0x18];
};

struct SBQueryEngine
{
    int queryversion;
    int maxupdates;
    FIFO querylist;
    FIFO pendinglist;
    int querysock;
    unsigned char pad1[0x40 - 0x3c];
    unsigned int mypublicip;
    unsigned char pad2[0x58 - 0x44];
    int numserverkeys;
    SBEngineCallbackFn ListCallback;
    void* instance;
};

extern "C" void SBQueryEngineInit(SBQueryEngine* engine, int maxupdates, int queryversion, int lanBrowse, SBEngineCallbackFn callback, void* instance)
{
    if (lanBrowse == 0)
    {
        if (__GSIACResult != 1)
            return;
    }

    SocketStartUp();

    engine->queryversion = queryversion;
    engine->maxupdates = maxupdates;
    engine->numserverkeys = 0;
    engine->ListCallback = callback;
    engine->instance = instance;
    engine->mypublicip = 0;
    engine->querysock = socket(2, 2, 0x11);

    FIFOClear(&engine->pendinglist);
    FIFOClear(&engine->querylist);
}

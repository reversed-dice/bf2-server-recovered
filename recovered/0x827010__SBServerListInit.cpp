// FUNCTION: BF2 0x827010
typedef int SBBool;
typedef void (*SBListCallBackFn)(void* serverlist, int reason, void* server, void* instance);

struct SortInfo { char sortkey[0x104]; };

struct SBServerList
{
	int state;                        // 0x00
	char pad0[4];
	void* servers;                    // 0x08
	void* keylist;                    // 0x10
	char queryforgamename[36];        // 0x18
	char queryfromgamename[36];       // 0x3c
	char queryfromkey[32];            // 0x60
	char mychallenge[8];              // 0x80
	char* inbuffer;                   // 0x88
	int inbufferlen;                  // 0x90
	char pad1[0x890 - 0x94];
	int numpopularvalues;             // 0x890
	int expectedelements;             // 0x894
	SBListCallBackFn ListCallback;    // 0x898
	void* MaploopCallback;            // 0x8a0
	void* PlayerSearchCallback;       // 0x8a8
	void* instance;                   // 0x8b0
	SortInfo currsortinfo;            // 0x8b8
	SortInfo prevsortinfo;            // 0x9bc
	char pad2[0xac4 - 0xac0];
	unsigned int mypublicip;          // 0xac4
	unsigned int srcip;               // 0xac8
	char pad3[0xad8 - 0xacc];
	int slsocket;                     // 0xad8
	int lanstarttime;                 // 0xadc
	int fromgamever;                  // 0xae0
	char pad4[0xbf4 - 0xae4];
	unsigned short backendgameflags;  // 0xbf4
	char pad5[2];
	void* mLanAdapterOverride;        // 0xbf8
	char pad6[0x20];
};

#define SBFalse 0
#define GSIACAvailable 1
#define INVALID_SOCKET (-1)
#define QR2_USE_QUERY_CHALLENGE 0x80
#define SL_DISCONNECTED 1

extern "C" int __GSIACResult;
extern "C" int current_time(...);
extern "C" void srand(unsigned int seed);
extern "C" void SocketStartUp(...);
extern "C" void SBAllocateServerList(SBServerList* slist);
extern "C" void SBRefStrHash(SBServerList* slist);
extern "C" void SBSetLastListErrorPtr(SBServerList* slist, const char* error);
extern "C" char* strcpy(char* dst, const char* src);
extern "C" void __assert_fail(const char* assertion, const char* file, unsigned int line, const char* function) __attribute__((noreturn));

void SBServerListInit(SBServerList* slist, const char* queryForGamename, const char* queryFromGamename, const char* queryFromKey, int queryFromVersion, SBBool lanBrowse, SBListCallBackFn callback, void* instance)
{
	if (!(slist != 0))
		__assert_fail("slist != ((void *)0)", "External/GameSpy/serverbrowsing/sb_serverlist.c", 358, __PRETTY_FUNCTION__);

	// fix for LANs and unnecessary availability check
	if (lanBrowse == SBFalse)
	{
		if (__GSIACResult != GSIACAvailable)
			return;
	}

	slist->state = SL_DISCONNECTED;
	SBAllocateServerList(slist);
	SBRefStrHash(slist); // make sure it's initialized
	strcpy(slist->queryforgamename, queryForGamename);
	strcpy(slist->queryfromgamename, queryFromGamename);
	strcpy(slist->queryfromkey, queryFromKey);
	slist->ListCallback = callback;
	slist->MaploopCallback = 0; // populate when requested

	if (!(callback != 0))
		__assert_fail("callback != ((void *)0)", "External/GameSpy/serverbrowsing/sb_serverlist.c", 380, __PRETTY_FUNCTION__);

	slist->instance = instance;
	slist->mypublicip = 0;
	slist->slsocket = INVALID_SOCKET;
	slist->inbuffer = 0;
	slist->inbufferlen = 0;
	slist->keylist = 0;
	slist->expectedelements = -1;
	slist->numpopularvalues = 0;
	slist->srcip = 0;
	slist->fromgamever = queryFromVersion;

	strcpy(slist->currsortinfo.sortkey, "");
	strcpy(slist->prevsortinfo.sortkey, "");
	SBSetLastListErrorPtr(slist, "");
	slist->mLanAdapterOverride = 0;
	slist->backendgameflags = QR2_USE_QUERY_CHALLENGE;

	srand((unsigned int)current_time());
	SocketStartUp();
}

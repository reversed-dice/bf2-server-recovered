// FUNCTION: BF2 0x8273e0
extern "C" unsigned long strlen(const char* s);
extern "C" int strncmp(const char* a, const char* b, unsigned long n);

typedef void* SBServer;

enum SBServerListConnectError
{
	slc_connected = 0,
	slc_disconnected = 4,
	slc_queryerror = 5
};

struct SBServerList
{
	char pad0[0x88];
	char* inbuffer;                  // 0x88
	int inbufferlen;                 // 0x90
	char pad1[0x898 - 0x94];
	void (*ListCallback)(SBServerList*, SBServerListConnectError, SBServer, void*); // 0x898
	char pad2[0x8b0 - 0x8a0];
	void* instance;                  // 0x8b0
};

extern "C" void SBSetLastListErrorPtr(SBServerList* slist, char* error);
extern "C" SBServer SBNullServer;
extern "C" void SBServerListDisconnect(SBServerList* slist);

extern "C" void ErrorDisconnect(SBServerList* slist)
{
	static char* QUERY_ERROR = (char*)"Query Error: ";

	if ((slist->inbufferlen > 0) && ((unsigned int)slist->inbufferlen > strlen(QUERY_ERROR)) &&
		(0 == strncmp(slist->inbuffer, QUERY_ERROR, strlen(QUERY_ERROR))))
	{
		SBSetLastListErrorPtr(slist, slist->inbuffer + strlen(QUERY_ERROR));
		slist->ListCallback(slist, slc_queryerror, SBNullServer, slist->instance);
	}

	slist->ListCallback(slist, slc_disconnected, SBNullServer, slist->instance);
	SBServerListDisconnect(slist);
}

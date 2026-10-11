// FUNCTION: BF2 0x826320
typedef void * ServerBrowser;
typedef int SBBool;
typedef int SBError;

extern "C" {
SBError ServerBrowserBeginUpdate2(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter, int limit, int maxServers);
SBError ServerBrowserUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter);
}

SBError ServerBrowserUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter)
{
	return ServerBrowserBeginUpdate2(sb, async, disconnectOnComplete, basicFields, numBasicFields, serverFilter, 0, 0);
}

// FUNCTION: BF2 0x826300
typedef int SBError;
typedef int SBBool;
typedef void * ServerBrowser;
extern "C" SBError ServerBrowserBeginUpdate2(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter, int updateOptions, int maxServers);

SBError ServerBrowserLimitUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter, int maxServers)
{
	return ServerBrowserBeginUpdate2(sb, async, disconnectOnComplete, basicFields, numBasicFields, serverFilter, 128, maxServers);
}

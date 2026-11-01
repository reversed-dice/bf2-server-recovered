// FUNCTION: BF2 0x817440
// upstream GameSpy/ghttp/ghttpCommon.c ghiParseProxyServer
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cassert>
typedef int GHTTPBool;
#define GHTTPFalse 0
#define GHTTPTrue 1
#define GHI_DEFAULT_PORT 80
extern "C" {
char * goastrdup(const char * src);
void gsifree(void * p);
char * strchr(const char * s, int c);
long __strtol_internal(const char * nptr, char ** endptr, int base, int group);
}

GHTTPBool ghiParseProxyServer
(
	const char * server,
	char ** proxyAddress,
	unsigned short * proxyPort
)
{
	char * strPort;

#line 457 "External/GameSpy/ghttp/ghttpCommon.c"
	assert(server && *server);
	assert(proxyAddress && !*proxyAddress);
	assert(proxyPort);

	*proxyAddress = goastrdup(server);
	if(!*proxyAddress)
		return GHTTPFalse;

	if((strPort = strchr(*proxyAddress, ':')) != NULL)
	{
		*strPort++ = '\0';

		*proxyPort = (unsigned short)__strtol_internal(strPort, (char **)0, 10, 0);
		if(!*proxyPort)
		{
			gsifree(*proxyAddress);
			*proxyAddress = NULL;
			return GHTTPFalse;
		}
	}
	else
	{
		*proxyPort = GHI_DEFAULT_PORT;
	}
	return GHTTPTrue;
}

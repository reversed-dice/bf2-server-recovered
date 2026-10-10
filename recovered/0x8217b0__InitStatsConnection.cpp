// FUNCTION: BF2 0x8217b0
// upstream GameSpy/gstats/gstats.c InitStatsConnection
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define GE_CONNECTING 6 /* Connect did no immediately complete.  Call InitStatsThink() */
typedef unsigned int gsi_time;
extern "C" {
int InitStatsAsync(int theGamePort, gsi_time theInitTimeout);
int InitStatsThink(...);
void msleep(gsi_time msec);
}

int InitStatsConnection(int gameport)
{
	int aResult = InitStatsAsync(gameport, 0);
	while (aResult == GE_CONNECTING)
	{
		aResult = InitStatsThink();
		msleep(5);
	}
	return aResult;
}

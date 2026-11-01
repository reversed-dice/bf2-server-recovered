
// FUNCTION: BF2 0x824bd0
// upstream GameSpy/serverbrowsing/sb_queryengine.c SBQueryEngineRemoveServerFromFIFOs
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;
typedef int (*TableCompareFn)(const void *elem1, const void *elem2);
typedef void (*TableElementFreeFn)(void *elem);
typedef int (*TableHashFn)(const void *elem, int numBuckets);
struct HashImplementation { DArray *buckets; int nbuckets; TableElementFreeFn freefn; TableHashFn hashfn; TableCompareFn compfn; };
typedef struct HashImplementation *HashTable;
#define MAX_QUERY_KEYS 20
typedef enum {SBFalse, SBTrue} SBBool;
typedef enum {qe_updatesuccess, qe_updatefailed, qe_engineidle, qe_challengereceived} SBQueryEngineCallbackReason;
typedef struct _SBQueryEngine *SBQueryEnginePtr;
typedef unsigned int gsi_u32;
typedef gsi_u32 goa_uint32;
typedef unsigned int gsi_time;
typedef unsigned char gsi_u8;
struct _SBServer { goa_uint32 publicip; unsigned short publicport; goa_uint32 privateip; unsigned short privateport; goa_uint32 icmpip; unsigned char state; unsigned char flags; HashTable keyvals; gsi_time updatetime; gsi_u32 querychallenge; struct _SBServer *next; gsi_u8 splitResponseBitmap; };
typedef struct _SBServer *SBServer;
typedef void (*SBEngineCallbackFn)(SBQueryEnginePtr engine, SBQueryEngineCallbackReason reason, SBServer server, void *instance);
typedef struct _SBServerFIFO { SBServer first; SBServer last; int count; } SBServerFIFO;
typedef int SOCKET;
typedef struct _SBQueryEngine { int queryversion; int maxupdates; SBServerFIFO querylist; SBServerFIFO pendinglist; SOCKET querysock; SOCKET icmpsock; goa_uint32 mypublicip; unsigned char serverkeys[MAX_QUERY_KEYS]; int numserverkeys; SBEngineCallbackFn ListCallback; void *instance; } SBQueryEngine;
extern "C" {
SBBool FIFORemove(SBServerFIFO *fifo, SBServer server) __attribute__((noinline));
SBBool FIFORemove(SBServerFIFO *fifo, SBServer server)
{
	SBServer prev = 0;
	SBServer cur = fifo->first;
	while (cur)
	{
		if (cur == server)
		{
			if (prev)
				prev->next = cur->next;
			else
				fifo->first = cur->next;
			if (fifo->last == cur)
				fifo->last = prev;
			fifo->count--;
			return SBTrue;
		}
		prev = cur;
		cur = cur->next;
	}
	return SBFalse;
}
}

void SBQueryEngineRemoveServerFromFIFOs(SBQueryEngine *engine, SBServer server)
{
	SBBool ret;

	// remove the server from the current query list
	ret = FIFORemove(&engine->querylist, server);
	if(ret)
		return; // -- Caution: assumes that server will not be in pendinglist
	FIFORemove(&engine->pendinglist, server);
}

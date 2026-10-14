// FUNCTION: BF2 0x8246d0
#define NULL 0

typedef int SBBool;
#define SBTrue 1
#define SBFalse 0

#define QTYPE_BASIC 0
#define QTYPE_FULL  1
#define QTYPE_ICMP  2

#define STATE_PENDINGBASICQUERY     0x04
#define STATE_PENDINGFULLQUERY      0x08
#define STATE_PENDINGICMPQUERY      0x10
#define STATE_PENDINGQUERYCHALLENGE 0x80
#define STATE_QUERYFAILED           0x20

struct _SBServer
{
    char pad_00[0x14];
    unsigned char state;                // 0x14
    char pad_15[0x24 - 0x15];
    int querychallenge;                 // 0x24
    struct _SBServer * next;            // 0x28
    unsigned char splitResponseBitmap;  // 0x30
};
typedef struct _SBServer * SBServer;

typedef struct _SBServerFIFO
{
	SBServer first;
	SBServer last;
	int count;
} SBServerFIFO;

typedef struct _SBQueryEngine
{
    char pad_00[0x4];
    int maxupdates;             // 0x4
    SBServerFIFO querylist;     // 0x8
    SBServerFIFO pendinglist;   // 0x20
} SBQueryEngine;

extern "C" void QEStartQuery(SBQueryEngine *engine, SBServer server);
extern "C" void FIFOAddRear(SBServerFIFO *fifo, SBServer server);

static inline void FIFOAddFront(SBServerFIFO *fifo, SBServer server)
{
	server->next = fifo->first;
	fifo->first = server;
	if (fifo->last == NULL)
		fifo->last = server;
	fifo->count++;
}

extern "C" void SBQueryEngineUpdateServer(SBQueryEngine *engine, SBServer server, int addfront, int querytype, SBBool usequerychallenge)
{
	server->state &= (unsigned char)~(STATE_PENDINGBASICQUERY|STATE_PENDINGFULLQUERY|STATE_PENDINGICMPQUERY|STATE_PENDINGQUERYCHALLENGE|STATE_QUERYFAILED);
	server->splitResponseBitmap = 0;
	server->querychallenge = 0;

	if (querytype == QTYPE_ICMP)
		return;

	if (querytype == QTYPE_BASIC)
		server->state |= STATE_PENDINGBASICQUERY;
	else if (querytype == QTYPE_FULL)
		server->state |= STATE_PENDINGFULLQUERY;
	else
		return;
		
	if (usequerychallenge && (querytype == QTYPE_FULL || querytype == QTYPE_BASIC))
		server->state |= STATE_PENDINGQUERYCHALLENGE;
	
	if (engine->querylist.count < engine->maxupdates)
	{
		QEStartQuery(engine, server);
		return;
	}
	
	if (addfront)
		FIFOAddFront(&engine->pendinglist, server);
	else
		FIFOAddRear(&engine->pendinglist, server);
}

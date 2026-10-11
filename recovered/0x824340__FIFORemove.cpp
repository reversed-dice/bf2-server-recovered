// FUNCTION: BF2 0x824340
#define NULL 0

typedef int SBBool;
#define SBTrue 1
#define SBFalse 0

struct _SBServer
{
    char pad_00[0x28];
    struct _SBServer * next;
};
typedef struct _SBServer * SBServer;

typedef struct _SBServerFIFO
{
	SBServer first;
	SBServer last;
	int count;
} SBServerFIFO;

extern "C" SBBool FIFORemove(SBServerFIFO *fifo, SBServer server)
{
	SBServer hold, prev;
	prev = NULL;
	hold = fifo->first;
	while (hold != NULL)
	{
		if (hold == server) //found
		{
			if (prev != NULL) //there is a previous..
				prev->next = hold->next;
			if (fifo->first == hold)
				fifo->first = hold->next;
			if (fifo->last == hold)
				fifo->last = prev;
			fifo->count--;
			return SBTrue;
		}
		prev = hold;
		hold = hold->next;
	}

	return SBFalse;
}

// FUNCTION: BF2 0x832c80
typedef int GPResult;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIBuffer
{
	char * buffer;
	int size;
	int len;
	int pos;
};
struct GPIMessage
{
	GPIBuffer buffer;
	int type;
	int start;
};
struct GPIPeer_s
{
	int state;
	char pad0[4];
	int sock;
	int profile;
	char pad2[0x28];
	GPIBuffer outputBuffer;
	void * messages;
	GPIPeer_s * pnext;
};
typedef struct GPIPeer_s GPIPeer;
struct GPIConnection
{
	char pad0[0x4c0];
	GPIPeer * peerList;
};
extern "C" void __assert_fail(const char * expr, const char * file, unsigned int line, const char * fn) __attribute__((noreturn));
extern "C" int ArrayLength(void * array);
extern "C" void * ArrayNth(void * array, int index);
extern "C" void ArrayDeleteAt(void * array, int index);
extern "C" void gpiSendServerBuddyMessage(GPConnection * connection, int profile, int type, const char * message);
extern "C" void gpiDestroyPeer(GPConnection * connection, GPIPeer * peer);

void gpiRemovePeer(GPConnection * connection, GPIPeer * peer)
{
	GPIPeer * pprev;
	GPIConnection * iconnection = (GPIConnection *)*connection;
	GPIMessage * message;

	if(!peer)
		__assert_fail("peer != ((void *)0)", "External/GameSpy/gp/gpiPeer.c", 551, "__PRETTY_FUNCTION__.5734");
	if(!peer)
		return;

	if(iconnection->peerList == peer)
	{
		iconnection->peerList = peer->pnext;
	}
	else
	{
		for(pprev = iconnection->peerList ; pprev->pnext != peer ; pprev = pprev->pnext)
		{
			if(pprev->pnext == 0)
			{
				__assert_fail("0", "External/GameSpy/gp/gpiPeer.c", 569, "__PRETTY_FUNCTION__.5734");
				return;
			}
		}
		pprev->pnext = peer->pnext;
	}

	while(ArrayLength(peer->messages))
	{
		message = (GPIMessage *)ArrayNth(peer->messages, 0);

		if(message->type < 100)
			gpiSendServerBuddyMessage(connection, peer->profile, message->type, message->buffer.buffer + message->start);

		ArrayDeleteAt(peer->messages, 0);
	}

	gpiDestroyPeer(connection, peer);
}

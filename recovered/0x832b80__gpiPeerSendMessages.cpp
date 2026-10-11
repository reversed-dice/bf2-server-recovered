// FUNCTION: BF2 0x832b80
typedef int GPResult;
typedef int GPEnum;
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
	char pad1[0x2c];
	GPIBuffer outputBuffer;
	void * messages;
};
typedef struct GPIPeer_s GPIPeer;
extern "C" GPResult gpiSendFromBuffer(GPConnection * connection, int sock, GPIBuffer * buffer, int * connClosed, GPEnum flag, const char * tag);
extern "C" void * ArrayNth(void * array, int index);
extern "C" void ArrayDeleteAt(void * array, int index);
extern "C" int ArrayLength(void * array);

GPResult gpiPeerSendMessages(GPConnection * connection, GPIPeer * peer)
{
	int connClosed;
	GPIMessage * message;
	GPResult result;

	if (peer->outputBuffer.len)
		return 0;

	while (ArrayLength(peer->messages))
	{
		message = (GPIMessage *)ArrayNth(peer->messages, 0);

		result = gpiSendFromBuffer(connection, peer->sock, &message->buffer, &connClosed, 0, "PR");
		if (result | connClosed)
		{
			peer->state = 0x6a;
			return 0;
		}

		if (message->buffer.pos != message->buffer.len)
			break;

		ArrayDeleteAt(peer->messages, 0);
	}

	return 0;
}

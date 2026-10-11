// FUNCTION: BF2 0x805700
typedef void * CHAT;
struct conn_s { char pad[0x870]; void * enteringChannelList; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" int ArrayLength(void *array);
extern "C" void * ArrayNth(void *array, int index);
extern "C" int strcasecmp(const char *a, const char *b, ...);
#define MAX_CHANNEL 257
struct ciChatChannel { char name[MAX_CHANNEL]; };

int ciIsEnteringChannel(CHAT chat, const char * channel)
{
	int i;
	int count;
	ciChatChannel * chatChannel;
	conn_s * connection = (conn_s *)chat;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 333, "ciIsEnteringChannel");

	count = ArrayLength(connection->enteringChannelList);
	for (i = 0 ; i < count ; i++)
	{
		chatChannel = (ciChatChannel *)ArrayNth(connection->enteringChannelList, i);
		if (chatChannel == 0)
			__assert_fail("chatChannel", "External/GameSpy/chat/chatChannel.c", 339, "ciIsEnteringChannel");
		if (strcasecmp(chatChannel->name, channel) == 0)
			return 1;
	}

	return 0;
}

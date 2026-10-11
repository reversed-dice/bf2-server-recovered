// FUNCTION: BF2 0x8052f0
extern "C" char * strncpy(char *dest, const char *src, unsigned long n);
extern "C" void * TableLookup(void *table, const void *elem);

#define MAX_CHANNEL 257

struct ciChatChannel
{
	char name[MAX_CHANNEL];
	char pad[0x228 - MAX_CHANNEL];
};

struct ciConnection
{
	char pad[0x868];
	void * channelTable;
};

extern "C" ciChatChannel * ciGetChannel(ciConnection * connection, const char * channel)
{
	ciChatChannel * chatChannel;
	ciChatChannel channelTemp;

	strncpy(channelTemp.name, channel, MAX_CHANNEL);
	channelTemp.name[MAX_CHANNEL - 1] = '\0';
	chatChannel = (ciChatChannel *)TableLookup(connection->channelTable, &channelTemp);

	return chatChannel;
}

// FUNCTION: BF2 0x806560
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));
extern "C" unsigned long strlen(const char *s);

typedef void* CHAT;
typedef void* ciConnection;

#define MAX_CHANNEL 257
#define MAX_TOPIC 128

struct ciChatChannel {
	char pad[0x1a4];
	char topic[MAX_TOPIC];
};

extern "C" ciChatChannel * ciGetChannel(ciConnection connection, const char * channel);

extern "C" const char * ciGetChannelTopic(CHAT chat, const char * channel)
{
	ciChatChannel * chatChannel;
	ciConnection connection = (ciConnection)chat;
	
	if (!(chat != ((void *)0))) {
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 684, __PRETTY_FUNCTION__);
	}
	if (!(channel != ((void *)0))) {
		__assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 686, __PRETTY_FUNCTION__);
	}
	if (!(channel[0] != '\0')) {
		__assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatChannel.c", 686, __PRETTY_FUNCTION__);
	}
	if (!(strlen(channel) < MAX_CHANNEL)) {
		__assert_fail("strlen(channel) < 257", "External/GameSpy/chat/chatChannel.c", 686, __PRETTY_FUNCTION__);
	}

	// Find this channel.
	/////////////////////
	chatChannel = ciGetChannel(connection, channel);
	if(chatChannel == 0)
		return 0;

	return chatChannel->topic;
}

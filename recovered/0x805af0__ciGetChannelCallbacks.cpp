// FUNCTION: BF2 0x805af0
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));
extern "C" unsigned long strlen(const char *s);

typedef void* CHAT;
typedef void* ciConnection;

struct ciChatChannel;
extern "C" ciChatChannel * ciGetChannel(ciConnection connection, const char * channel);

#define MAX_CHANNEL 257

extern "C" void * ciGetChannelCallbacks(CHAT chat, const char * channel)
{
	ciChatChannel * chatChannel;
	ciConnection connection = (ciConnection)chat;
	
	if (!(chat != ((void *)0))) {
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 425, __PRETTY_FUNCTION__);
	}
	if (!(channel != ((void *)0))) {
		__assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 427, __PRETTY_FUNCTION__);
	}
	if (!(channel[0] != '\0')) {
		__assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatChannel.c", 427, __PRETTY_FUNCTION__);
	}
	if (!(strlen(channel) < MAX_CHANNEL)) {
		__assert_fail("strlen(channel) < 257", "External/GameSpy/chat/chatChannel.c", 427, __PRETTY_FUNCTION__);
	}

	// Find this channel.
	/////////////////////
	chatChannel = ciGetChannel(connection, channel);
	if(chatChannel == ((void *)0))
		return ((void *)0);

	return (void *)((char *)chatChannel + 0x108);
}

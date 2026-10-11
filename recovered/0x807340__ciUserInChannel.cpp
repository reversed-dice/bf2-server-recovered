// FUNCTION: BF2 0x807340
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));
extern "C" char * strncpy(char *dest, const char *src, unsigned long n);
extern "C" void * TableLookup(void *table, const void *elem);

typedef void* CHAT;
typedef void* ciConnection;

#define MAX_NAME 128
#define MAX_CACHED_USER 24
#define MAX_CACHED_ADDRESS 64

struct ciChatChannel {
	char pad[0x168];
	void * users;
};

struct ciChatUser {
	char name[MAX_NAME];
	char user[MAX_CACHED_USER];
	char address[MAX_CACHED_ADDRESS];
	int gotUserAndAddress;
	int mode;
};

extern "C" ciChatChannel * ciGetChannel(ciConnection connection, const char * channel);

extern "C" int ciUserInChannel(CHAT chat, const char * channel, const char * user)
{
	ciChatChannel * chatChannel;
	ciChatUser chatUser;
	ciConnection connection = (ciConnection)chat;

	if (!(chat != ((void *)0))) {
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 965, __PRETTY_FUNCTION__);
	}

	chatChannel = ciGetChannel(connection, channel);
	if(chatChannel == 0)
		return 0;

	strncpy(chatUser.name, user, MAX_NAME);
	chatUser.name[MAX_NAME - 1] = '\0';

	if(TableLookup(chatChannel->users, &chatUser) == 0)
		return 0;

	return 1;
}

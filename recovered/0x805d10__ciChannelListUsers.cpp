// FUNCTION: BF2 0x805d10
#include <cstring>
#include <cstdlib>
typedef int CHATBool;
typedef void * CHAT;
#define MAX_CHANNEL 257
struct conn_s { char pad[0x868]; void * channelTable; };
struct ciChatChannel { char name[MAX_CHANNEL]; char pad1[0x168 - MAX_CHANNEL]; void * users; };
typedef void (*ciChannelListUsersCallback)(CHAT chat, const char * channel, int numUsers, const char ** users, int * modes, void * param);
typedef struct ciChannelListUsersData { CHAT chat; int numUsers; const char ** users; int * modes; } ciChannelListUsersData;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" ciChatChannel * ciGetChannel(void * connection, const char * channel);
extern "C" void TableMap(void * table, void (*mapfn)(void *, void *), void * clientData);
extern "C" void ciChannelListUsersMap(void * elem, void * clientData);
extern "C" void gsifree(void * p);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciChannelListUsers(CHAT chat, const char * channel, ciChannelListUsersCallback callback, void * param)
{
	ciChatChannel * chatChannel;
	ciChannelListUsersData data;
	conn_s * connection = (conn_s *)chat;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATFILE, 496, "ciChannelListUsers");
	if (channel == 0)
		__assert_fail("channel != ((void *)0)", CHATFILE, 498, "ciChannelListUsers");
	if (channel[0] == '\0')
		__assert_fail("channel[0] != '\\0'", CHATFILE, 498, "ciChannelListUsers");
	if (strlen(channel) >= MAX_CHANNEL)
		__assert_fail("strlen(channel) < 257", CHATFILE, 498, "ciChannelListUsers");
	if (callback == 0)
		__assert_fail("callback != ((void *)0)", CHATFILE, 499, "ciChannelListUsers");

	chatChannel = ciGetChannel(connection, channel);
	if (chatChannel == 0)
		return;

	void * users = chatChannel->users;
	data.chat = chat;
	data.numUsers = 0;
	data.users = 0;
	data.modes = 0;
	TableMap(users, ciChannelListUsersMap, &data);

	callback(chat, channel, data.numUsers, (const char **)data.users, data.modes, param);

	gsifree(data.users);
	gsifree(data.modes);
}

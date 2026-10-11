// FUNCTION: BF2 0x806bb0
#include <cstring>
#include <cstdlib>
typedef int CHATBool;
#define CHATFalse 0
#define CHATTrue 1
typedef void * CHAT;
#define MAX_NAME 128
#define MAX_CACHED_USER 24
#define MAX_CACHED_ADDRESS 64
#define strzcpy(dest, src, len) { strncpy(dest, src, (len)); (dest)[(len) - 1] = '\0'; }
struct conn_s { char pad[0x868]; void * channelTable; };
struct ciChatUser { char name[MAX_NAME]; char user[MAX_CACHED_USER]; char address[MAX_CACHED_ADDRESS]; CHATBool gotUserAndAddress; int mode; };
typedef void (*ciUserEnumChannelsCallback)(CHAT chat, const char * user, void * param);
typedef struct ciUserEnumChannelsData { CHAT chat; ciChatUser * user; void * callback; void * param; } ciUserEnumChannelsData;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void TableMap(void * table, void (*mapfn)(void *, void *), void * clientData);
extern "C" void ciUserEnumChannelsMap(void * elem, void * clientData);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciUserEnumChannels(CHAT chat, const char * user, ciUserEnumChannelsCallback callback, void * param)
{
	ciChatUser chatUser;
	ciUserEnumChannelsData data;
	conn_s * connection = (conn_s *)chat;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATFILE, 822, "ciUserEnumChannels");
	if (user == 0)
		__assert_fail("user != ((void *)0)", CHATFILE, 824, "ciUserEnumChannels");
	if (user[0] == '\0')
		__assert_fail("user[0] != '\\0'", CHATFILE, 824, "ciUserEnumChannels");
	if (strlen(user) >= MAX_NAME)
		__assert_fail("strlen(user) < 128", CHATFILE, 824, "ciUserEnumChannels");
	if (callback == 0)
		__assert_fail("callback != ((void *)0)", CHATFILE, 825, "ciUserEnumChannels");

	strzcpy(chatUser.name, user, MAX_NAME);

	data.chat = chat;
	data.user = &chatUser;
	data.callback = (void *)callback;
	data.param = param;

	TableMap(connection->channelTable, ciUserEnumChannelsMap, &data);
}

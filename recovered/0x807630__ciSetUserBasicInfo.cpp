// FUNCTION: BF2 0x807630
#include <cstring>
#include <cstdlib>
typedef int CHATBool;
typedef void * CHAT;
#define MAX_NAME 128
#define MAX_CACHED_USER 24
#define MAX_CACHED_ADDRESS 64
#define strzcpy(dest, src, len) { strncpy(dest, src, (len)); (dest)[(len) - 1] = '\0'; }
struct conn_s { char pad[0x868]; void * channelTable; };
struct ciChatUser { char name[MAX_NAME]; char user[MAX_CACHED_USER]; char address[MAX_CACHED_ADDRESS]; CHATBool gotUserAndAddress; int mode; };
typedef struct ciSetUserBasicInfoData { ciChatUser * chatUser; char * user; char * address; } ciSetUserBasicInfoData;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void TableMap(void * table, void (*mapfn)(void *, void *), void * clientData);
extern "C" void ciSetUserBasicInfoMap(void * elem, void * clientData);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciSetUserBasicInfo(CHAT chat, const char * nick, const char * user, const char * address)
{
	ciChatUser chatUser;
	ciSetUserBasicInfoData data;
	conn_s * connection = (conn_s *)chat;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATFILE, 1085, "ciSetUserBasicInfo");
	if (nick == 0)
		__assert_fail("nick != ((void *)0)", CHATFILE, 1087, "ciSetUserBasicInfo");
	if (nick[0] == '\0')
		__assert_fail("nick[0] != '\\0'", CHATFILE, 1087, "ciSetUserBasicInfo");
	if (strlen(nick) >= MAX_NAME)
		__assert_fail("strlen(nick) < 128", CHATFILE, 1087, "ciSetUserBasicInfo");

	strzcpy(chatUser.name, nick, MAX_NAME);

	data.chatUser = &chatUser;
	data.user = (char *)user;
	data.address = (char *)address;

	TableMap(connection->channelTable, ciSetUserBasicInfoMap, &data);
}

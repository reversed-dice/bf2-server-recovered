// FUNCTION: BF2 0x806f80
#include <cstring>
#include <cstdlib>
typedef int CHATBool;
typedef void * CHAT;
#define MAX_NAME 128
struct conn_s { char pad[0x868]; void * channelTable; };
typedef struct ciUserChangedNickData { CHAT chat; const char * oldNick; const char * newNick; } ciUserChangedNickData;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void TableMap(void * table, void (*mapfn)(void *, void *), void * clientData);
extern "C" void ciUserChangeNickMap(void * elem, void * clientData);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciUserChangedNick(CHAT chat, const char * oldNick, const char * newNick)
{
	ciUserChangedNickData data;
	conn_s * connection = (conn_s *)chat;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATFILE, 902, "ciUserChangedNick");
	if (oldNick == 0)
		__assert_fail("oldNick != ((void *)0)", CHATFILE, 904, "ciUserChangedNick");
	if (oldNick[0] == '\0')
		__assert_fail("oldNick[0] != '\\0'", CHATFILE, 904, "ciUserChangedNick");
	if (strlen(oldNick) >= MAX_NAME)
		__assert_fail("strlen(oldNick) < 128", CHATFILE, 904, "ciUserChangedNick");
	if (newNick == 0)
		__assert_fail("newNick != ((void *)0)", CHATFILE, 905, "ciUserChangedNick");
	if (newNick[0] == '\0')
		__assert_fail("newNick[0] != '\\0'", CHATFILE, 905, "ciUserChangedNick");
	if (strlen(newNick) >= MAX_NAME)
		__assert_fail("strlen(newNick) < 128", CHATFILE, 905, "ciUserChangedNick");

	data.chat = chat;
	data.oldNick = oldNick;
	data.newNick = newNick;

	TableMap(connection->channelTable, ciUserChangeNickMap, &data);
}

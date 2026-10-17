// FUNCTION: BF2 0x807840
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
typedef struct ciGetUserBasicInfoData { CHATBool found; ciChatUser * chatUser; char * user; char * address; } ciGetUserBasicInfoData;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void TableMap(void * table, void (*mapfn)(void *, void *), void * clientData);
extern "C" void ciGetUserBasicInfoMap(void * elem, void * clientData);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

// compile-state padding: 22 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
extern "C" int __pad_15(int x) { int y = x * 15 + 3; return y; }
extern "C" int __pad_16(int x) { int y = x * 16 + 3; return y; }
extern "C" int __pad_17(int x) { int y = x * 17 + 3; return y; }
extern "C" int __pad_18(int x) { int y = x * 18 + 3; return y; }
extern "C" int __pad_19(int x) { int y = x * 19 + 3; return y; }
extern "C" int __pad_20(int x) { int y = x * 20 + 3; return y; }
extern "C" int __pad_21(int x) { int y = x * 21 + 3; return y; }
CHATBool ciGetUserBasicInfoA(CHAT chat, const char * nick, const char ** user, const char ** address)
{
	ciChatUser chatUser;
	ciGetUserBasicInfoData data;
	conn_s * connection = (conn_s *)chat;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATFILE, 1147, "ciGetUserBasicInfoA");
	if (nick == 0)
		__assert_fail("nick != ((void *)0)", CHATFILE, 1149, "ciGetUserBasicInfoA");
	if (nick[0] == '\0')
		__assert_fail("nick[0] != '\\0'", CHATFILE, 1149, "ciGetUserBasicInfoA");
	if (strlen(nick) >= MAX_NAME)
		__assert_fail("strlen(nick) < 128", CHATFILE, 1149, "ciGetUserBasicInfoA");

	strzcpy(chatUser.name, nick, MAX_NAME);

	data.chatUser = &chatUser;
	data.found = CHATFalse;

	TableMap(connection->channelTable, ciGetUserBasicInfoMap, &data);

	if (!data.found)
		return CHATFalse;

	if (user)
		*user = data.user;
	if (address)
		*address = data.address;

	return CHATTrue;
}

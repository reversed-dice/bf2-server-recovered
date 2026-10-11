// FUNCTION: BF2 0x810ed0
typedef int CHATBool;
#define CHATTrue 1
typedef void * CHAT;
typedef void (*ciChannelListUsersCallback)(CHAT chat, CHATBool success, const char * channel, int numUsers, const char ** users, int * modes, void * param);
typedef struct ciEnumUsersData { ciChannelListUsersCallback callback; void * param; } ciEnumUsersData;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
static const char * const CHATMAINFILE = "External/GameSpy/chat/chatMain.c";

void ciEnumUsersCallback(CHAT chat, const char * channel, int numUsers, const char ** users, int * modes, void * param)
{
	ciEnumUsersData * data;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATMAINFILE, 2064, "__PRETTY_FUNCTION__.6450");
	if (channel == 0)
		__assert_fail("channel != ((void *)0)", CHATMAINFILE, 2068, "__PRETTY_FUNCTION__.6450");
	if (channel[0] == '\0')
		__assert_fail("channel[0] != '\\0'", CHATMAINFILE, 2068, "__PRETTY_FUNCTION__.6450");
	if (numUsers < 0)
		__assert_fail("numUsers >= 0", CHATMAINFILE, 2069, "__PRETTY_FUNCTION__.6450");
	if (param == 0)
		__assert_fail("param != ((void *)0)", CHATMAINFILE, 2085, "__PRETTY_FUNCTION__.6450");

	data = (ciEnumUsersData *)param;
	if (data->callback == 0)
		__assert_fail("data->callback != ((void *)0)", CHATMAINFILE, 2090, "__PRETTY_FUNCTION__.6450");

	data->callback(chat, CHATTrue, channel, numUsers, users, modes, data->param);
}

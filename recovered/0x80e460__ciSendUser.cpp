// FUNCTION: BF2 0x80e460
typedef void * CHAT;
struct conn_s { char pad0[0x3f0]; char name[0x80]; char user[0x348]; char server[0x20]; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void ciSocketSendf(void * sock, const char * format, ...);
static const char * const CHATMAINFILE = "External/GameSpy/chat/chatMain.c";

void ciSendUser(CHAT chat)
{
	conn_s * connection;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATMAINFILE, 257, "__PRETTY_FUNCTION__.5620");

	connection = (conn_s *)chat;
	ciSocketSendf((void *)((char *)connection + 0x30), "USER %s %s %s :%s",
		connection->user,
		"127.0.0.1",
		connection->server,
		connection->name);
}

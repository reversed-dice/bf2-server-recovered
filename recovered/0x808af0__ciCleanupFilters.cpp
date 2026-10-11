// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x808af0
typedef void * CHAT;
struct conn_s { char pad[0x878]; void * filterList; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void ciFilterTimedout(CHAT chat, void * filter);
static const char * const CHATFILE = "External/GameSpy/chat/chatHandlers.c";

void ciCleanupFilters(CHAT chat)
{
	conn_s * connection;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATFILE, 851, "__PRETTY_FUNCTION__.5745");

	connection = (conn_s *)chat;

	while (connection->filterList)
		ciFilterTimedout(chat, connection->filterList);
}

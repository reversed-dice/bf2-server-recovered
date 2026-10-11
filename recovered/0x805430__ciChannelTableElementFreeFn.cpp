// FUNCTION: BF2 0x805430
struct ciChatChannel { char name[257]; char pad1[0x168 - 257]; void * users; char pad2[0x198 - 0x170]; char * password; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void gsifree(void * p);
extern "C" void TableFree(void * table);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciChannelTableElementFreeFn(void * elem)
{
	ciChatChannel * channel;

	if (elem == 0)
		__assert_fail("elem != ((void *)0)", CHATFILE, 210, "__PRETTY_FUNCTION__.5392");

	channel = (ciChatChannel *)elem;
	gsifree(channel->password);
	if (channel->users)
		TableFree(channel->users);
}

// FUNCTION: BF2 0x8089a0
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) throw () __attribute__((__noreturn__));

typedef void * CHAT;
typedef unsigned int gsi_time;

struct ciServerMessageFilter
{
    char pad_00[0x4];
    gsi_time timeout;                   // 0x4
    char pad_08[0x38];
    struct ciServerMessageFilter * pnext; // 0x40
};

struct ciConnection
{
    char pad_00[0x878];
    ciServerMessageFilter * filterList;
};

extern "C" gsi_time current_time(...);
extern "C" void ciFilterTimedout(CHAT chat, ciServerMessageFilter * filter);

extern "C" void ciFilterThink(CHAT chat)
{
	ciServerMessageFilter * filter;
	ciServerMessageFilter * pnext;
	gsi_time now;

#line 794 "External/GameSpy/chat/chatHandlers.c"
	if (!chat)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 794, __PRETTY_FUNCTION__);
	ciConnection * connection = (ciConnection *)chat;

	now = current_time();

	for(filter = connection->filterList ; filter != 0 ; filter = pnext)
	{
		pnext = filter->pnext;
		if(now > filter->timeout)
		{
			ciFilterTimedout(chat, filter);
		}
	}
}

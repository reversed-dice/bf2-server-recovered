// FUNCTION: BF2 0x808a70
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) throw () __attribute__((__noreturn__));

typedef void * CHAT;
typedef int CHATBool;

#define CHATFalse 0
#define CHATTrue 1

struct ciServerMessageFilter
{
    char pad_00[0x38];
    int ID;                         // 0x38
    struct ciServerMessageFilter * pnext; // 0x40
};

struct ciConnection
{
    char pad_00[0x878];
    ciServerMessageFilter * filterList;
};

extern "C" CHATBool ciCheckFiltersForID(CHAT chat, int ID)
{
#line 832 "External/GameSpy/chat/chatHandlers.c"
	if (!chat)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 832, __PRETTY_FUNCTION__);
	ciConnection * connection = (ciConnection *)chat;

#line 834 "External/GameSpy/chat/chatHandlers.c"
	if (ID <= 0)
		__assert_fail("ID > 0", "External/GameSpy/chat/chatHandlers.c", 834, __PRETTY_FUNCTION__);

	ciServerMessageFilter * filter;
	for(filter = connection->filterList ; filter != 0 ; filter = filter->pnext)
	{
		if(filter->ID == ID)
			return CHATTrue;
	}

	return CHATFalse;
}

// FUNCTION: BF2 0x807c40
typedef void * CHAT;
typedef unsigned int gsi_time;

extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
extern "C" int strcasecmp(const char *, const char *, ...);
extern "C" gsi_time current_time(...);

struct ciServerMessageFilter
{
	int type;
	gsi_time timeout;
	char * name;
	char * name2;
	void * callback;
	void * callback2;
	void * param;
	void * data;
	int ID;
	struct ciServerMessageFilter * pnext;
};

struct ciConnection
{
	char pad_00[0x878];
	ciServerMessageFilter * filterList;
};

struct ciFilterMatch
{
	int type;
	const char * name;
	const char * name2;
};

#define FILTER_TIMEOUT 60000
#define NUM_TYPES 17

extern "C" ciServerMessageFilter * ciFindFilter(CHAT chat, int numMatches, ciFilterMatch * matches)
{
	int i;
	const char * name;
	const char * name2;
	ciServerMessageFilter * filter;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x15b, "ciFindFilter");
	ciConnection * connection = (ciConnection *)chat;

	if (numMatches <= 0)
		__assert_fail("numMatches > 0", "External/GameSpy/chat/chatHandlers.c", 0x15d, "ciFindFilter");
	if (matches == 0)
		__assert_fail("matches", "External/GameSpy/chat/chatHandlers.c", 0x15e, "ciFindFilter");

	for(filter = connection->filterList ; filter != 0 ; filter = filter->pnext)
	{
		for(i = 0 ; i < numMatches ; i++)
		{
			if ((unsigned int)matches[i].type > 0x10u)
				__assert_fail("(matches[i].type >= 0) && (matches[i].type < NUM_TYPES)", "External/GameSpy/chat/chatHandlers.c", 0x164, "ciFindFilter");
			if(filter->type == matches[i].type)
			{
				name = matches[i].name;
				name2 = matches[i].name2;
				if((!name && !filter->name) || (name && filter->name && (strcasecmp(name, filter->name) == 0)))
				{
					if((!name2 && !filter->name2) || (name2 && filter->name2 && (strcasecmp(name2, filter->name2) == 0)))
					{
						filter->timeout = (current_time() + FILTER_TIMEOUT);

						return filter;
					}
				}
			}
		}
	}

	return 0;
}

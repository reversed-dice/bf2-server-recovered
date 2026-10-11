// FUNCTION: BF2 0x80c8f0
#include <string.h>

extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) throw () __attribute__((__noreturn__));

typedef void * CHAT;
typedef int CHATBool;

#define CHATTrue 1
#define TYPE_LIST 0

typedef struct ciFilterMatch
{
    int type;
    char pad[20];
} ciFilterMatch;

typedef struct ciServerMessageFilter
{
    char pad[0x30];
    void * data;
} ciServerMessageFilter;

typedef struct LISTData
{
    CHATBool gotStart;
} LISTData;

extern "C" ciServerMessageFilter * ciFindFilter(CHAT chat, int count, ciFilterMatch * match);

extern "C" void ciRplListStartHandler(CHAT chat, const void * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;

	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_LIST;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != 0)
	{
		LISTData * data = (LISTData *)filter->data;
#line 3567 "External/GameSpy/chat/chatHandlers.c"
		if (!data)
			__assert_fail("data != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 3567, __PRETTY_FUNCTION__);

		data->gotStart = CHATTrue;
	}
	(void)message;
}

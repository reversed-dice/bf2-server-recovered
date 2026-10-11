// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x813fa0
#include <cstring>
typedef int CHATBool;
#define CHATFalse 0
#define CHATTrue 1
struct ciServerMessage { char pad[0x100]; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void * gsimalloc(unsigned long size);
extern "C" void gsifree(void * p);
extern "C" CHATBool ciAddParam(char * param, ciServerMessage * message);
static const char * const SOCKETFILE = "External/GameSpy/chat/chatSocket.c";

CHATBool ciParseParam(const char *pText, ciServerMessage * message)
{
	char * colon;
	char * str;
	char * p;

	if (pText == 0)
		__assert_fail("pText != ((void *)0)", SOCKETFILE, 673, "__PRETTY_FUNCTION__.5376");
	if (message == 0)
		__assert_fail("message != ((void *)0)", SOCKETFILE, 674, "__PRETTY_FUNCTION__.5376");

	p = (char *)gsimalloc(strlen(pText) + 1);
	if (p == 0)
		return CHATFalse;
	strcpy(p, pText);

	if (p[0] == ':')
	{
		p[0] = '\0';
		colon = &p[1];
	}
	else
	{
		colon = strstr(p, " :");
		if (colon != 0)
		{
			*colon = '\0';
			colon += 2;
		}
	}

	str = strtok(p, " ");
	while (str != 0)
	{
		if (!ciAddParam(str, message))
		{
			gsifree(p);
			return CHATFalse;
		}

		str = strtok(0, " ");
	}

	if (colon != 0)
	{
		if (!ciAddParam(colon, message))
		{
			gsifree(p);
			return CHATFalse;
		}
	}

	gsifree(p);
	return CHATTrue;
}

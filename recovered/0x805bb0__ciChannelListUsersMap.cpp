// FUNCTION: BF2 0x805bb0
#include <cstring>
typedef int CHATBool;
struct ciChatUser { char name[128]; char user[24]; char address[64]; CHATBool gotUserAndAddress; int mode; };
typedef struct ciChannelListUsersData { void * chat; int numUsers; char ** users; int * modes; } ciChannelListUsersData;
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void * gsirealloc(void * p, unsigned long size);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciChannelListUsersMap(void * elem, void * clientData)
{
	ciChatUser * user;
	ciChannelListUsersData * data;
	void * tempPtr;

	if (elem == 0)
		__assert_fail("elem != ((void *)0)", CHATFILE, 444, "__PRETTY_FUNCTION__.5555");
	if (clientData == 0)
		__assert_fail("clientData != ((void *)0)", CHATFILE, 445, "__PRETTY_FUNCTION__.5555");

	user = (ciChatUser *)elem;
	if (user->name[0] == '\0')
		__assert_fail("user->name[0] != '\\0'", CHATFILE, 450, "__PRETTY_FUNCTION__.5555");
	if (strlen(user->name) >= 128)
		__assert_fail("strlen(user->name) < 128", CHATFILE, 450, "__PRETTY_FUNCTION__.5555");

	data = (ciChannelListUsersData *)clientData;
	if (data->numUsers < 0)
		__assert_fail("data->numUsers >= 0", CHATFILE, 455, "__PRETTY_FUNCTION__.5555");

	tempPtr = gsirealloc(data->users, sizeof(char *) * (data->numUsers + 1));
	if (tempPtr == 0)
	{
		__assert_fail("0", CHATFILE, 473, "__PRETTY_FUNCTION__.5555");
		return;
	}
	data->users = (char **)tempPtr;
	tempPtr = gsirealloc(data->modes, sizeof(int) * (data->numUsers + 1));
	if (tempPtr == 0)
	{
		__assert_fail("0", CHATFILE, 480, "__PRETTY_FUNCTION__.5555");
		return;
	}
	data->modes = (int *)tempPtr;

	data->users[data->numUsers] = user->name;
	data->modes[data->numUsers] = user->mode;
	data->numUsers++;
}

// FUNCTION: BF2 0x82ef30
// BF2_FLAGS: -fcrossjumping
typedef int GPResult;
typedef int GPEnum;
typedef int GPProfile;
typedef void* GPConnection;
typedef void (*GPCallbackFn)(GPConnection* connection, void* arg, void* param);

#define GPIFalse 0

struct GPICallback { GPCallbackFn callback; void* param; };
struct GPICallbackData { GPICallback callback; void* arg; int type; };
struct GPRecvBuddyMessageArg { char pad[8]; char* message; };
struct GPGetUserNicksResponseArg { char pad[0x38]; int numNicks; char pad2[4]; char** nicks; char** uniquenicks; };
struct GPFindPlayersResponseArg { char pad[0x10]; void* matches; };
struct GPTransferCallbackArg { char pad[0x10]; char* message; };
struct GPGetReverseBuddiesResponseArg { char pad[8]; void* profiles; };
struct GPSuggestUniqueNickResponseArg { int pad0; int numSuggestedNicks; char** suggestedNicks; };
struct GPRecvBuddyRevokeArg { int profile; };

extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" void gsifree(void* ptr);
extern "C" GPResult gpiDeleteBuddy(GPConnection* connection, GPProfile profile, GPEnum blocking);

#define freeclear(mem) { gsifree(mem); (mem) = 0; }

void gpiCallCallback(GPConnection* connection, GPICallbackData* data)
{
	if (data->callback.callback == 0)
		__assert_fail("data->callback.callback != ((void *)0)", "External/GameSpy/gp/gpiCallback.c", 0x6e, __PRETTY_FUNCTION__);
	if (data->arg == 0)
		__assert_fail("data->arg != ((void *)0)", "External/GameSpy/gp/gpiCallback.c", 0x6f, __PRETTY_FUNCTION__);
	data->callback.callback(connection, data->arg, data->callback.param);
	if (data->type == 2)
	{
		freeclear(((GPRecvBuddyMessageArg*)data->arg)->message);
	}
	else if (data->type == 0xb)
	{
		freeclear(((GPRecvBuddyMessageArg*)data->arg)->message);
	}
	else if (data->type == 3)
	{
		int i;
		GPGetUserNicksResponseArg* arg = (GPGetUserNicksResponseArg*)data->arg;

		for (i = 0; i < arg->numNicks; i++)
		{
			freeclear(arg->nicks[i]);
			freeclear(arg->uniquenicks[i]);
		}
		freeclear(arg->nicks);
		freeclear(arg->uniquenicks);
	}
	else if (data->type == 4)
	{
		GPFindPlayersResponseArg* arg = (GPFindPlayersResponseArg*)data->arg;

		freeclear(arg->matches);
	}
	else if (data->type == 7)
	{
		GPTransferCallbackArg* arg = (GPTransferCallbackArg*)data->arg;

		if (arg->message)
			freeclear(arg->message);
	}
	else if (data->type == 8)
	{
		GPGetReverseBuddiesResponseArg* arg = (GPGetReverseBuddiesResponseArg*)data->arg;

		if (arg->profiles)
			freeclear(arg->profiles);
	}
	else if (data->type == 9)
	{
		int i;
		GPSuggestUniqueNickResponseArg* arg = (GPSuggestUniqueNickResponseArg*)data->arg;

		for (i = 0; i < arg->numSuggestedNicks; i++)
		{
			freeclear(arg->suggestedNicks[i]);
		}
		freeclear(arg->suggestedNicks);
	}
	else if (data->type == 0xc)
	{
		GPRecvBuddyRevokeArg* arg = (GPRecvBuddyRevokeArg*)data->arg;

		gpiDeleteBuddy(connection, arg->profile, GPIFalse);
	}
	freeclear(data->arg);
	freeclear(data);
}

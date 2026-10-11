// FUNCTION: BF2 0x80aa10
typedef int CHATBool;
typedef void * CHAT;

struct ciCallbackUserPartedParams { char * channel; char * user; int why; char * reason; char * kicker; };
struct ciCallbackUserListUpdatedParams { char * channel; };

struct chatChannelCallbacks {
	void * channelMessage;
	void * kicked;
	void * userJoined;
	void * userParted;
	void * userChangedNick;
	void * topicChanged;
	void * channelModeChanged;
	void * userModeChanged;
	void * userListUpdated;
	void * newUserList;
	void * broadcastKeyChanged;
	void * param;
};

extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void ciUserLeftChannel(CHAT chat, const char * user, const char * channel);
extern "C" int ciWasJoinCallbackCalled(CHAT chat, const char * channel);
extern "C" chatChannelCallbacks * ciGetChannelCallbacks(CHAT chat, const char * channel);
extern "C" CHATBool ciAddCallback_(CHAT chat, int type, void * callback, void * callbackParams, void * param, int ID, const char * channel, unsigned long callbackParamsSize);

void ciKillEnumChannelsCallback(CHAT chat, const char * user, const char * channel, void * param)
{
	chatChannelCallbacks * callbacks;
	char * reason = (char *)param;

	if (user == 0)
		__assert_fail("user != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x828, "__PRETTY_FUNCTION__.6525");
	if (user[0] == '\0')
		__assert_fail("user[0] != '\\0'", "External/GameSpy/chat/chatHandlers.c", 0x828, "__PRETTY_FUNCTION__.6525");
	if (channel == 0)
		__assert_fail("channel != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x829, "__PRETTY_FUNCTION__.6525");
	if (channel[0] == '\0')
		__assert_fail("channel[0] != '\\0'", "External/GameSpy/chat/chatHandlers.c", 0x829, "__PRETTY_FUNCTION__.6525");
	if (reason == 0)
		__assert_fail("reason != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x82a, "__PRETTY_FUNCTION__.6525");

	ciUserLeftChannel(chat, user, channel);

	if (ciWasJoinCallbackCalled(chat, channel))
	{
		callbacks = ciGetChannelCallbacks(chat, channel);
		if (callbacks != 0)
		{
			if (callbacks->userParted != 0)
			{
				ciCallbackUserPartedParams params;
				params.channel = (char *)channel;
				params.user = (char *)user;
				params.why = 3;
				params.reason = (char *)reason;
				params.kicker = 0;
				ciAddCallback_(chat, 7, callbacks->userParted, &params, callbacks->param, 0, channel, sizeof(ciCallbackUserPartedParams));
			}

			if (callbacks->userListUpdated != 0)
			{
				ciCallbackUserListUpdatedParams params;
				params.channel = (char *)channel;
				ciAddCallback_(chat, 0xc, callbacks->userListUpdated, &params, callbacks->param, 0, channel, sizeof(ciCallbackUserListUpdatedParams));
			}
		}
	}
}

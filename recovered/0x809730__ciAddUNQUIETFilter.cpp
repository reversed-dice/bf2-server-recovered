// FUNCTION: BF2 0x809730
// upstream GameSpy/Chat/chatHandlers.c ciAddUNQUIETFilter
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void * CHAT;
typedef enum { CHATFalse, CHATTrue } CHATBool;
typedef struct CHATChannelMode { CHATBool InviteOnly; CHATBool Private; CHATBool Secret; CHATBool Moderated; CHATBool NoExternalMessages; CHATBool OnlyOpsChangeTopic; CHATBool OpsObeyChannelLimit; int Limit; } CHATChannelMode;
typedef struct NAMESData { int len; int numUsers; char ** users; int * modes; } NAMESData;
enum { TYPE_LIST, TYPE_JOIN, TYPE_TOPIC, TYPE_NAMES, TYPE_WHOIS, TYPE_CMODE, TYPE_UMODE, TYPE_BAN, TYPE_GETBAN, TYPE_NICK, TYPE_WHO, TYPE_CWHO, TYPE_GETKEY, TYPE_GETCKEY, TYPE_GETCHANKEY, TYPE_UNQUIET, TYPE_CDKEY, TYPE_GETUDPRELAY, NUM_TYPES };
#define gsi_char char
typedef void (* chatBroadcastKeyChanged)(CHAT chat, const gsi_char * channel, const gsi_char * user, const gsi_char * key, const gsi_char * value, void * param);
typedef void (* chatChannelMessage)(CHAT chat, const gsi_char * channel, const gsi_char * user, const gsi_char * message, int type, void * param);
typedef void (* chatChannelModeChanged)(CHAT chat, const gsi_char * channel, CHATChannelMode * mode, void * param);
typedef void (* chatKicked)(CHAT chat, const gsi_char * channel, const gsi_char * user, const gsi_char * reason, void * param);
typedef void (* chatNewUserList)(CHAT chat, const gsi_char * channel, int num, const gsi_char ** users, int * modes, void * param);
typedef void (* chatTopicChanged)(CHAT chat, const gsi_char * channel, const gsi_char * topic, void * param);
typedef void (* chatUserChangedNick)(CHAT chat, const gsi_char * channel, const gsi_char * oldNick, const gsi_char * newNick, void * param);
typedef void (* chatUserJoined)(CHAT chat, const gsi_char * channel, const gsi_char * user, int mode, void * param);
typedef void (* chatUserListUpdated)(CHAT chat, const gsi_char * channel, void * param);
typedef void (* chatUserModeChanged)(CHAT chat, const gsi_char * channel, const gsi_char * user, int mode, void * param);
typedef void (* chatUserParted)(CHAT chat, const gsi_char * channel, const gsi_char * user, int why, const gsi_char * reason, const gsi_char * kicker, void * param);
typedef struct chatChannelCallbacks { chatChannelMessage channelMessage; chatKicked kicked; chatUserJoined userJoined; chatUserParted userParted; chatUserChangedNick userChangedNick; chatTopicChanged topicChanged; chatChannelModeChanged channelModeChanged; chatUserModeChanged userModeChanged; chatUserListUpdated userListUpdated; chatNewUserList newUserList; chatBroadcastKeyChanged broadcastKeyChanged; void * param; } chatChannelCallbacks;
#define gsimalloc malloc
extern "C" {
int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data);
chatChannelCallbacks * ciGetChannelCallbacks(CHAT chat, const char * channel);
void* gsimalloc(unsigned long);
}

int ciAddUNQUIETFilter(CHAT chat, const char * channel)
{
	chatChannelCallbacks * callbacks;
	NAMESData * data;

	callbacks = ciGetChannelCallbacks(chat, channel);
	if(!callbacks || !callbacks->newUserList)
		return 0;

	data = (NAMESData *)gsimalloc(sizeof(NAMESData));
	if(data == NULL)
		return 0; //ERRCON
	memset(data, 0, sizeof(NAMESData));

	return ciAddFilter(chat, TYPE_UNQUIET, channel, NULL, (void*)callbacks->newUserList, NULL, callbacks->param, data);
}

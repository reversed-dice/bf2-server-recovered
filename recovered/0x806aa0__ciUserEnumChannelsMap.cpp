// FUNCTION: BF2 0x806aa0
#include <cstring>
#include <cstdlib>
typedef int CHATBool;
#define CHATFalse 0
#define CHATTrue 1
typedef void * CHAT;
struct DArrayImplementation { int count, capacity; int elemsize; int growby; void (*elemfreefn)(void *); void *list; };
typedef DArrayImplementation *DArray;
struct HashImplementation { DArray *buckets; int nbuckets; void (*freefn)(void *); int (*hashfn)(const void *, int); int (*compfn)(const void *, const void *); };
typedef HashImplementation *HashTable;
#define MAX_CHANNEL 257
#define MAX_TOPIC 128
typedef void (* chatBroadcastKeyChanged)(CHAT, const char *, const char *, const char *, const char *, void *);
typedef void (* chatChannelMessage)(CHAT, const char *, const char *, const char *, int, void *);
typedef void (* chatChannelModeChanged)(CHAT, const char *, void *, void *);
typedef void (* chatKicked)(CHAT, const char *, const char *, const char *, void *);
typedef void (* chatNewUserList)(CHAT, const char *, int, const char **, int *, void *);
typedef void (* chatTopicChanged)(CHAT, const char *, const char *, void *);
typedef void (* chatUserChangedNick)(CHAT, const char *, const char *, const char *, void *);
typedef void (* chatUserJoined)(CHAT, const char *, const char *, int, void *);
typedef void (* chatUserListUpdated)(CHAT, const char *, void *);
typedef void (* chatUserModeChanged)(CHAT, const char *, const char *, int, void *);
typedef void (* chatUserParted)(CHAT, const char *, const char *, int, const char *, const char *, void *);
typedef struct chatChannelCallbacks { chatChannelMessage channelMessage; chatKicked kicked; chatUserJoined userJoined; chatUserParted userParted; chatUserChangedNick userChangedNick; chatTopicChanged topicChanged; chatChannelModeChanged channelModeChanged; chatUserModeChanged userModeChanged; chatUserListUpdated userListUpdated; chatNewUserList newUserList; chatBroadcastKeyChanged broadcastKeyChanged; void * param; } chatChannelCallbacks;
typedef struct CHATChannelMode { CHATBool InviteOnly; CHATBool Private; CHATBool Secret; CHATBool Moderated; CHATBool NoExternalMessages; CHATBool OnlyOpsChangeTopic; CHATBool OpsObeyChannelLimit; int Limit; } CHATChannelMode;
typedef struct ciChatChannel { char name[MAX_CHANNEL]; chatChannelCallbacks callbacks; HashTable users; CHATChannelMode mode; CHATBool gotMode; char * password; CHATBool joinCallbackCalled; char topic[MAX_TOPIC]; } ciChatChannel;
struct ciChatUser { char name[128]; char user[128]; char address[128]; CHATBool gotUserAndAddress; int mode; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void * TableLookup(HashTable table, const void *elem);
extern "C" void TableMapSafe(HashTable table, void (*mapfn)(void *, void *), void *clientData);
extern "C" void TableRemove(HashTable table, const void *elem);
extern "C" int ciAddCallback_(CHAT chat, int type, void *callback, void *callbackParams, void *param, int ID, const char *channel, unsigned int callbackParamsSize);
extern "C" void ciClearAllUsersUsersMap(void *elem, void *clientData);
extern "C" int ArrayLength(void *array);
extern "C" void * ArrayNth(void *array, int index);
extern "C" int strcasecmp(const char *a, const char *b);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

typedef struct ciUserEnumChannelsData { CHAT chat; ciChatUser * user; void * callback; void * param; } ciUserEnumChannelsData;

// upstream GameSpy/Chat/chatChannel.c ciUserEnumChannelsMap
void ciUserEnumChannelsMap(void * elem, void * clientData)
{
	ciChatChannel * channel;
	ciChatUser * user;
	ciUserEnumChannelsData * data;

	if (elem == 0)
		__assert_fail("elem != ((void *)0)", CHATFILE, 792, "ciUserEnumChannelsMap");
	if (clientData == 0)
		__assert_fail("clientData != ((void *)0)", CHATFILE, 793, "ciUserEnumChannelsMap");

	channel = (ciChatChannel *)elem;
	if (channel->users == 0)
		__assert_fail("channel->users != ((void *)0)", CHATFILE, 798, "ciUserEnumChannelsMap");

	data = (ciUserEnumChannelsData *)clientData;
	if (data->user == 0)
		__assert_fail("data->user != ((void *)0)", CHATFILE, 803, "ciUserEnumChannelsMap");
	if (data->user->name[0] == 0)
		__assert_fail("data->user->name[0] != '\\0'", CHATFILE, 804, "ciUserEnumChannelsMap");
	if (data->callback == 0)
		__assert_fail("data->callback != ((void *)0)", CHATFILE, 805, "ciUserEnumChannelsMap");

	user = (ciChatUser *)TableLookup(channel->users, data->user);
	if (user != 0)
	{
		void (*cb)(CHAT, const char *, const char *, void *) = (void (*)(CHAT, const char *, const char *, void *))data->callback;
		cb(data->chat, data->user->name, channel->name, data->param);
	}
}

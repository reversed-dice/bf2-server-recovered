// FUNCTION: BF2 0x8059c0
#include <cstring>
#include <cstdlib>
typedef int CHATBool;
typedef void * CHAT;
#define MAX_CHANNEL 257
#define MAX_TOPIC 128
#define NOT_FOUND -1
#define strzcpy(dest, src, len) { strncpy(dest, src, (len)); (dest)[(len) - 1] = '\0'; }
struct DArrayImplementation { int count, capacity; int elemsize; int growby; void (*elemfreefn)(void *); void *list; };
typedef DArrayImplementation *DArray;
struct HashImplementation { DArray *buckets; int nbuckets; void (*freefn)(void *); int (*hashfn)(const void *, int); int (*compfn)(const void *, const void *); };
typedef HashImplementation *HashTable;
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
struct conn_s { char pad[0x868]; void * channelTable; void * enteringChannelList; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" int ArraySearch(void *array, const void *elem, int (*cmp)(const void *, const void *), int a, int b);
extern "C" void ArrayRemoveAt(void *array, int index);
extern "C" int TableRemove(void *table, const void *elem);
extern "C" int ciEnteringChannelComparator(const void *param1, const void *param2);
static const char * const CHATFILE = "External/GameSpy/chat/chatChannel.c";

void ciChannelLeft(CHAT chat, const char * channel)
{
	ciChatChannel chatChannel;
	int index;
	conn_s * connection = (conn_s *)chat;

	if (chat == 0)
		__assert_fail("chat != ((void *)0)", CHATFILE, 393, "ciChannelLeft");
	if (channel == 0)
		__assert_fail("channel != ((void *)0)", CHATFILE, 395, "ciChannelLeft");
	if (channel[0] == '\0')
		__assert_fail("channel[0] != '\\0'", CHATFILE, 395, "ciChannelLeft");
	if (strlen(channel) >= MAX_CHANNEL)
		__assert_fail("strlen(channel) < 257", CHATFILE, 395, "ciChannelLeft");

	strzcpy(chatChannel.name, channel, MAX_CHANNEL);

	index = ArraySearch(connection->enteringChannelList, &chatChannel, ciEnteringChannelComparator, 0, 0);
	if (index != NOT_FOUND)
	{
		ArrayRemoveAt(connection->enteringChannelList, index);
	}
	else
	{
		TableRemove(connection->channelTable, &chatChannel);
	}
}

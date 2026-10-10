// FUNCTION: BF2 0x808c90
// upstream GameSpy/Chat/chatHandlers.c ciAddLISTFilter
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void * CHAT;
typedef enum { CHATFalse, CHATTrue } CHATBool;
typedef struct LISTData { CHATBool gotStart; int numChannels; char ** channels; int * numUsers; char ** topics; } LISTData;
enum { TYPE_LIST, TYPE_JOIN, TYPE_TOPIC, TYPE_NAMES, TYPE_WHOIS, TYPE_CMODE, TYPE_UMODE, TYPE_BAN, TYPE_GETBAN, TYPE_NICK, TYPE_WHO, TYPE_CWHO, TYPE_GETKEY, TYPE_GETCKEY, TYPE_GETCHANKEY, TYPE_UNQUIET, TYPE_CDKEY, TYPE_GETUDPRELAY, NUM_TYPES };
#define gsi_char char
typedef void (* chatEnumChannelsCallbackAll)(CHAT chat, CHATBool success, int numChannels, const gsi_char ** channels, const gsi_char ** topics, int * numUsers, void * param);
typedef void (* chatEnumChannelsCallbackEach)(CHAT chat, CHATBool success, int index, const gsi_char * channel, const gsi_char * topic, int numUsers, void * param);
#define gsimalloc malloc
extern "C" {
int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data);
void* gsimalloc(unsigned long);
}

int ciAddLISTFilter(CHAT chat, chatEnumChannelsCallbackEach callbackEach, chatEnumChannelsCallbackAll callbackAll, void * param)
{
	LISTData * data = (LISTData *)gsimalloc(sizeof(LISTData));
	if(data == NULL)
		return 0; //ERRCON
	memset(data, 0, sizeof(LISTData));

	return ciAddFilter(chat, TYPE_LIST, NULL, NULL, (void*)callbackEach, (void*)callbackAll, param, data);
}

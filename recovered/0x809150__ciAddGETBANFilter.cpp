// FUNCTION: BF2 0x809150
// upstream GameSpy/Chat/chatHandlers.c ciAddGETBANFilter
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void * CHAT;
typedef enum { CHATFalse, CHATTrue } CHATBool;
typedef struct GETBANData { int numBans; char ** bans; } GETBANData;
enum { TYPE_LIST, TYPE_JOIN, TYPE_TOPIC, TYPE_NAMES, TYPE_WHOIS, TYPE_CMODE, TYPE_UMODE, TYPE_BAN, TYPE_GETBAN, TYPE_NICK, TYPE_WHO, TYPE_CWHO, TYPE_GETKEY, TYPE_GETCKEY, TYPE_GETCHANKEY, TYPE_UNQUIET, TYPE_CDKEY, TYPE_GETUDPRELAY, NUM_TYPES };
#define gsi_char char
typedef void (* chatEnumChannelBansCallback)(CHAT chat, CHATBool success, const gsi_char * channel, int numBans, const gsi_char ** bans, void * param);
#define gsimalloc malloc
extern "C" {
int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data);
void* gsimalloc(unsigned long);
}

int ciAddGETBANFilter(CHAT chat, const char * channel, chatEnumChannelBansCallback callback, void * param)
{
	GETBANData * data = (GETBANData *)gsimalloc(sizeof(GETBANData));
	if(data == NULL)
		return 0; //ERRCON
	memset(data, 0, sizeof(GETBANData));

	return ciAddFilter(chat, TYPE_GETBAN, channel, NULL, (void*)callback, NULL, param, data);
}

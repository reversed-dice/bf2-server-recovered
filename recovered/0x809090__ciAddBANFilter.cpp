// FUNCTION: BF2 0x809090
// upstream GameSpy/Chat/chatHandlers.c ciAddBANFilter
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef struct BANData { char * channel; } BANData;
typedef void * CHAT;
enum { TYPE_LIST, TYPE_JOIN, TYPE_TOPIC, TYPE_NAMES, TYPE_WHOIS, TYPE_CMODE, TYPE_UMODE, TYPE_BAN, TYPE_GETBAN, TYPE_NICK, TYPE_WHO, TYPE_CWHO, TYPE_GETKEY, TYPE_GETCKEY, TYPE_GETCHANKEY, TYPE_UNQUIET, TYPE_CDKEY, TYPE_GETUDPRELAY, NUM_TYPES };
#define gsifree free
#define gsimalloc malloc
extern "C" {
int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data);
char * goastrdup(const char *src);
void gsifree(void*);
void* gsimalloc(unsigned long);
}

int ciAddBANFilter(CHAT chat, const char * user, const char * channel)
{
	BANData * data = (BANData *)gsimalloc(sizeof(BANData));
	if(data == NULL)
		return 0; //ERRCON
	memset(data, 0, sizeof(BANData));
	data->channel = goastrdup(channel);
	if(data->channel == NULL)
	{
		gsifree(data);
		return 0; //ERRCON
	}

	return ciAddFilter(chat, TYPE_BAN, user, NULL, NULL, NULL, NULL, data);
}

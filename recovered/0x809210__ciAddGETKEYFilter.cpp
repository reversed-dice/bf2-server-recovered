// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x809210
// upstream GameSpy/Chat/chatHandlers.c ciAddGETKEYFilter
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void * CHAT;
typedef enum { CHATFalse, CHATTrue } CHATBool;
typedef struct GETKEYData { int num; char ** keys; char * channel; } GETKEYData;
enum { TYPE_LIST, TYPE_JOIN, TYPE_TOPIC, TYPE_NAMES, TYPE_WHOIS, TYPE_CMODE, TYPE_UMODE, TYPE_BAN, TYPE_GETBAN, TYPE_NICK, TYPE_WHO, TYPE_CWHO, TYPE_GETKEY, TYPE_GETCKEY, TYPE_GETCHANKEY, TYPE_UNQUIET, TYPE_CDKEY, TYPE_GETUDPRELAY, NUM_TYPES };
#define gsi_char char
typedef void (* chatGetGlobalKeysCallback)(CHAT chat, CHATBool success, const gsi_char * user, int num, const gsi_char ** keys, const gsi_char ** values, void * param);
#define gsifree free
#define gsimalloc malloc
extern "C" {
int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data);
char * goastrdup(const char *src);
void gsifree(void*);
void* gsimalloc(unsigned long);
}

int ciAddGETKEYFilter(CHAT chat, const char * cookie, int num, const char ** keys, const char * channel, chatGetGlobalKeysCallback callback, void * param)
{
	int i;
	GETKEYData * data = (GETKEYData *)gsimalloc(sizeof(GETKEYData));
	if(!data)
		return 0;
	memset(data, 0, sizeof(GETKEYData));

	data->num = num;
	if(channel)
	{
		data->channel = goastrdup(channel);
		if(!data->channel)
		{
			gsifree(data);
			return 0;
		}
	}
	data->keys = (char **)gsimalloc(sizeof(char *) * num);
	if(!data->keys)
	{
		gsifree(data->channel);
		gsifree(data);
		return 0;
	}
	for(i = 0 ; i < num ; i++)
	{
		data->keys[i] = goastrdup(keys[i]);
		if(!data->keys[i])
		{
			for( i-- ; i >= 0 ; i--)
				gsifree(data->keys[i]);
			gsifree(data->keys);
			gsifree(data->channel);
			gsifree(data);
			return 0;
		}
	}

	return ciAddFilter(chat, TYPE_GETKEY, cookie, NULL, (void*)callback, NULL, param, data);
}

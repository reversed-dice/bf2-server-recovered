// FUNCTION: BF2 0x808f10
// upstream GameSpy/Chat/chatHandlers.c ciAddWHOISFilter
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void * CHAT;
typedef enum { CHATFalse, CHATTrue } CHATBool;
enum { TYPE_LIST, TYPE_JOIN, TYPE_TOPIC, TYPE_NAMES, TYPE_WHOIS, TYPE_CMODE, TYPE_UMODE, TYPE_BAN, TYPE_GETBAN, TYPE_NICK, TYPE_WHO, TYPE_CWHO, TYPE_GETKEY, TYPE_GETCKEY, TYPE_GETCHANKEY, TYPE_UNQUIET, TYPE_CDKEY, TYPE_GETUDPRELAY, NUM_TYPES };
typedef struct WHOISData { char * user; char * name; char * address; int numChannels; char ** channels; } WHOISData;
#define gsi_char char
typedef void (* chatGetUserInfoCallback)(CHAT chat, CHATBool success, const gsi_char * nick, const gsi_char * user, const gsi_char * name, const gsi_char * address, int numChannels, const gsi_char ** channels, void * param);
#define gsifree free
#define gsimalloc malloc
extern "C" {
int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data);
void gsifree(void*);
void* gsimalloc(unsigned long);
}

int ciAddWHOISFilter(CHAT chat, const char * user, chatGetUserInfoCallback callback, void * param)
{
	int rcode;
	WHOISData * data = (WHOISData *)gsimalloc(sizeof(WHOISData));
	if(data == NULL)
		return 0; //ERRCON
	memset(data, 0, sizeof(WHOISData));

	rcode = ciAddFilter(chat, TYPE_WHOIS, user, NULL, (void*)callback, NULL, param, data);
	if(rcode == 0)
		gsifree(data);
	return rcode;
}

// FUNCTION: BF2 0x808e80
// upstream GameSpy/Chat/chatHandlers.c ciAddNAMESFilter
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void * CHAT;
typedef enum { CHATFalse, CHATTrue } CHATBool;
typedef struct NAMESData { int len; int numUsers; char ** users; int * modes; } NAMESData;
enum { TYPE_LIST, TYPE_JOIN, TYPE_TOPIC, TYPE_NAMES, TYPE_WHOIS, TYPE_CMODE, TYPE_UMODE, TYPE_BAN, TYPE_GETBAN, TYPE_NICK, TYPE_WHO, TYPE_CWHO, TYPE_GETKEY, TYPE_GETCKEY, TYPE_GETCHANKEY, TYPE_UNQUIET, TYPE_CDKEY, TYPE_GETUDPRELAY, NUM_TYPES };
#define gsi_char char
typedef void (* chatEnumUsersCallback)(CHAT chat, CHATBool success, const gsi_char * channel, int numUsers, const gsi_char ** users, int * modes, void * param);
#define gsimalloc malloc
extern "C" {
int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data);
void* gsimalloc(unsigned long);
}

int ciAddNAMESFilter(CHAT chat, const char * channel, chatEnumUsersCallback callback, void * param)
{
	NAMESData * data = (NAMESData *)gsimalloc(sizeof(NAMESData));
	if(data == NULL)
		return 0; //ERRCON
	memset(data, 0, sizeof(NAMESData));

	return ciAddFilter(chat, TYPE_NAMES, channel, NULL, (void*)callback, NULL, param, data);
}

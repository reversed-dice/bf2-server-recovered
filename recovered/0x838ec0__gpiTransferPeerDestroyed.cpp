// BF2_FLAGS: -fno-tree-dominator-opts
// FUNCTION: BF2 0x838ec0
// upstream GameSpy/GP/gpiTransfer.c gpiTransferPeerDestroyed
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;
typedef void * GPConnection;
typedef void (* GPCallback)( GPConnection * connection, void * arg, void * param );
typedef enum _GPEnum { GP_ERROR = 0, GP_RECV_BUDDY_REQUEST, GP_RECV_BUDDY_STATUS, GP_RECV_BUDDY_MESSAGE, GP_RECV_BUDDY_UTM, GP_RECV_GAME_INVITE, GP_TRANSFER_CALLBACK, GP_RECV_BUDDY_AUTH, GP_RECV_BUDDY_REVOKE, GP_INFO_CACHING = 0x0100, GP_SIMULATION, GP_INFO_CACHING_BUDDY_AND_BLOCK_ONLY, GP_BLOCKING = 1, GP_NON_BLOCKING = 0, GP_FIREWALL = 1, GP_NO_FIREWALL = 0, GP_CHECK_CACHE = 1, GP_DONT_CHECK_CACHE = 0, GP_VALID = 1, GP_INVALID = 0, GP_FATAL = 1, GP_NON_FATAL = 0, GP_MALE = 0x0500, GP_FEMALE, GP_PAT, GP_MORE = 0x0600, GP_DONE, GP_NICK = 0x0700, GP_UNIQUENICK, GP_EMAIL, GP_PASSWORD, GP_FIRSTNAME, GP_LASTNAME, GP_ICQUIN, GP_HOMEPAGE, GP_ZIPCODE, GP_COUNTRYCODE, GP_BIRTHDAY, GP_SEX, GP_CPUBRANDID, GP_CPUSPEED, GP_MEMORY, GP_VIDEOCARD1STRING, GP_VIDEOCARD1RAM, GP_VIDEOCARD2STRING, GP_VIDEOCARD2RAM, GP_CONNECTIONID, GP_CONNECTIONSPEED, GP_HASNETWORK, GP_OSSTRING, GP_AIMNAME, GP_PIC, GP_OCCUPATIONID, GP_INDUSTRYID, GP_INCOMEID, GP_MARRIEDID, GP_CHILDCOUNT, GP_INTERESTS1, GP_REPLACE = 1, GP_DONT_REPLACE = 0, GP_CONNECTED = 1, GP_NOT_CONNECTED = 0, GP_MASK_NONE = 0x00000000, GP_MASK_HOMEPAGE = 0x00000001, GP_MASK_ZIPCODE = 0x00000002, GP_MASK_COUNTRYCODE = 0x00000004, GP_MASK_BIRTHDAY = 0x00000008, GP_MASK_SEX = 0x00000010, GP_MASK_EMAIL = 0x00000020, GP_MASK_ALL = 0xFFFFFFFF, GP_OFFLINE = 0, GP_ONLINE = 1, GP_PLAYING = 2, GP_STAGING = 3, GP_CHATTING = 4, GP_AWAY = 5, GP_SESS_IS_CLOSED = 0x00000001, GP_SESS_IS_OPEN = 0x00000002, GP_SESS_HAS_PASSWORD = 0x00000004, GP_SESS_IS_BEHIND_NAT = 0x00000008, GP_SESS_IS_RANKED = 0x000000010, GP_INTEL = 1, GP_AMD, GP_CYRIX, GP_MOTOROLA, GP_ALPHA, GP_MODEM = 1, GP_ISDN, GP_CABLEMODEM, GP_DSL, GP_SATELLITE, GP_ETHERNET, GP_WIRELESS, GP_TRANSFER_SEND_REQUEST = 0x800, GP_TRANSFER_ACCEPTED, GP_TRANSFER_REJECTED, GP_TRANSFER_NOT_ACCEPTING, GP_TRANSFER_NO_CONNECTION, GP_TRANSFER_DONE, GP_TRANSFER_CANCELLED, GP_TRANSFER_LOST_CONNECTION, GP_TRANSFER_ERROR, GP_TRANSFER_THROTTLE, GP_FILE_BEGIN, GP_FILE_PROGRESS, GP_FILE_END, GP_FILE_DIRECTORY, GP_FILE_SKIP, GP_FILE_FAILED, GP_FILE_READ_ERROR = 0x900, GP_FILE_WRITE_ERROR, GP_FILE_DATA_ERROR, GP_TRANSFER_SENDER = 0xA00, GP_TRANSFER_RECEIVER, GP_DONT_ROUTE = 0xB00, GP_SILENCE_NONE = 0x00000000, GP_SILENCE_MESSAGES = 0x00000001, GP_SILENCE_UTMS = 0x00000002, GP_SILENCE_LIST = 0x00000004, GP_SILENCE_ALL = 0xFFFFFFFF, GP_NEW_STATUS_INFO_SUPPORTED = 0xC00, GP_NEW_STATUS_INFO_NOT_SUPPORTED = 0xC01 } GPEnum;
typedef enum _GPErrorCode { GP_GENERAL = 0x0000, GP_PARSE, GP_NOT_LOGGED_IN, GP_BAD_SESSKEY, GP_DATABASE, GP_NETWORK, GP_FORCED_DISCONNECT, GP_CONNECTION_CLOSED, GP_UDP_LAYER, GP_LOGIN = 0x0100, GP_LOGIN_TIMEOUT, GP_LOGIN_BAD_NICK, GP_LOGIN_BAD_EMAIL, GP_LOGIN_BAD_PASSWORD, GP_LOGIN_BAD_PROFILE, GP_LOGIN_PROFILE_DELETED, GP_LOGIN_CONNECTION_FAILED, GP_LOGIN_SERVER_AUTH_FAILED, GP_LOGIN_BAD_UNIQUENICK, GP_LOGIN_BAD_PREAUTH, GP_NEWUSER = 0x0200, GP_NEWUSER_BAD_NICK, GP_NEWUSER_BAD_PASSWORD, GP_NEWUSER_UNIQUENICK_INVALID, GP_NEWUSER_UNIQUENICK_INUSE, GP_UPDATEUI = 0x0300, GP_UPDATEUI_BAD_EMAIL, GP_NEWPROFILE = 0x0400, GP_NEWPROFILE_BAD_NICK, GP_NEWPROFILE_BAD_OLD_NICK, GP_UPDATEPRO = 0x0500, GP_UPDATEPRO_BAD_NICK, GP_ADDBUDDY = 0x0600, GP_ADDBUDDY_BAD_FROM, GP_ADDBUDDY_BAD_NEW, GP_ADDBUDDY_ALREADY_BUDDY, GP_AUTHADD = 0x0700, GP_AUTHADD_BAD_FROM, GP_AUTHADD_BAD_SIG, GP_STATUS = 0x0800, GP_BM = 0x0900, GP_BM_NOT_BUDDY, GP_BM_EXT_INFO_NOT_SUPPORTED, GP_BM_BUDDY_OFFLINE, GP_GETPROFILE = 0x0A00, GP_GETPROFILE_BAD_PROFILE, GP_DELBUDDY = 0x0B00, GP_DELBUDDY_NOT_BUDDY, GP_DELPROFILE = 0x0C00, GP_DELPROFILE_LAST_PROFILE, GP_SEARCH = 0x0D00, GP_SEARCH_CONNECTION_FAILED, GP_SEARCH_TIMED_OUT, GP_CHECK = 0x0E00, GP_CHECK_BAD_EMAIL, GP_CHECK_BAD_NICK, GP_CHECK_BAD_PASSWORD, GP_REVOKE = 0x0F00, GP_REVOKE_NOT_BUDDY, GP_REGISTERUNIQUENICK = 0x1000, GP_REGISTERUNIQUENICK_TAKEN, GP_REGISTERUNIQUENICK_RESERVED, GP_REGISTERUNIQUENICK_BAD_NAMESPACE, GP_REGISTERCDKEY = 0x1100, GP_REGISTERCDKEY_BAD_KEY, GP_REGISTERCDKEY_ALREADY_SET, GP_REGISTERCDKEY_ALREADY_TAKEN, GP_ADDBLOCK = 0x1200, GP_ADDBLOCK_ALREADY_BLOCKED, GP_REMOVEBLOCK = 0x1300, GP_REMOVEBLOCK_NOT_BLOCKED } GPErrorCode;
enum GPIAddCallbackType { GPI_ADD_NORMAL, GPI_ADD_ERROR, GPI_ADD_MESSAGE, GPI_ADD_NICKS, GPI_ADD_PMATCH, GPI_ADD_STATUS, GPI_ADD_BUDDDYREQUEST, GPI_ADD_TRANSFER_CALLBACK, GPI_ADD_REVERSE_BUDDIES, GPI_ADD_SUGGESTED_UNIQUE, GPI_ADD_BUDDYAUTH, GPI_ADD_BUDDYUTM, GPI_ADD_BUDDYREVOKE, GPI_ADD_REVERSE_BUDDIES_LIST, GPI_ADD_BUDDYKEYS, GPI_NUM_ADD_CALLBACK_TYPES };
typedef enum _GPIBool { GPIFalse, GPITrue } GPIBool;
typedef struct { char * buffer; int size; int len; int pos; } GPIBuffer;
typedef struct { GPCallback callback; void * param; } GPICallback;
typedef struct GPICallbackData { GPICallback callback; void * arg; int type; int operationID; struct GPICallbackData * pnext; } GPICallbackData;
enum GPICallbackId { GPI_ERROR = GP_ERROR, GPI_RECV_BUDDY_REQUEST = GP_RECV_BUDDY_REQUEST, GPI_RECV_BUDDY_STATUS = GP_RECV_BUDDY_STATUS, GPI_RECV_BUDDY_MESSAGE = GP_RECV_BUDDY_MESSAGE, GPI_RECV_BUDDY_UTM = GP_RECV_BUDDY_UTM, GPI_RECV_GAME_INVITE = GP_RECV_GAME_INVITE, GPI_TRANSFER_CALLBACK = GP_TRANSFER_CALLBACK, GPI_RECV_BUDDY_AUTH = GP_RECV_BUDDY_AUTH, GPI_RECV_BUDDY_REVOKE = GP_RECV_BUDDY_REVOKE, GPI_NUM_CALLBACKS };
typedef enum _GPResult { GP_NO_ERROR, GP_MEMORY_ERROR, GP_PARAMETER_ERROR, GP_NETWORK_ERROR, GP_SERVER_ERROR, GP_MISC_ERROR, GP_COUNT } GPResult;
typedef struct GPIOperation_s { int type; void * data; GPIBool blocking; GPICallback callback; int state; int id; GPResult result; struct GPIOperation_s * pnext; } GPIOperation;
typedef enum { GPI_PEER_OP_STATE_NONE, GPI_PEER_OP_STATE_REQUESTED, GPI_PEER_OP_STATE_FINISHED } GPIPeerOpState;
typedef unsigned long gsi_time;
typedef struct _GPIPeerOp { GPIPeerOpState state; void *userData; GPCallback callback; struct _GPIPeerOp * next; int type; gsi_time timeout; } GPIPeerOp;
typedef struct _GPIPeerOpQueue { GPIPeerOp * opList; GPIPeerOp * first; GPIPeerOp * last; } GPIPeerOpQueue;
typedef int GPProfile;
typedef struct GPIPeer_s { int state; GPIBool initiated; unsigned int ip; unsigned short port; GPProfile profile; time_t timeout; int nackCount; GPIBuffer inputBuffer; GPIBuffer outputBuffer; DArray messages; GPIPeerOpQueue peerOpQueue; struct GPIPeer_s * pnext; } GPIPeer;
typedef int (*TableCompareFn)(const void *elem1, const void *elem2);
typedef void (*TableElementFreeFn)(void *elem);
typedef int (*TableHashFn)(const void *elem, int numBuckets);
struct HashImplementation { DArray *buckets; int nbuckets; TableElementFreeFn freefn; TableHashFn hashfn; TableCompareFn compfn; };
typedef struct HashImplementation *HashTable;
typedef struct { HashTable profileTable; int num; int numBuddies; int numBlocked; } GPIProfileList;
#define GP_EMAIL_LEN 51
#define GP_ERROR_STRING_LEN 256
#define GP_LOCATION_STRING_LEN 256
#define GP_LOGIN_TICKET_LEN 25
#define GP_NICK_LEN 31
#define GP_PASSWORD_LEN 31
#define GP_RICH_STATUS_LEN 256
#define GP_STATUS_BASIC_STR_LEN 33
#define GP_STATUS_STRING_LEN 256
#define GP_UNIQUENICK_LEN 21
#define GS_UDP_MSG_HEADER_LEN 16
typedef int SOCKET;
typedef int gsi_bool;
typedef struct { char _p0[424]; GPICallback callbacks[GPI_NUM_CALLBACKS]; char _p1[720]; DArray transfers; } GPIConnection;
typedef struct GPITransferID_s { int profileid; unsigned int count; unsigned int time; } GPITransferID;
typedef enum { GPITransferPinging, GPITransferWaiting, GPITransferTransferring, GPITransferComplete, GPITransferCancelled, GPITransferNoConnection } GPITransferState;
typedef struct { GPITransferState state; DArray files; GPITransferID transferID; int localID; GPIBool sender; GPProfile profile; GPIPeer * peer; int currentFile; int throttle; char * baseDirectory; unsigned long lastSend; char * message; int totalSize; int progress; void * userData; } GPITransfer;
typedef int GPTransfer;
#define gsi_char char
typedef struct { GPTransfer transfer; GPEnum type; int index; int num; gsi_char * message; } GPTransferCallbackArg;
#define gsimalloc malloc
extern "C" {
int ArrayLength(const DArray array);
void * ArrayNth(DArray array, int n);
int gpiAddCallback(GPConnection * connection, GPCallback cb, void * param, void * arg, void * operation, int type);
void* gsimalloc(unsigned long);
}

void gpiTransferPeerDestroyed
(
  GPConnection * connection,
  GPIPeer * peer
)
{
	GPIConnection * iconnection = (GPIConnection*)*connection;
	GPTransferCallbackArg * arg;
	GPITransfer * transfer;
	int i;
	int len;

	// Search for transfers that use this peer.
	///////////////////////////////////////////
	len = ArrayLength(iconnection->transfers);
	for(i = 0 ; i < len ; i++)
	{
		transfer = (GPITransfer *)ArrayNth(iconnection->transfers, i);

		if (transfer->peer == peer)
		{
			// Call the callback.
			/////////////////////
			arg = (GPTransferCallbackArg *)gsimalloc(sizeof(GPTransferCallbackArg));
			if(arg)
			{
				memset(arg, 0, sizeof(GPTransferCallbackArg));
				arg->transfer = transfer->localID;
				arg->type = GP_TRANSFER_LOST_CONNECTION;
				GPICallback cbs = iconnection->callbacks[GPI_TRANSFER_CALLBACK]; gpiAddCallback(connection, cbs.callback, cbs.param, arg, NULL, GPI_ADD_TRANSFER_CALLBACK);
			}
		
			// So long tranfer.
			///////////////////
			transfer->state = GPITransferNoConnection;
		}
	}

}

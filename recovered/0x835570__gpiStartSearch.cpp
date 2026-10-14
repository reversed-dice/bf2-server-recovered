// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x835570
typedef int GPResult;
typedef int GPEnum;
typedef void* GPConnection;
typedef void (*GPCallback)(void* arg, void* param);

#define GP_NO_ERROR (GPResult)0
#define GP_MEMORY_ERROR (GPResult)1
#define GP_NETWORK_ERROR (GPResult)3
#define GPIFalse 0
#define GPITrue 1
#define GPI_PROFILE_SEARCH 3
#define GPI_CONNECTING 1

#define INVALID_SOCKET (-1)
#define AF_INET 2
#define SOCK_STREAM 1
#define IPPROTO_TCP 6

struct GPIOperation
{
	char pad0[8];
	void* data;                 // 0x8
	int blocking;               // 0x10
	char pad1[0x14];
	int state;                  // 0x28
	int id;                     // 0x2c
};

struct GPIBuffer
{
	char* buffer;               // +0
	int size;                   // +8
	int pad;
};

struct GPISearchData
{
	int type;                   // 0x0
	int sock;                   // 0x4
	GPIBuffer inputBuffer;      // 0x8
	char pad[0x154 - 0x18];
	unsigned int searchStartTime;   // 0x154
};

struct in_addr { unsigned int s_addr; };
struct sockaddr_in
{
	short sin_family;
	unsigned short sin_port;
	struct in_addr sin_addr;
	char sin_zero[8];
};
struct sockaddr { short sa_family; char sa_data[14]; };
struct hostent
{
	char* h_name;
	char** h_aliases;
	int h_addrtype;
	int h_length;
	char** h_addr_list;
};

struct GPIConnection
{
	char pad[0x28c];
	int numSearches;            // 0x28c
};

extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" GPResult gpiAddOperation(GPConnection* connection, int type, void* data, GPIOperation** operation, GPEnum blocking, GPCallback callback, void* param);
extern "C" void* gsimalloc(unsigned long size);
extern "C" int socket(int domain, int type, int protocol);
extern "C" int SetSockBlocking(int sock, int block);
extern "C" struct hostent* gethostbyname(const char* name);
extern "C" int connect(int sock, const struct sockaddr* addr, unsigned int addrlen);
extern "C" int* __errno_location();
extern "C" GPResult gpiProcess(GPConnection* connection, int operationID);
extern "C" unsigned int current_time(...);
extern "C" void gpiSetError(GPConnection* connection, int errorCode, const char* errorString);
extern "C" void gpiCallErrorCallback(GPConnection* connection, int result, int errorCode);
extern "C" void gpiSetErrorString(GPConnection* connection, const char* string);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

extern "C" char GPSearchManagerHostname[64];

#define GOAGetLastError(s) (*__errno_location())

#define Error(connection, code, string) { gpiSetError(connection, 5, string); gpiCallErrorCallback(connection, 3, 1); return GP_NETWORK_ERROR; }

static GPResult gpiStartProfileSearch(GPConnection* connection, GPIOperation* operation)
{
	GPISearchData* data = (GPISearchData*)operation->data;
	int rcode;
	struct sockaddr_in address;
	struct hostent* host;

	data->inputBuffer.size = 4096;
	data->inputBuffer.buffer = (char*)gsimalloc((unsigned int)data->inputBuffer.size + 1);
	if(data->inputBuffer.buffer == 0)
	{
		gpiSetErrorString(connection, "Out of memory.");
		return GP_MEMORY_ERROR;
	}

	data->sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(data->sock == INVALID_SOCKET)
		Error(connection, GP_NETWORK_ERROR, "There was an error creating a socket.");

	rcode = SetSockBlocking(data->sock, 0);
	if(rcode == 0)
		Error(connection, GP_NETWORK_ERROR, "There was an error making a socket non-blocking.");

	host = gethostbyname(GPSearchManagerHostname);
	if(host == 0)
		Error(connection, GP_NETWORK_ERROR, "Could not resolve search manager host name.");

	memset(&address, 0, sizeof(address));
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = *(unsigned int*)host->h_addr_list[0];
	if(address.sin_addr.s_addr == 0)
		__assert_fail("address.sin_addr.s_addr != 0", "External/GameSpy/gp/gpiSearch.c", 0x4f, "__PRETTY_FUNCTION__.5494");
	address.sin_port = 0xcd74;
	rcode = connect(data->sock, (struct sockaddr*)&address, sizeof(struct sockaddr_in));
	if(rcode == -1)
	{
		int error = GOAGetLastError(data->sock);
		if((error != 0xb) && (error != 0x73) && (error != 0x6e))
		{
			Error(connection, GP_NETWORK_ERROR, "There was an error connecting a socket.");
		}
	}

	operation->state = GPI_CONNECTING;
	data->searchStartTime = current_time();
	return GP_NO_ERROR;
}

extern "C" GPResult gpiStartSearch(GPConnection* connection, GPISearchData* data, GPEnum blocking, GPCallback callback, void* param)
{
	GPIOperation* operation;
	GPResult result;
	GPIConnection* iconnection = (GPIConnection*)*connection;

	iconnection->numSearches++;

	result = gpiAddOperation(connection, GPI_PROFILE_SEARCH, data, &operation, blocking, callback, param);
	if(result != GP_NO_ERROR)
		return result;

	result = gpiStartProfileSearch(connection, operation);
	if(result != GP_NO_ERROR)
		return result;

	if(operation->blocking)
	{
		result = gpiProcess(connection, operation->id);
		if(result != GP_NO_ERROR)
			return result;
	}

	return GP_NO_ERROR;
}

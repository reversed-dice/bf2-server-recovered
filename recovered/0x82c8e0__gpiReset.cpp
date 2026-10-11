// FUNCTION: BF2 0x82c8e0
typedef int GPResult;
typedef int GPEnum;
typedef int GPIBool;
typedef void* GPConnection;

#define GP_NO_ERROR (GPResult)0
#define GPIFalse 0
#define GPITrue 1

struct GPIBuffer { char* buffer; int len; int pos; int size; };

struct GPIConnection
{
	char pad0[0x110];
	char nick[0x1f];                 // 0x110
	char uniquenick[0x15];           // 0x12f
	char email[0x15];                // 0x144
	char pad1[0x3f];                 // up to 0x198
	int sessKey;                     // 0x198
	int userid;                      // 0x19c
	int profileid;                   // 0x1a0
	char pad2[0x94];                 // up to 0x238
	int cmSocket;                    // 0x238
	int connectState;                // 0x23c
	GPIBuffer socketBuffer;          // 0x240
	char* inputBuffer;               // 0x258
	int inputBufferSize;             // 0x260
	GPIBuffer outputBuffer;          // 0x268
	int field280;                    // 0x280
	char pad3[4];
	int nextOperationID;             // 0x288
	int numSearches;                 // 0x28c
	int lastStatusState;             // 0x290
	char lastStatusString[0x100];    // 0x294
	char lastLocationString[0x100];  // 0x394
	char pad4a[4];
	int fatalError;                  // 0x498
	char pad4[0xc];                  // up to 0x4a8
	void* operationList;             // 0x4a8
	char pad5[0xc];                  // up to 0x4bc
	int numBuddies;                  // 0x4bc
	void* peerList;                  // 0x4c0
	char pad6[0x10];                 // up to 0x4d8
	GPIBuffer updateproBuffer;       // 0x4d8
	GPIBuffer updateuiBuffer;        // 0x4f0
};

extern "C" void gsifree(void* ptr);
extern "C" void gpiRemoveOperation(GPConnection* connection, void* operation);
extern "C" GPResult gpiResetProfile(GPConnection* connection, void* profile, void* data);
extern "C" GPResult gpiProfileMap(GPConnection* connection, GPResult (*func)(GPConnection*, void*, void*), void* data);

#define freeclear(mem) { gsifree(mem); (mem) = 0; }

GPResult gpiReset(GPConnection* connection)
{
	GPIConnection* iconnection = (GPIConnection*)*connection;

	iconnection->nick[0] = '\0';
	iconnection->uniquenick[0] = '\0';
	iconnection->email[0] = '\0';
	iconnection->cmSocket = -1;
	iconnection->connectState = 0;

	iconnection->socketBuffer.pos = 0;
	iconnection->socketBuffer.size = 0;
	iconnection->socketBuffer.len = 0;
	freeclear(iconnection->socketBuffer.buffer);

	iconnection->inputBufferSize = 0;
	freeclear(iconnection->inputBuffer);

	iconnection->outputBuffer.pos = 0;
	iconnection->outputBuffer.size = 0;
	iconnection->outputBuffer.len = 0;
	freeclear(iconnection->outputBuffer.buffer);

	iconnection->updateproBuffer.pos = 0;
	iconnection->updateproBuffer.size = 0;
	iconnection->updateproBuffer.len = 0;
	freeclear(iconnection->updateproBuffer.buffer);

	iconnection->updateuiBuffer.pos = 0;
	iconnection->updateuiBuffer.size = 0;
	iconnection->updateuiBuffer.len = 0;
	freeclear(iconnection->updateuiBuffer.buffer);

	iconnection->field280 = -1;
	iconnection->nextOperationID = 2;
	while (iconnection->operationList != 0)
		gpiRemoveOperation(connection, iconnection->operationList);
	iconnection->operationList = 0;
	iconnection->numBuddies = 0;
	gpiProfileMap(connection, gpiResetProfile, 0);
	iconnection->userid = 0;
	iconnection->profileid = 0;
	iconnection->sessKey = 0;
	iconnection->numSearches = 0;
	iconnection->fatalError = 0;
	iconnection->peerList = 0;
	iconnection->lastStatusState = -1;
	iconnection->lastStatusString[0] = '\0';
	iconnection->lastLocationString[0] = '\0';

	return GP_NO_ERROR;
}

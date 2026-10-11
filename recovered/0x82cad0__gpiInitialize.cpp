// FUNCTION: BF2 0x82cad0
// BF2_FLAGS: -fcrossjumping
typedef int GPResult;
typedef int GPEnum;
typedef void* GPConnection;

#define GP_NO_ERROR (GPResult)0
#define GP_MEMORY_ERROR (GPResult)1
#define GPITrue 1
#define GPIFalse 0

struct GPICallback { void* callback; void* param; };

struct GPIConnection
{
	char errorString[0x100];             // 0x0
	int infoCaching;                     // 0x100
	int infoCachingBuddyAndBlockOnly;    // 0x104
	int simulation;                      // 0x108
	int firewall;                        // 0x10c
	char pad1[0x98];                     // up to 0x1a8
	GPICallback callbacks[9];            // 0x1a8
	char pad2[0x25c];                    // up to 0x494
	int errorCode;                       // 0x494
	char pad3[8];
	void* diskCache;                     // 0x4a0
	char pad4[0x6c];                     // up to 0x514
	int productID;                       // 0x514
	int namespaceID;                     // 0x518
	char pad5[0x1c];                     // up to 0x538
};

extern "C" void* gsimalloc(unsigned long size);
extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" void gsifree(void* ptr);
extern "C" int gpiInitProfiles(GPConnection* connection);
extern "C" GPResult gpiReset(GPConnection* connection);
extern "C" void gpiDestroy(GPConnection* connection);
extern "C" void SocketStartUp(...);
extern "C" unsigned int current_time(...);
extern "C" void srand(unsigned int seed);
extern "C" GPResult gpiLoadDiskProfiles(GPConnection* connection);
extern "C" GPResult gpiInitTransfers(GPConnection* connection);

#define freeclear(mem) { gsifree(mem); (mem) = 0; }

GPResult gpiInitialize(GPConnection* connection, int productID, int namespaceID, int partnerID)
{
	GPIConnection* iconnection;
	int i;
	GPResult result;

	*connection = 0;

	iconnection = (GPIConnection*)gsimalloc(0x538);
	if (iconnection == 0)
		return GP_MEMORY_ERROR;

	memset(iconnection, 0, 0x538);
	iconnection->errorString[0] = '\0';
	iconnection->errorCode = 0;
	iconnection->infoCaching = GPITrue;
	iconnection->infoCachingBuddyAndBlockOnly = GPIFalse;
	iconnection->simulation = GPIFalse;
	iconnection->firewall = GPIFalse;
	iconnection->productID = productID;
	iconnection->namespaceID = namespaceID;

	if (!gpiInitProfiles((GPConnection*)&iconnection))
	{
		freeclear(iconnection);
		return GP_MEMORY_ERROR;
	}
	iconnection->diskCache = 0;
	for (i = 0; i < 9; i++)
	{
		iconnection->callbacks[i].callback = 0;
		iconnection->callbacks[i].param = 0;
	}

	result = gpiReset((GPConnection*)&iconnection);
	if (result != GP_NO_ERROR)
	{
		gpiDestroy((GPConnection*)&iconnection);
		return result;
	}

	SocketStartUp();

	srand((unsigned int)current_time());

	result = gpiLoadDiskProfiles((GPConnection*)&iconnection);
	if (result != GP_NO_ERROR)
	{
		gpiDestroy((GPConnection*)&iconnection);
		return result;
	}

	result = gpiInitTransfers((GPConnection*)&iconnection);
	if (result != GP_NO_ERROR)
	{
		gpiDestroy((GPConnection*)&iconnection);
		return result;
	}

	*connection = (GPConnection)iconnection;

	return GP_NO_ERROR;
}

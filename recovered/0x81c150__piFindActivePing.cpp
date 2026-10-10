// FUNCTION: BF2 0x81c150
typedef unsigned short uint16;
extern "C" void * piActivePingList;
extern "C" int ArraySearch(void * array, void * elem, void * compare, int a, int b);
extern "C" void * ArrayNth(void * array, int n);
extern "C" int piFindActivePingCompareFn(void * a, void * b);
struct piActivePing
{
	int originator;
	uint16 ID;
	uint16 expectedTrip;
	unsigned long long timestamp;
	unsigned long long timeout;
	unsigned int remoteIP;
	unsigned short remotePort;
	void * reply;
	void * replyParam;
};
#define NOT_FOUND -1
extern "C" piActivePing * piFindActivePing(uint16 ID, int * index)
{
	piActivePing key;
	int n;

	key.ID = ID;
	n = ArraySearch(piActivePingList, &key, (void *)piFindActivePingCompareFn, 0, 0);
	if(index != 0)
		*index = n;

	if(n == NOT_FOUND)
		return 0;

	return (piActivePing *)ArrayNth(piActivePingList, n);
}

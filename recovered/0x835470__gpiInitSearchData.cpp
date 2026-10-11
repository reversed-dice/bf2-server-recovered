// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x835470
typedef int GPResult;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIBuffer
{
	char * buffer;
	int size;
	int len;
	int pos;
};
struct GPISearchData
{
	int type;
	int sock;
	GPIBuffer inputBuffer;
	GPIBuffer outputBuffer;
	char pad0[0x114];
	int processing;
	int remove;
	char pad1[4];
};
extern "C" void * gsimalloc(unsigned int size);
extern "C" void * memset(void * dest, int c, unsigned long n);
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);

GPResult gpiInitSearchData(GPConnection * connection, GPISearchData ** searchData, int type)
{
	GPISearchData * data;

	data = (GPISearchData *)gsimalloc(sizeof(GPISearchData));
	if(data == 0)
	{
		gpiSetErrorString(connection, "Out of memory.");
		return 1;
	}

	memset(data, 0, sizeof(GPISearchData));
	data->type = type;
	data->sock = -1;
	data->inputBuffer.buffer = 0;
	data->inputBuffer.len = 0;
	data->inputBuffer.pos = 0;
	data->inputBuffer.size = 0;
	data->outputBuffer.len = 0;
	data->outputBuffer.pos = 0;
	data->outputBuffer.size = 4096;
	data->outputBuffer.buffer = (char *)gsimalloc((unsigned int)data->outputBuffer.size + 1);
	if(data->outputBuffer.buffer == 0)
	{
		gpiSetErrorString(connection, "Out of memory.");
		return 1;
	}
	data->processing = 0;
	data->remove = 0;

	*searchData = data;

	return 0;
}

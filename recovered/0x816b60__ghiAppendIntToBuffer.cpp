// FUNCTION: BF2 0x816b60
extern "C" int sprintf(char *str, const char *format, ...);

struct GHIBuffer;
typedef int GHTTPBool;

extern "C" GHTTPBool ghiAppendDataToBuffer(GHIBuffer * buffer, const char * data, int dataLen);

extern "C" GHTTPBool ghiAppendIntToBuffer(GHIBuffer * buffer, int i)
{
	char intValue[16];

	sprintf(intValue, "%d", i);

	return ghiAppendDataToBuffer(buffer, intValue, 0);
}

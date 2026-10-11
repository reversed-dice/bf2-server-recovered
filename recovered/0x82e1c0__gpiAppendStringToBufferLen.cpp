// FUNCTION: BF2 0x82e1c0
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
extern "C" void __assert_fail(const char * expr, const char * file, unsigned int line, const char * fn) __attribute__((noreturn));
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" void * memcpy(void * dest, const void * src, unsigned long n);
extern "C" void * gsirealloc(void * ptr, unsigned int size);

GPResult gpiAppendStringToBufferLen(GPConnection * connection, GPIBuffer * outputBuffer, const char * string, int stringLen)
{
	int len;
	int size;
	char * output;

	if(!string)
		__assert_fail("string != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 85, "__PRETTY_FUNCTION__.5517");
	if(stringLen < 0)
		__assert_fail("stringLen >= 0", "External/GameSpy/gp/gpiBuffer.c", 86, "__PRETTY_FUNCTION__.5517");
	if(!outputBuffer)
		__assert_fail("outputBuffer != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 87, "__PRETTY_FUNCTION__.5517");

	if(!string)
		return 0;

	len = outputBuffer->len;
	size = outputBuffer->size;
	output = outputBuffer->buffer;

	if((size - len) < stringLen)
	{
		size += (stringLen >= 0x4000) ? stringLen : 0x4000;
		output = (char *)gsirealloc(output, (unsigned int)size + 1);
		if(output == 0)
		{
			gpiSetErrorString(connection, "Out of memory.");
			return 1;
		}
	}

	memcpy(&output[len], string, (unsigned int)stringLen);
	output[len + stringLen] = 0;

	outputBuffer->len += stringLen;
	outputBuffer->size = size;
	outputBuffer->buffer = output;

	return 0;
}

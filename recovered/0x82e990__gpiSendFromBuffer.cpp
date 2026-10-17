// FUNCTION: BF2 0x82e990
typedef int GPResult;
typedef int GPIBool;
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
extern "C" GPResult gpiSendData(GPConnection * connection, int sock, const char * buffer, int bufferLen, GPIBool * closed, int * sent, const char id[3]);
extern "C" void * memmove(void * dest, const void * src, unsigned long n);

// compile-state padding: 13 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
GPResult gpiSendFromBuffer(GPConnection * connection, int sock, GPIBuffer * outputBuffer, GPIBool * connClosed, GPIBool clipSentData, const char id[3])
{
	GPIBool closed;
	int sent;
	int total;
	int remaining;
	char * buffer;
	int pos;
	int len;

	if(!outputBuffer)
		__assert_fail("outputBuffer != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 453, "__PRETTY_FUNCTION__.5722");

	buffer = outputBuffer->buffer;
	len = outputBuffer->len;
	pos = outputBuffer->pos;
	remaining = (len - pos);
	total = 0;

	if(remaining == 0)
		return 0;

	do
	{
		GPResult result = gpiSendData(connection, sock, &buffer[pos + total], remaining, &closed, &sent, id);
		if(result != 0)
			return result;
		if(sent)
		{
			total += sent;
			remaining -= sent;
		}
	}
	while(sent && remaining);

	if(clipSentData)
	{
		if(total > 0)
		{
			memmove(buffer, &buffer[total], (unsigned int)remaining + 1);
			len -= total;
		}
	}
	else
	{
		pos += total;
	}

	if(len < 0)
		__assert_fail("len >= 0", "External/GameSpy/gp/gpiBuffer.c", 490, "__PRETTY_FUNCTION__.5722");
	if(pos < 0)
		__assert_fail("pos >= 0", "External/GameSpy/gp/gpiBuffer.c", 491, "__PRETTY_FUNCTION__.5722");
	if(pos > len)
		__assert_fail("pos <= len", "External/GameSpy/gp/gpiBuffer.c", 492, "__PRETTY_FUNCTION__.5722");

	outputBuffer->len = len;
	outputBuffer->pos = pos;
	if(connClosed)
		*connClosed = closed;

	return 0;
}

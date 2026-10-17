// FUNCTION: BF2 0x82e7a0
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

extern "C" {
void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
void * gsirealloc(void * ptr, unsigned int size);
int recv(int sockfd, void * buf, unsigned long len, int flags);
int * __errno_location(void);
void gpiSetErrorString(GPConnection * connection, const char * string);
}

#define GPI_READ_SIZE 16384

// compile-state padding: 7 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
GPResult gpiRecvToBuffer(GPConnection * connection, int sock, GPIBuffer * inputBuffer, int * bytesRead, GPIBool * connClosed, char * id)
{
	char * buffer;
	int len;
	int size;
	int rcode;
	int total;
	GPIBool closed;

	if(sock == (-1))
		__assert_fail("sock != (-1)", "External/GameSpy/gp/gpiBuffer.c", 342, __PRETTY_FUNCTION__);
	if(inputBuffer == ((void *)0))
		__assert_fail("inputBuffer != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 343, __PRETTY_FUNCTION__);
	if(bytesRead == ((void *)0))
		__assert_fail("bytesRead != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 344, __PRETTY_FUNCTION__);
	if(connClosed == ((void *)0))
		__assert_fail("connClosed != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 345, __PRETTY_FUNCTION__);

	buffer = inputBuffer->buffer;
	len = inputBuffer->len;
	size = inputBuffer->size;
	total = 0;
	closed = 0;

	do
	{
		if((len + GPI_READ_SIZE) > size)
		{
			size = (len + GPI_READ_SIZE);
			buffer = (char *)gsirealloc(buffer, (unsigned int)size + 1);
			if(buffer == 0)
			{
				gpiSetErrorString(connection, "Out of memory.");
				return 1;
			}
		}

		rcode = recv(sock, &buffer[len], size - len, 0);

		if(rcode == -1)
		{
			int error = *__errno_location();
			if((error != 0xb) && (error != 0x73) && (error != 0x6e))
			{
				gpiSetErrorString(connection, "There was an error reading from a socket.");
				return 3;
			}
		}
		else if(rcode == 0)
		{
			closed = 1;
		}
		else
		{
			len += rcode;
			total += rcode;
		}

		buffer[len] = '\0';
	}
	while((rcode != -1) && !closed && (total < (128 * 1024)));

	inputBuffer->buffer = buffer;
	inputBuffer->len = len;
	inputBuffer->size = size;
	*bytesRead = total;
	*connClosed = closed;

	return 0;
}

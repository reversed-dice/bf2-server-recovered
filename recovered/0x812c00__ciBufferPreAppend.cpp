// FUNCTION: BF2 0x812c00
typedef int CHATBool;
#define CHATFalse 0
#define CHATTrue 1
#define BUFFER_INC 8192
struct ciBuffer { char * buffer; int length; int size; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
extern "C" void * gsirealloc(void * p, unsigned long size);
static const char * const SOCKETFILE = "External/GameSpy/chat/chatSocket.c";

CHATBool ciBufferPreAppend(ciBuffer * buffer, int len)
{
	int total;
	char * tempPtr;

	if (buffer == 0)
		__assert_fail("(buffer) != ((void *)0)", SOCKETFILE, 120, "__PRETTY_FUNCTION__.4916");
	if (buffer->size < 0)
		__assert_fail("(buffer)->size >= 0", SOCKETFILE, 120, "__PRETTY_FUNCTION__.4916");
	if ((buffer->size % 8192) != 0)
		__assert_fail("((buffer)->size % 8192) == 0", SOCKETFILE, 120, "__PRETTY_FUNCTION__.4916");
	if (buffer->length < 0)
		__assert_fail("(buffer)->length >= 0", SOCKETFILE, 120, "__PRETTY_FUNCTION__.4916");
	if (buffer->length > buffer->size)
		__assert_fail("(buffer)->length <= (buffer)->size", SOCKETFILE, 120, "__PRETTY_FUNCTION__.4916");
	if (len < 0)
		__assert_fail("len >= 0", SOCKETFILE, 121, "__PRETTY_FUNCTION__.4916");
	if (len > 32767)
		__assert_fail("len <= 32767", SOCKETFILE, 122, "__PRETTY_FUNCTION__.4916");

	total = (buffer->length + len);
	if (total <= buffer->size)
		return CHATTrue;

	total += BUFFER_INC;
	total -= (total % BUFFER_INC);

	tempPtr = (char *)gsirealloc(buffer->buffer, (unsigned int)total + 1);
	if (tempPtr == 0)
		return CHATFalse;

	buffer->buffer = tempPtr;
	buffer->size = total;

	return CHATTrue;
}

// FUNCTION: BF2 0x812d60
#include <cstring>
struct ciBuffer { char * buffer; int length; int size; };
extern "C" void __assert_fail(const char *expr, const char *file, unsigned int line, const char *fn) __attribute__((noreturn));
static const char * const SOCKETFILE = "External/GameSpy/chat/chatSocket.c";

void ciBufferClipFront(ciBuffer * buffer, int len)
{
	if (buffer == 0)
		__assert_fail("(buffer) != ((void *)0)", SOCKETFILE, 151, "__PRETTY_FUNCTION__.4939");
	if (buffer->size < 0)
		__assert_fail("(buffer)->size >= 0", SOCKETFILE, 151, "__PRETTY_FUNCTION__.4939");
	if ((buffer->size % 8192) != 0)
		__assert_fail("((buffer)->size % 8192) == 0", SOCKETFILE, 151, "__PRETTY_FUNCTION__.4939");
	if (buffer->length < 0)
		__assert_fail("(buffer)->length >= 0", SOCKETFILE, 151, "__PRETTY_FUNCTION__.4939");
	if (buffer->length > buffer->size)
		__assert_fail("(buffer)->length <= (buffer)->size", SOCKETFILE, 151, "__PRETTY_FUNCTION__.4939");
	if (len < 0)
		__assert_fail("len >= 0", SOCKETFILE, 152, "__PRETTY_FUNCTION__.4939");
	if (len > buffer->length)
		__assert_fail("len <= buffer->length", SOCKETFILE, 153, "__PRETTY_FUNCTION__.4939");

	buffer->length -= len;
	memmove(buffer->buffer, &buffer->buffer[len], (unsigned int)buffer->length);
	buffer->buffer[buffer->length] = '\0';
}

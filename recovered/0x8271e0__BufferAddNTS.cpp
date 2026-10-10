// FUNCTION: BF2 0x8271e0
#include <string.h>
extern "C" void BufferAddNTS(char ** buffer, const char * str, int * len)
{
	int slen;
	if (str == 0)
		str = "";
	slen = (int)strlen(str) + 1;
	memcpy(*buffer, str, (size_t)slen);
	(*len) += slen;
	(*buffer) += slen;
}

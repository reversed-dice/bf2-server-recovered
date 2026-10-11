// FUNCTION: BF2 0x821e20
#include <string.h>

typedef int gsi_bool;
#define gsi_true 1
#define gsi_false 0

struct qr2_buffer_s
{
	char buffer[0x578];
	int len;
};
typedef qr2_buffer_s * qr2_buffer_t;

extern "C" gsi_bool qr2_buffer_addA(qr2_buffer_t outbuf, const char *value)
{
	int copylen;
	copylen = (int)strlen(value) + 1;
	if (copylen > (0x578 - outbuf->len))
		copylen = (0x578 - outbuf->len);
	if (copylen <= 0)
		return gsi_false;
	memcpy(outbuf->buffer + outbuf->len, value, (unsigned int)copylen);
	outbuf->len += copylen;
	outbuf->buffer[outbuf->len - 1] = 0;
	return gsi_true;
}

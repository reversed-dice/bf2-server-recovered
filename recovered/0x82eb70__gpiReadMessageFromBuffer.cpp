// FUNCTION: BF2 0x82eb70
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
extern "C" char * strchr(const char * s, int c);
extern "C" int memcmp(const void * s1, const void * s2, unsigned long n);
extern "C" long __strtol_internal(const char * nptr, char ** endptr, int base, int group);
extern "C" GPIBool gpiValueForKey(const char * buffer, const char * key, char * value, int valueLen);

GPResult gpiReadMessageFromBuffer(GPConnection * connection, GPIBuffer * inputBuffer, char ** message, int * type, int * plen)
{
	char * str;
	int len;
	char intValue[16];

	*message = 0;

	if(inputBuffer->len < 5)
		return 0;

	str = strchr(inputBuffer->buffer, '\n');
	if(str != 0)
	{
		if(memcmp(str - 5, "\\msg\\", 5) != 0)
			return 3;

		*str = 0;

		if(!gpiValueForKey(inputBuffer->buffer, "\\m\\", intValue, sizeof(intValue)))
			return 3;
		*type = (int)__strtol_internal(intValue, 0, 10, 0);

		if(!gpiValueForKey(inputBuffer->buffer, "\\len\\", intValue, sizeof(intValue)))
			return 3;
		len = (int)__strtol_internal(intValue, 0, 10, 0);
		len++;

		if(inputBuffer->len > ((str - inputBuffer->buffer) + len))
		{
			if(str[len] != 0)
				return 3;

			*message = &str[1];
			*plen = (len - 1);

			inputBuffer->pos = ((str - inputBuffer->buffer) + len + 1);
		}
		else
		{
			*str = '\n';
		}
	}

	return 0;
}

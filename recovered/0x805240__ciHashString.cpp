// FUNCTION: BF2 0x805240
// ciHashString
#define NULL ((void *)0)

extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" const int** __ctype_tolower_loc();

#define assert(x) ((x) ? (void)0 : __assert_fail(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))

int ciHashString(const char* str, int divider)
{
	int sum;
	const char* p;
	int c;

#line 153 "External/GameSpy/chat/chatChannel.c"
	assert(str != NULL);
#line 153 "External/GameSpy/chat/chatChannel.c"
	assert(str[0] != '\0');

	p = str + 1;
	c = str[0];
	sum = 0;
	for (;;)
	{
		int t;

		if ((unsigned int)(c + 0x80) > 0x17f)
			t = c;
		else
			t = (*__ctype_tolower_loc())[c];

		sum += t;

		c = *p++;
		if (c == 0)
			break;
	}

	return sum % divider;
}

// FUNCTION: BF2 0x8408e0
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

typedef char* UTF8String;

#define UTF8_IS_TWO_BYTE(c)			(((c) & 0xE0) == 0xC0)
#define UTF8_IS_THREE_BYTE(c)		(((c) & 0xF0) == 0xE0)
#define UTF8_IS_FOLLOW_BYTE(c)		(((c) & 0xC0) == 0x80)

extern "C" int _UTF8ToUCS2ConversionLengthOnly(const UTF8String theUTF8String)
{
	int length = 0;
	const unsigned char* theReadPos = (const unsigned char*)theUTF8String;

	if (!(theUTF8String != ((void *)0))) {
		__assert_fail("theUTF8String != ((void *)0)", "External/GameSpy/common/gsStringUtil.c", 336, __PRETTY_FUNCTION__);
	}
	if (theUTF8String == ((void *)0))
		return 0;

	while (*theReadPos != '\0')
	{
		// Check for valid two byte string
		if (UTF8_IS_TWO_BYTE(theReadPos[0]) && UTF8_IS_FOLLOW_BYTE(theReadPos[1]))
			theReadPos += 2;

		// Check for valid three byte string
		else if (UTF8_IS_THREE_BYTE(theReadPos[0]) && 
				 UTF8_IS_FOLLOW_BYTE(theReadPos[1]) &&
				 UTF8_IS_FOLLOW_BYTE(theReadPos[2]))
		{
			theReadPos += 3;
		}
		// Anything else means one UTF8 character read from the buffer
		else
			theReadPos++;

		// Increment the length of the UCS2 string
		length++;
	}

	// don't count the null as a character, this conforms
	// with ANSI strlen functions
	return length;
}

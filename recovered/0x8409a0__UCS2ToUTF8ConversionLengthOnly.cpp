// FUNCTION: BF2 0x8409a0
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

typedef unsigned short UCS2Char;
typedef UCS2Char* UCS2String;

extern "C" int _UCS2ToUTF8ConversionLengthOnly(const UCS2String theUCS2String)
{
	int length = 0;
	const UCS2Char* theReadPos = theUCS2String;
	if (!(theUCS2String != ((void *)0))) {
		__assert_fail("theUCS2String != ((void *)0)", "External/GameSpy/common/gsStringUtil.c", 381, __PRETTY_FUNCTION__);
	}
	while (*theReadPos != 0x0000)
	{
		// Values <= 0x7F are single byte ascii
		if (*theReadPos <= 0x7F)
			length++;
		// Values > 0x7F and <= 0x07FF are two bytes in UTF8
		else if (*theReadPos <= 0x07FF) 
			length += 2;
		// Anything else is 3 bytes of UTF8
		else
			length += 3;

		// Set read pos to right spot (1 more UCS2 Character = 2 bytes)
		theReadPos++;
	}

	// don't count the null as a character, this conforms
	// with ANSI strlen functions
	return length;
}

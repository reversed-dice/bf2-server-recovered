// FUNCTION: BF2 0x840bc0
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

typedef unsigned short gsi_u16;
typedef gsi_u16* UCS2String;

extern "C" int UCS2ToAsciiString(const UCS2String theUCS2String, char* theAsciiString)
{
	int length = 0;
	const gsi_u16* aReadPos = theUCS2String;
	char* aWritePos = theAsciiString;

	if (!(theAsciiString != ((void *)0))) {
		__assert_fail("theAsciiString != ((void *)0)", "External/GameSpy/common/gsStringUtil.c", 545, __PRETTY_FUNCTION__);
	}

	// Allow for NULL here since SDKs allow for NULL string arrays
	if (theUCS2String == ((void *)0))
	{
		*theAsciiString = '\0';
		return 1;
	}

	// Convert each character until a '\0' is reached
	while(*aReadPos != '\0')
	{
		(*aWritePos++) = (char)(0x00FF & (*aReadPos++));
		length++;
	}

	// append the NULL
	*aWritePos = '\0';
	length++;

	return length;
}

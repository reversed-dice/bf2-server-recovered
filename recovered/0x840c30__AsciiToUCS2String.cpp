// FUNCTION: BF2 0x840c30
extern "C" {
void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((noreturn));
int AsciiToUCS2String(const char* theAsciiString, unsigned short* theUCS2String);
}

int AsciiToUCS2String(const char* theAsciiString, unsigned short* theUCS2String)
{
	int length = 0;
	const char* aReadPos = theAsciiString;
	unsigned short* aWritePos = theUCS2String;

	if (theUCS2String == 0)
		__assert_fail("theUCS2String != ((void *)0)", "External/GameSpy/common/gsStringUtil.c", 587, "__PRETTY_FUNCTION__.4188");

	if (theAsciiString == 0)
	{
		*theUCS2String = 0x0000;
		return 1;
	}

	while(*aReadPos != '\0')
	{
		(*aWritePos++) = (unsigned short)(0x00FF & (*aReadPos++));
		length++;
	}

	*aWritePos = '\0';
	length++;

	return length;
}

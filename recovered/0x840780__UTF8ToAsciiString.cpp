// FUNCTION: BF2 0x840780
typedef char* UTF8String;

#define UTF8_IS_SINGLE_BYTE(c) (((c) & 0x80) == 0)
#define REPLACE_INVALID_CHAR '?'

extern "C" int UTF8ToAsciiString(const UTF8String theUTF8String, char* theAsciiString)
{
	// Strip non-ascii characters and replace with REPLACE_INVALID_CHAR
	const unsigned char* anInStream = (const unsigned char*)theUTF8String;
	unsigned int   aNumBytesWritten = 0;

	// Allow for NULL here since SDKs allow for NULL string arrays
	if (theUTF8String == ((void *)0))
	{
		*theAsciiString = 0x00;
		return 1;
	}

	// Keep extracting characters until we get a '\0'
	while (*anInStream != '\0')
	{
		if (UTF8_IS_SINGLE_BYTE(*anInStream))
			theAsciiString[aNumBytesWritten++] = (char)*anInStream;
		else
			theAsciiString[aNumBytesWritten++] = REPLACE_INVALID_CHAR;

		// move to next character
		anInStream++;
	}

	// Append the '\0'
	theAsciiString[aNumBytesWritten++] = '\0';
	return (int)aNumBytesWritten;
}

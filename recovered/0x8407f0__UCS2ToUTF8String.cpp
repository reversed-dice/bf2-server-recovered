// FUNCTION: BF2 0x8407f0
typedef unsigned short UCS2Char;
typedef UCS2Char* UCS2String;
typedef char* UTF8String;

extern "C" int _UCS2CharToUTF8String(UCS2Char theUCS2Char, UTF8String theUTF8String);

extern "C" int UCS2ToUTF8String(const UCS2String theUCS2String, UTF8String theUTF8String)
{
	unsigned int	aTotalBytesWritten	= 0;
	unsigned int	aUTF8CharLength		= 0;
	const UCS2Char*	anInStream			= theUCS2String;
	unsigned char*	anOutStream			= (unsigned char*)theUTF8String;

	// Allow for NULL here since SDKs allow for NULL string parameters
	if (theUCS2String == ((void *)0))
	{
		*anOutStream = 0x00;
		return 1;
	}

	// Loop until we reach a NULL terminator
	while(*anInStream != 0)
	{
		aUTF8CharLength = (unsigned int)_UCS2CharToUTF8String(*anInStream, (UTF8String)anOutStream);

		// Move out stream to next character position
		anOutStream += aUTF8CharLength;

		// Move to next UCS2 character
		anInStream++;

		// Record number of bytes written
		aTotalBytesWritten += aUTF8CharLength;
	}
	
	// Copy over the null terminator
	*anOutStream = '\0';
	aTotalBytesWritten++;

	return (int)aTotalBytesWritten;
}

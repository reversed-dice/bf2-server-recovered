// FUNCTION: BF2 0x840850
typedef unsigned short UCS2Char;
typedef UCS2Char* UCS2String;
typedef char* UTF8String;

extern "C" int _ReadUCS2CharFromUTF8String(const UTF8String theUTF8String, UCS2Char* theUnicodeChar);

extern "C" int UTF8ToUCS2String(const UTF8String theUTF8String, UCS2String theUCS2String)
{
	int aNumCharsWritten = 0;
	const unsigned char* anInStream = (const unsigned char*)theUTF8String;
	UCS2Char* anOutStream = theUCS2String;

	if (theUTF8String == ((void *)0))
	{
		*anOutStream = 0;
		return 1;
	}

	while (*anInStream != '\0')
	{
		int aNumBytesRead = _ReadUCS2CharFromUTF8String((UTF8String)anInStream, anOutStream);
		anInStream += aNumBytesRead;
		aNumCharsWritten++;
		anOutStream++;
	}

	*anOutStream = 0;
	aNumCharsWritten++;
	return aNumCharsWritten;
}

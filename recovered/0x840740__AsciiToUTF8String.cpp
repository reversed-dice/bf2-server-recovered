// FUNCTION: BF2 0x840740
extern "C" int AsciiToUTF8String(const char* theAsciiString, char* theUTF8String)
{
	if (theAsciiString == 0)
	{
		*theUTF8String = 0x00;
		return 1;
	}
	else
	{
		unsigned int aLength = 0;
		while (*theAsciiString != '\0')
		{
			*(theUTF8String++) = *(theAsciiString++);
			aLength++;
		} 

		*theUTF8String = '\0';
		aLength++;

		return (int)aLength;
	}
}

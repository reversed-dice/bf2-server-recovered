// FUNCTION: BF2 0x8406b0
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

typedef unsigned short UCS2Char;
typedef char* UTF8String;
typedef unsigned char UTF8ByteType;

#define UTF8_FOLLOW_BYTE_TAG	0x80
#define UTF8_TWO_BYTE_TAG		0xC0
#define UTF8_THREE_BYTE_TAG		0xE0
#define UTF8_FOLLOW_BYTE_MASK	0x3F

extern "C" int _UCS2CharToUTF8String(UCS2Char theUCS2Char, UTF8String theUTF8String)
{
	if (!(theUTF8String != ((void *)0))) {
		__assert_fail("theUTF8String != ((void *)0)", "External/GameSpy/common/gsStringUtil.c", 108, __PRETTY_FUNCTION__);
	}

	// Screen out simple ascii (includes NULL terminator)
	if (theUCS2Char <= 0x7F)
	{
		// 0-7 bit unicode, copy stright over
		theUTF8String[0] = (char)(UTF8ByteType)theUCS2Char;
		return 1;
	}
	else if (theUCS2Char <= 0x07FF)
	{
		// 8-11 bits unicode, store as two byte UTF8
		// :00000ABC DEFGHIJK
		// :110ABCDE 10FGHIJK
		theUTF8String[0] = (char)(UTF8ByteType)(UTF8_TWO_BYTE_TAG | (theUCS2Char >> 6));				// Store the upper 5/11 bits as 0x110xxxxx
		theUTF8String[1] = (char)(UTF8ByteType)(UTF8_FOLLOW_BYTE_TAG | (theUCS2Char & UTF8_FOLLOW_BYTE_MASK));	// Store the lower 6 bits as 0x10xxxxxx
		return 2;
	}
	else
	{
		// 12-16 bits unicode, store as three byte UTF8
		// :ABCDEFGH IJKLMNOP
		// :1110ABCD 10EFGHIJ 10KLMNOP
		theUTF8String[0] = (char)(UTF8ByteType)(UTF8_THREE_BYTE_TAG |  (theUCS2Char >> 12));					// Store the upper 4/16 bits as 0x1110xxxx
		theUTF8String[1] = (char)(UTF8ByteType)(UTF8_FOLLOW_BYTE_TAG | ((theUCS2Char >> 6) & UTF8_FOLLOW_BYTE_MASK));	// Store the 5th-10th bits as 0x10xxxxxx
		theUTF8String[2] = (char)(UTF8ByteType)(UTF8_FOLLOW_BYTE_TAG | ((theUCS2Char) & UTF8_FOLLOW_BYTE_MASK));			// Store the last 6 bits as 0x10xxxxxx
		return 3;
	}
}

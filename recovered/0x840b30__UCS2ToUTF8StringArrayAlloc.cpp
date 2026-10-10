// FUNCTION: BF2 0x840b30
// upstream GameSpy/common/gsStringUtil.c UCS2ToUTF8StringArrayAlloc
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define UCS2String unsigned short*
#define UTF8String char*
extern "C" {
UTF8String UCS2ToUTF8StringAlloc(const UCS2String theUCS2String);
void* gsimalloc(unsigned long);
}

UTF8String* UCS2ToUTF8StringArrayAlloc(const UCS2String* theUCS2StringArray, int theNumStrings)
{
	// Allow for NULL here since SDKs allow for NULL string arrays
	if (theUCS2StringArray == NULL || theNumStrings == 0)
		return NULL;
	else
	{
		UTF8String* aUTF8StringArray = (UTF8String*)gsimalloc(sizeof(UTF8String)*theNumStrings);
		int stringNum = 0;
		while(stringNum < theNumStrings)
		{
			aUTF8StringArray[stringNum] = UCS2ToUTF8StringAlloc(theUCS2StringArray[stringNum]);
			stringNum++;
		}

		return aUTF8StringArray;
	}
}

// FUNCTION: BF2 0x840aa0
// upstream GameSpy/common/gsStringUtil.c UTF8ToUCS2StringArrayAlloc
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define UCS2String unsigned short*
#define UTF8String char*
extern "C" {
UCS2String UTF8ToUCS2StringAlloc(const UTF8String theUTF8String);
void* gsimalloc(unsigned long);
}

UCS2String* UTF8ToUCS2StringArrayAlloc(const UTF8String* theUTF8StringArray, int theNumStrings)
{
	// Allow for NULL here since SDKs allow for NULL string arrays
	if(theUTF8StringArray == NULL || theNumStrings == 0)
		return NULL;
	else
	{
		UCS2String* aUCS2StringArray = (UCS2String*)gsimalloc(sizeof(UCS2String)*theNumStrings);
		int stringNum = 0;
		while(stringNum < theNumStrings)
		{
			aUCS2StringArray[stringNum] = UTF8ToUCS2StringAlloc(theUTF8StringArray[stringNum]);
			stringNum++;
		}

		return aUCS2StringArray;
	}
}

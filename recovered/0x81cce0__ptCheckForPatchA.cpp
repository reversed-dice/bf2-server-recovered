// FUNCTION: BF2 0x81cce0
#include <cstdio>
#include <cstring>
#include <cassert>
extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" void* gsimalloc(unsigned int);
extern "C" void* memset(void*, int, unsigned long);
typedef int (*ghttpCallback)(int, int, char*, long, void*);
extern "C" int ghttpGetA(const char* url, int blocking, ghttpCallback cb, void* data);
extern "C" int ptaPatchCompletedCallback(int, int, char*, long, void*);
extern "C" int __GSIACResult;
extern "C" char __GSIACGamename[];
extern "C" char gPTAVercheckURL[256];
typedef int PTBool;
#define PTFalse 0
#define PTTrue 1
#define PTA_MAX_STRING_SIZE 256
#define PTA_DEFAULT_VERCHECK_URL "http://motd.gamespy.com/motd/vercheck.asp"
typedef void (*ptPatchCallback)(int available, int mandatory, const char* versionName, int fileID, const char* downloadURL, void* param);
struct ptaPatchData { ptPatchCallback callback; void* param; };

PTBool ptCheckForPatchA(int productID, const char* versionUniqueID, int distributionID, ptPatchCallback callback, int blocking, void* param)
{
	char aURL[PTA_MAX_STRING_SIZE];
	ptaPatchData* data;
	int charsWritten;

	if(__GSIACResult != 1)
		return PTFalse;
#line 310 "External/GameSpy/pt/ptMain.c"
	assert(versionUniqueID);
	if(!versionUniqueID)
		return PTFalse;
#line 313 "External/GameSpy/pt/ptMain.c"
	assert(callback);
	if(!callback)
		return PTFalse;

	if (gPTAVercheckURL[0] == '\0')
		sprintf(gPTAVercheckURL, PTA_DEFAULT_VERCHECK_URL);

	data = (ptaPatchData *)gsimalloc(sizeof(ptaPatchData));
	if(!data)
		return PTFalse;
	memset(data, 0, sizeof(ptaPatchData));
	data->callback = callback;
	data->param = param;

	charsWritten =
		snprintf(aURL, PTA_MAX_STRING_SIZE,
		"%s?productid=%d&versionuniqueid=%s&distid=%d&gamename=%s",
		gPTAVercheckURL, productID, versionUniqueID, distributionID,
		__GSIACGamename);

#line 338 "External/GameSpy/pt/ptMain.c"
	assert(charsWritten >= 0);
	if (charsWritten < 0)
		return PTFalse;

	if((ghttpGetA(aURL, blocking, ptaPatchCompletedCallback, data) == (unsigned char)(-1)) && !blocking)
		return PTFalse;

	return PTTrue;
}

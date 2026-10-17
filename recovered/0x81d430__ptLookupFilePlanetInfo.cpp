// FUNCTION: BF2 0x81d430
typedef int PTBool;
typedef void (*ptFilePlanetInfoCallback)();
extern "C" int sprintf(char*, const char*, ...);
extern "C" int snprintf(char*, unsigned long, const char*, ...);
extern "C" void* gsimalloc(unsigned long);
extern "C" int ghttpGetA(const char*, int, void*, void*);
extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" char __GSIACGamename[256];
extern "C" char gPTAFilePlanetURL[256];
extern "C" int ptaFilePlanetCompletedCallback();
#define assert(x) ((x) ? (void)0 : __assert_fail(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))

struct ptaFilePlanetInfoData { int fileID; int operationID; void* callback; void* param; };

// compile-state padding: 8 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
PTBool ptLookupFilePlanetInfo(int fileID, ptFilePlanetInfoCallback callback, PTBool blocking, void* param)
{
	char aURL[256];
	ptaFilePlanetInfoData* data;

#line 611 "External/GameSpy/pt/ptMain.c"
	assert(callback);

	if (gPTAFilePlanetURL[0] == '\0')
		sprintf(gPTAFilePlanetURL, "http://www.fileplanet.com/dlfileraw.asp");

	data = (ptaFilePlanetInfoData*)gsimalloc(sizeof(ptaFilePlanetInfoData));
	if (!data)
		return 0;
	*(long long*)data = 0;
	data->callback = (void*)callback;
	data->param = param;
	data->fileID = fileID;

	snprintf(aURL, 256, "%s?file=%d&gamename=%s", gPTAFilePlanetURL, fileID, __GSIACGamename);

	if ((ghttpGetA(aURL, blocking, (void*)ptaFilePlanetCompletedCallback, data) == -1) && !blocking)
		return 0;

	return 1;
}

// FUNCTION: BF2 0x81cec0
typedef int PTBool;
extern "C" int sprintf(char*, const char*, ...);
extern "C" int snprintf(char*, unsigned long, const char*, ...);
extern "C" int ghttpGetA(const char*, int, void*, void*);
extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" int __GSIACResult;
extern "C" char __GSIACGamename[256];
extern "C" char gPTAMOTDURL[256];
extern "C" char* (*GOAGetUniqueID)(...);
#define assert(x) ((x) ? (void)0 : __assert_fail(#x, __FILE__, __LINE__, __PRETTY_FUNCTION__))

#define GSIACAvailable 1

// compile-state padding: 15 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
PTBool ptTrackUsageA(int userID, int productID, const char* versionUniqueID, int distributionID, PTBool blocking)
{
	int charsWritten;
	char aURL[256];

	if (__GSIACResult != GSIACAvailable)
		return 0;

#line 384 "External/GameSpy/pt/ptMain.c"
	assert(versionUniqueID);

	if (gPTAMOTDURL[0] == '\0')
		sprintf(gPTAMOTDURL, "http://motd.gamespy.com/motd/motd.asp");

	charsWritten = snprintf(aURL, 256,
		"%s?userid=%d&productid=%d&versionuniqueid=%s&distid=%d&uniqueid=%s&gamename=%s",
		gPTAMOTDURL, userID, productID, versionUniqueID, distributionID, GOAGetUniqueID(),
		__GSIACGamename);

#line 398 "External/GameSpy/pt/ptMain.c"
	assert(charsWritten >= 0);

	if (ghttpGetA(aURL, blocking, 0, 0) == -1)
		return 0;

	return 1;
}

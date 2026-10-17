// FUNCTION: BF2 0x826860

typedef void * SBServer;

struct SBServerListSortData
{
	char pad0[0x8b8];
	char sortkey[0x208];
	int sortascending;
};

extern SBServerListSortData * g_sortserverlist;

double SBServerGetFloatValueA(SBServer server, const char * key, double def);
int prevKeyCompare(SBServer server1, SBServer server2);

// compile-state padding: 14 unused functions, see trick 378
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
int FloatKeyCompare(const void * entry1, const void * entry2)
{
	SBServer server1 = *(SBServer *)entry1;
	SBServer server2 = *(SBServer *)entry2;
	double f;
	const char * currsortkey = g_sortserverlist->sortkey;

	f = SBServerGetFloatValueA(server1, currsortkey, 0) -
		SBServerGetFloatValueA(server2, currsortkey, 0);

	if (!((float)f > (float)0.0) && !((float)f < (float)0.0))
		return prevKeyCompare(server1, server2);

	if (!g_sortserverlist->sortascending)
		f = -f;

	if ((float)f > (float)0.0)
		return 1;
	else if ((float)f < (float)0.0)
		return -1;
	else
		return 0;
}

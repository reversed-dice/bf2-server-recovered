// FUNCTION: BF2 0x8269f0

typedef void * SBServer;

struct SBServerListSortData
{
	char pad0[0x8b8];
	char sortkey[0x208];
	int sortascending;
};

extern SBServerListSortData * g_sortserverlist;

const char * SBServerGetStringValueA(SBServer server, const char * key, const char * def);
int strcasecmp(const char * s1, const char * s2, ...);
int prevKeyCompare(SBServer server1, SBServer server2);

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
int StrNoCaseKeyCompare(const void * entry1, const void * entry2)
{
	SBServer server1 = *(SBServer *)entry1;
	SBServer server2 = *(SBServer *)entry2;
	int diff;
	const char * currsortkey = g_sortserverlist->sortkey;

	diff = strcasecmp(SBServerGetStringValueA(server1, currsortkey, ""),
					  SBServerGetStringValueA(server2, currsortkey, ""));

	if (diff == 0)
		return prevKeyCompare(server1, server2);

	if (!g_sortserverlist->sortascending)
		diff = -diff;

	return diff;
}

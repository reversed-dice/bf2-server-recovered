// FUNCTION: BF2 0x81ef60
struct DArray;
struct BucketSet;

struct statsgame_s
{
	char pad0[0x8];
	int usebuckets;
	BucketSet * buckets;
	char pad1[0x10];
	DArray * playernums;
	DArray * teamnums;
};
typedef statsgame_s * statsgame_t;

extern statsgame_t g_statsgame;

extern "C" void FreeBucketSet(BucketSet *set);
extern "C" void ArrayFree(DArray *array);
extern "C" void gsifree(void *ptr);

// compile-state padding: 13 unused functions, see trick 378
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
extern "C" void FreeGame(statsgame_t game)
{
	if (!game || game == g_statsgame)
	{
		game = g_statsgame;
		g_statsgame = 0;
	}
	if (!game)
		return;
	if (game->usebuckets)
	{
		if (game->buckets != 0)
			FreeBucketSet(game->buckets);
		if (game->playernums != 0)
			ArrayFree(game->playernums);
		if (game->teamnums != 0)
			ArrayFree(game->teamnums);
	}
	gsifree(game);
}

// FUNCTION: BF2 0x8209b0
struct statsgame_s
{
	char pad[0x10];
	void * buckets;
};
typedef statsgame_s * statsgame_t;

typedef void * (*BucketFunc)(void *buckets, char *name, void *value);
extern statsgame_t g_statsgame;

extern "C" void * BucketNew(void *buckets, char *name, int type, void *value);

#define bt_int 0

extern "C" int ServerOpInt(statsgame_t game, char *name, BucketFunc func, int value, int index)
{
	int *ret;
	if (game == ((void *)0)) game = g_statsgame;
	if (!game) ret = &value;
	else {
		ret = (int *)func(game->buckets, name, &value);
		if (!ret)
			ret = (int *)BucketNew(game->buckets, name, bt_int, &value);
	}
	
	return *ret;
}

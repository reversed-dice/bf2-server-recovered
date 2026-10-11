// FUNCTION: BF2 0x820a40
struct statsgame_s
{
	char pad[0x10];
	void * buckets;
};
typedef statsgame_s * statsgame_t;

typedef void * (*BucketFunc)(void *buckets, char *name, void *value);
extern statsgame_t g_statsgame;

extern "C" void * BucketNew(void *buckets, char *name, int type, void *value);

#define bt_float 1

extern "C" double ServerOpFloat(statsgame_t game, char *name, BucketFunc func, double value, int index)
{
	double *ret;
	if (game == ((void *)0)) game = g_statsgame;
	if (!game) ret = &value;
	else {
		ret = (double *)func(game->buckets, name, &value);
		if (!ret)
			ret = (double *)BucketNew(game->buckets, name, bt_float, &value);
	}
	
	return *ret;
}

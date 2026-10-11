// FUNCTION: BF2 0x820de0
extern "C" int sprintf(char* buf, const char* fmt, ...);

struct statsgame_s;
typedef statsgame_s* statsgame_t;
struct bucketset_s;
typedef bucketset_s* bucketset_t;
typedef void* (*BucketFunc)(bucketset_t set, char* name, void* value);

extern "C" int GetPlayerIndex(statsgame_t game, int pnum);
extern "C" double ServerOpFloat(statsgame_t game, char* name, BucketFunc func, double value, int index);

double PlayerOpFloat(statsgame_t game, char* name, BucketFunc func, double value, int index)
{
    char fullname[64];
    sprintf(fullname, "%s_%d", name, GetPlayerIndex(game, index));
    return ServerOpFloat(game, fullname, func, value, index);
}

// FUNCTION: BF2 0x820c10
extern "C" int sprintf(char* buf, const char* fmt, ...);

struct statsgame_s;
typedef statsgame_s* statsgame_t;
struct bucketset_s;
typedef bucketset_s* bucketset_t;
typedef void* (*BucketFunc)(bucketset_t set, char* name, void* value);

extern "C" int GetTeamIndex(statsgame_t game, int tnum);
extern "C" double ServerOpFloat(statsgame_t game, char* name, BucketFunc func, double value, int index);

double TeamOpFloat(statsgame_t game, char* name, BucketFunc func, double value, int index)
{
    char fullname[64];
    sprintf(fullname, "%s_t%d", name, GetTeamIndex(game, index));
    return ServerOpFloat(game, fullname, func, value, index);
}

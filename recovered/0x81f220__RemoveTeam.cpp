// FUNCTION: BF2 0x81f220
extern void* g_statsgame;
extern int current_time(...);
extern void* bucketfuncs;
extern void* g_removeTeam_fn;

typedef void (*BucketFn)(void*, char const*, void*, int, int);

void fn_81f220(void* s, int x)
{
    if (s == 0) {
        s = g_statsgame;
        if (s == 0)
            return;
    }
    BucketFn f = (BucketFn)g_removeTeam_fn;
    int dtime = (current_time() - *(int*)((char*)s + 0x40)) / 1000;
    f(s, "dtime", bucketfuncs, dtime, x);
}

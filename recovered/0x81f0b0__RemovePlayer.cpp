// FUNCTION: BF2 0x81f0b0
extern void* g_statsgame;
extern int current_time(...);
extern void* bucketfuncs;
extern void* g_removePlayer_fn;

typedef void (*BucketFn)(void*, char const*, void*, int, int);

void fn_81f0b0(void* s, int x)
{
    if (s == 0) {
        s = g_statsgame;
        if (s == 0)
            return;
    }
    BucketFn f = (BucketFn)g_removePlayer_fn;
    int dtime = (current_time() - *(int*)((char*)s + 0x40)) / 1000;
    f(s, "dtime", bucketfuncs, dtime, x);
}

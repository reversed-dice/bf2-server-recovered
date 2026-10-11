// FUNCTION: BF2 0x81e660
struct bucketset_s {
    void *buckets;
};
typedef struct bucketset_s *bucketset_t;

typedef struct bucket_s
{
	char *name;
	int type;
	int nvals;
	union
	{
		int ival;
		double fval;
		char *sval;
	} vals;
} bucket_t;

extern bucketset_t g_buckets;

extern "C" {
void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((noreturn));
void * TableLookup(void *table, const void *elem);
bucket_t *DoFind(bucketset_t set, char *name);
}

bucket_t *DoFind(bucketset_t set, char *name)
{
	bucket_t tbucket;

	if (set == 0)
		set = g_buckets;
	if (set == 0)
		__assert_fail("set", "External/GameSpy/gstats/gbucket.c", 336, "__PRETTY_FUNCTION__.4371");

	tbucket.name = name;
	return (bucket_t *)TableLookup(set->buckets, &tbucket);
}

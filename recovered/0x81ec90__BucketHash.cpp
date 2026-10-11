// FUNCTION: BF2 0x81ec90
extern "C" unsigned long strlen(const char *) throw ();
extern "C" const int **__ctype_tolower_loc (void) throw () __attribute__ ((__const__));

#define tolower(c) ((*__ctype_tolower_loc ())[(int) (c)])

typedef struct
{
	char *name;
} bucket_t;

#define MULTIPLIER -1664117991

extern "C" int BucketHash(const void *elem, int numbuckets)
{
    unsigned int i;
    unsigned int len;
    unsigned int hashcode = 0;

	char *s = ((bucket_t *)elem)->name;
    len = strlen(s);
	for (i = 0; i < len ; i++) {
	  hashcode = (unsigned int)((int)hashcode * MULTIPLIER + tolower(s[i]));
	}
    return (int)(hashcode % numbuckets);
}

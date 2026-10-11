// FUNCTION: BF2 0x824c20
extern "C" const int **__ctype_tolower_loc (void) throw () __attribute__ ((__const__));

#define tolower(c) ((*__ctype_tolower_loc ())[(int) (c)])

typedef unsigned int goa_uint32;
#define MULTIPLIER -1664117991

extern "C" int StringHash(const char *s, int numbuckets)
{
	goa_uint32 hashcode = 0;
	while (*s != 0)
	{
		hashcode = (goa_uint32)((int)hashcode * MULTIPLIER + tolower(*s));
		s++;
	}
    return (int)(hashcode % numbuckets);
}

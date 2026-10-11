// FUNCTION: BF2 0x826ed0
typedef void * HashTable;
struct SBServerList;

typedef struct
{
	const char *str;
	int refcount;
} SBRefString;

extern "C" HashTable SBRefStrHash(SBServerList *slist);
extern "C" void * TableLookup(HashTable table, const void *elem);
extern "C" void TableEnter(HashTable table, const void *elem);
extern "C" char * goastrdup(const char *src);

extern "C" const char *SBRefStr(SBServerList *slist, const char *str)
{
	SBRefString ref, *val;
	ref.str = str;
	val = (SBRefString *)TableLookup(SBRefStrHash(slist), &ref);
	if (val != ((void *)0))
	{
		val->refcount++;
		return val->str;
	}

	//else we need to add.
	ref.str = goastrdup(str);
	ref.refcount = 1;
	TableEnter(SBRefStrHash(slist), &ref);
	return ref.str;
}

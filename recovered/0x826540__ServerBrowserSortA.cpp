// FUNCTION: BF2 0x826540
extern "C" char *strcpy(char *dest, const char *src);
typedef void *ServerBrowser;
typedef int SBBool;
typedef int SBCompareMode;

#define SORTKEY_LENGTH 256

struct SBServerList {
	char pad[0x70];
};

struct SortInfo {
	char sortkey[SORTKEY_LENGTH];
	SBCompareMode comparemode;
};

struct sb_s {
	char pad[0x70];
	SBServerList list;
};

void SBServerListSort(SBServerList *list, SBBool ascending, SortInfo info);

void ServerBrowserSortA(ServerBrowser sb, SBBool ascending, const char *sortkey, SBCompareMode comparemode)
{
	SortInfo info;
	info.comparemode = comparemode;
	strcpy(info.sortkey, sortkey);
	SBServerListSort(&((sb_s *)sb)->list, ascending, info);
}

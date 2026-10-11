// FUNCTION: BF2 0x826e30
struct SBServerList {
    char pad[8];
    void *servers;
    char pad2[0xc00 - 8 - 8];
    void *deadlist;
};

extern "C" {
int ArrayLength(void *arr);
void * ArrayNth(void *arr, int n);
void ArrayClear(void *arr);
void AddServerToDeadlist(SBServerList *slist, void *server);
void SBFreeDeadList(SBServerList *slist);
void SBServerListClear(SBServerList *slist);
}

void SBServerListClear(SBServerList *slist)
{
	int i;
	int nservers = ArrayLength(slist->servers);
	for (i = 0 ; i < nservers ; i++)
	{
		AddServerToDeadlist(slist, *(void **)ArrayNth(slist->servers, i));
	}
	ArrayClear(slist->servers);
	SBFreeDeadList(slist);
}

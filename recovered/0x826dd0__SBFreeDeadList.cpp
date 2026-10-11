// FUNCTION: BF2 0x826dd0
struct SBServerList {
    char pad[0xc00];
    void *deadlist;
};

extern "C" {
void * SBServerGetNext(void *server);
void SBServerFree(void **server);
void SBFreeDeadList(SBServerList *slist);
}

void SBFreeDeadList(SBServerList *slist)
{
	void *server, *next;
	if (slist->deadlist == 0)
		return;
	server = slist->deadlist;
	while (server != 0)
	{
		next = SBServerGetNext(server);
		SBServerFree(&server);
		server = next;
	}
	slist->deadlist = 0;
}

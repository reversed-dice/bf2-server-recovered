// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x826cf0
typedef void* SBServer;

struct SBServerList
{
    char pad0[0xc00];
    SBServer deadlist;
};

void SBServerSetNext(SBServer server, SBServer next);

void AddServerToDeadlist(SBServerList* slist, SBServer server)
{
    if (slist->deadlist == 0)
    {
        SBServerSetNext(server, 0);
    }
    else
        SBServerSetNext(server, slist->deadlist);
    slist->deadlist = server;
}

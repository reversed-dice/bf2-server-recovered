// FUNCTION: BF2 0x807db0
typedef void* CHAT;
extern "C" void gsifree(void* p);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciServerMessageFilter
{
    int type;
    char pad0[4];
    char* name;
    char* name2;
    char pad1[0x30 - 0x18];
    void* data;
    char pad2[0x40 - 0x38];
    ciServerMessageFilter* pnext;
};

struct ciConnection
{
    char pad0[0x878];
    ciServerMessageFilter* filterList;
    ciServerMessageFilter* lastFilter;
};

void ciRemoveFilter(CHAT chat, ciServerMessageFilter* filter)
{
    ciServerMessageFilter* pcurr;
    ciServerMessageFilter* pprev = 0;
    ciConnection* connection = (ciConnection*)chat;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x19f, "ciRemoveFilter");
    if (filter == 0)
        __assert_fail("filter != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x1a1, "ciRemoveFilter");

    for (pcurr = connection->filterList; pcurr != 0; pcurr = pcurr->pnext)
    {
        if (pcurr == filter)
        {
            if (connection->filterList == pcurr)
                connection->filterList = connection->filterList->pnext;

            if (connection->lastFilter == pcurr)
                connection->lastFilter = pprev;

            if (pprev != 0)
                pprev->pnext = pcurr->pnext;

            gsifree(filter->data);
            gsifree(filter->name);
            gsifree(filter->name2);
            gsifree(filter);

            return;
        }

        pprev = pcurr;
    }
}

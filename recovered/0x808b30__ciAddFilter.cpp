// FUNCTION: BF2 0x808b30
typedef void* CHAT;
extern "C" void* gsimalloc(unsigned long size);
extern "C" void* memset(void* dst, int c, unsigned long n);
extern "C" char* goastrdup(const char* str);
extern "C" int current_time(...);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct ciServerMessageFilter
{
    int type;
    int timeout;
    char* name;
    char* name2;
    void* callback;
    void* callback2;
    void* param;
    void* data;
    int ID;
    char pad0[4];
    ciServerMessageFilter* pnext;
};

struct ciConnection
{
    char pad0[0x878];
    ciServerMessageFilter* filterList;
    ciServerMessageFilter* lastFilter;
};

extern "C" int ciGetNextID(CHAT chat);

int ciAddFilter(CHAT chat, int type, const char* name, const char* name2, void* callback, void* callback2, void* param, void* data)
{
    ciServerMessageFilter* filter;
    ciConnection* connection = (ciConnection*)chat;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatHandlers.c", 0x35c, "ciAddFilter");

    filter = (ciServerMessageFilter*)gsimalloc(sizeof(ciServerMessageFilter));
    if (filter == 0)
        return 0;

    memset(filter, 0, sizeof(ciServerMessageFilter));
    filter->type = type;
    filter->timeout = (current_time() + 0xea60);
    filter->callback = callback;
    filter->callback2 = callback2;
    filter->param = param;
    filter->data = data;
    if (name)
        filter->name = goastrdup(name);
    else
        filter->name = 0;
    if (name2)
        filter->name2 = goastrdup(name2);
    else
        filter->name2 = 0;
    filter->ID = ciGetNextID(chat);

    if (connection->filterList == 0)
        connection->filterList = filter;
    else
        connection->lastFilter->pnext = filter;
    connection->lastFilter = filter;

    return filter->ID;
}

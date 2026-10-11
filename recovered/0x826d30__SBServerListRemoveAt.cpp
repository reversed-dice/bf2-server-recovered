// FUNCTION: BF2 0x826d30
extern "C" void* ArrayNth(void* array, int index);
extern "C" void ArrayDeleteAt(void* array, int index);
extern "C" void AddServerToDeadlist(void* list, void* server);

struct SBServerList { char pad0[8]; void* servers; };

void SBServerListRemoveAt(SBServerList* list, int index)
{
    void* server = *(void**)ArrayNth(list->servers, index);
    void (*notify)(void*, int, void*, void*) = *(void(**)(void*, int, void*, void*))((char*)list + 0x898);
    notify(list, 2, server, *(void**)((char*)list + 0x8b0));
    ArrayDeleteAt(list->servers, index);
    AddServerToDeadlist(list, server);
}

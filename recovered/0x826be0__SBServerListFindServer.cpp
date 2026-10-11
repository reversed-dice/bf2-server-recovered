// FUNCTION: BF2 0x826be0
struct SBServerList { void* x0; void* servers; };
extern "C" int ArrayLength(void* array);
extern "C" void* ArrayNth(void* array, int index);

extern "C" int SBServerListFindServer(SBServerList* list, void* server)
{
    int n = ArrayLength(list->servers);
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            if (*(void**)ArrayNth(list->servers, i) == server)
                return i;
        }
    }
    return -1;
}

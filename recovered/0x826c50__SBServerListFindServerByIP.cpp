// FUNCTION: BF2 0x826c50
extern "C" {
    extern int ArrayLength(void* array);
    extern void* ArrayNth(void* array, int n);
    extern unsigned int SBServerGetPublicInetAddress(void* server);
    extern unsigned short SBServerGetPublicQueryPortNBO(void* server);
}

struct SBServerList {
    char pad[8];
    void* servers;
};

extern "C" int SBServerListFindServerByIP(SBServerList* list, int ip, unsigned short port) {
    int nservers = ArrayLength(list->servers);
    for (int i = 0; i < nservers; i++) {
        void* server = *(void**)ArrayNth(list->servers, i);
        if (SBServerGetPublicInetAddress(server) == (unsigned int)ip && SBServerGetPublicQueryPortNBO(server) == port)
            return i;
    }
    return -1;
}

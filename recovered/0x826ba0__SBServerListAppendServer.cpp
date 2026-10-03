// FUNCTION: BF2 0x826ba0
// SBServerListAppendServer: append server to list and notify
extern "C" {
    void ArrayAppend(long arr, void* item);
}

struct ServerList {
    char _pad[0x8];
    long m_servers;     // 0x08
    char _pad2[0x890-sizeof(long)]; // 0x10-0x88f
    void (*m_callback)(void*, int, long, long); // 0x898
    char _pad3[0x8b0-0x898-sizeof(void(*)())]; // 0x8a0-0x8af
    long m_userData;    // 0x8b0
};

void SBServerListAppendServer(ServerList* list, void* server) {
    void* item = server;
    ArrayAppend(list->m_servers, &item);
    list->m_callback(list, 0, (long)item, list->m_userData);
}

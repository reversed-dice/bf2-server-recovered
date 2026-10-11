// FUNCTION: BF2 0x832e10
// gpiAddPeer
extern "C" void* gsimalloc(unsigned long);
extern "C" void* memset(void*, int, unsigned long);
extern "C" unsigned long time(unsigned long*);
extern "C" void* ArrayNew(int, int, void*);
extern "C" void gpiFreeMessage(void*);

struct GPIPeer {
    int m_f0;               // +0x00
    int m_f4;               // +0x04
    int m_f8;               // +0x08
    int m_fc;               // +0x0c
    unsigned long m_f10;    // +0x10
    unsigned char pad[0x50 - 0x18];
    void* m_array;          // +0x50
    void* m_next;           // +0x58
};

struct GPIConn {
    unsigned char pad[0x4c0];
    GPIPeer* m_peerList;    // +0x4c0
};

GPIPeer* gpiAddPeer(void* connection, int profileId, int flag) {
    GPIConn* conn = *(GPIConn**)connection;
    GPIPeer* peer = (GPIPeer*)gsimalloc(sizeof(GPIPeer));
    if (!peer)
        return peer;
    memset(peer, 0, sizeof(GPIPeer));
    peer->m_f0 = 0x64;
    peer->m_f4 = flag;
    peer->m_f8 = -1;
    peer->m_fc = profileId;
    peer->m_f10 = time(0) + 300;
    peer->m_next = conn->m_peerList;
    peer->m_array = ArrayNew(0x20, 0, (void*)gpiFreeMessage);
    conn->m_peerList = peer;
    return peer;
}

// FUNCTION: BF2 0x847f90
struct CClients {
    int SelectOutgoingSingleChannelSet(unsigned short, unsigned int);
    char pad[0x400];
};
struct Router {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int RouteVoiceData(unsigned short, char*, int);
    char pad0[0x848 - 8];
    CClients m_clients;
    int HandlePacketVoiceFrameDefaultChannelSet(unsigned short sid, char* data, int len);
};
int Router::HandlePacketVoiceFrameDefaultChannelSet(unsigned short sid, char* data, int len) {
    int r = m_clients.SelectOutgoingSingleChannelSet(sid, 0);
    if (r == 1)
        return RouteVoiceData(sid, data, len);
    return r;
}

// FUNCTION: BF2 0x817590
extern "C" void gsifree(void* ptr);
extern "C" void* ghiRequestToConnection(void* request);
extern "C" int ghiParseProxyServer(const char* host, void** addr, unsigned short* port);

struct GhiConnection { char pad0[0x208]; void* m_proxyAddr; unsigned short m_proxyPort; };

int ghiSetRequestProxy(void* request, const char* proxy)
{
    GhiConnection* conn = (GhiConnection*)ghiRequestToConnection(request);
    if (conn == 0)
        return 0;
    if (conn->m_proxyAddr != 0) {
        gsifree(conn->m_proxyAddr);
        conn->m_proxyAddr = 0;
        conn->m_proxyPort = 80;
    }
    if (proxy == 0 || *proxy == 0)
        return 1;
    return ghiParseProxyServer(proxy, &conn->m_proxyAddr, &conn->m_proxyPort);
}

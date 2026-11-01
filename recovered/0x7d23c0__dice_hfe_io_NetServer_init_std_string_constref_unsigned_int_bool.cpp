// FUNCTION: BF2 0x7d23c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <deque>

namespace dice { namespace hfe {

class FilteringAgent {
public:
    virtual ~FilteringAgent();
};

struct timeval {
    long tv_sec;
    long tv_usec;
};

struct NetTime {
    long tv_sec;   // +0x0
    long tv_usec;  // +0x8
    char _pad[0x10];
    int m_extra;   // +0x20
};

extern "C" int gettimeofday(timeval* tv, void* tz);

struct Settings {
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual void _v7();
    virtual void _v8();
    virtual void _v9();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

extern Settings* settings;

std::string formatString(const char* fmt, ...);

namespace io {

class PunkBusterFilterAgent : public FilteringAgent {
};

class PacketFilter {
public:
    void registerAgent(int type, FilteringAgent* agent);
};

class Socket;

class SocketManager {
public:
    virtual bool startUp();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual Socket* createSocket(const std::string& address, int type);
};

extern SocketManager* socketManager;

class BitStream {
public:
    char _pad[0x14];
    unsigned int m_val24;
    unsigned int m_val28;
    char _pad2c[0x1c];
    unsigned int m_state48;
    char _tail[0x2c];

    BitStream(unsigned char* buf, unsigned int size);
};

class SWConnection {
public:
    char _pad[0x168];

    SWConnection();
};

class NetServer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void shutDown();

    char _pad08[0x20];             // 0x08 .. 0x28
    void* m_28;                    // 0x28
    char _pad30[0x10];             // 0x30 .. 0x40
    void* m_40;                    // 0x40
    std::deque<int> m_freeIds;     // 0x48
    char _pad98[0x404];            // 0x98 .. 0x49c
    int m_49c;                     // 0x49c
    int m_4a0;                     // 0x4a0
    char _pad4a4[0x14];            // 0x4a4 .. 0x4b8
    char* m_4b8;                   // 0x4b8
    unsigned int m_port;           // 0x4c0
    void* m_4c8;                   // 0x4c8
    Socket* m_socket;              // 0x4d0
    char _pad4d8[0x8];             // 0x4d8 .. 0x4e0
    char* m_4e0;                   // 0x4e0
    BitStream* m_4e8;              // 0x4e8
    BitStream* m_4f0;              // 0x4f0
    bool m_4f8;                    // 0x4f8
    char _pad4f9[0x2f];            // 0x4f9 .. 0x528
    NetTime m_time;                // 0x528
    char _pad538[0x40];            // 0x550 .. 0x590
    std::string m_590;             // 0x590
    char _pad598[0x4];             // 0x598 .. 0x59c
    char m_59c;                    // 0x59c
    char _pad59d[0xb];             // 0x59d .. 0x5a8
    SWConnection** m_5a8;          // 0x5a8
    char _pad5b0[0x8];             // 0x5b0 .. 0x5b8
    PacketFilter m_filter;         // 0x5b8

    int init(const std::string& address, unsigned int port, bool b);
    bool startReceiveThread();
};

int NetServer::init(const std::string& address, unsigned int port, bool b)
{
    int result = 7;

    m_filter.registerAgent(0, new PunkBusterFilterAgent);
    if (socketManager == 0 || !socketManager->startUp())
    {
        result = 6;
        return result;
    }

    NetTime& t = m_time;
    t.m_extra = 0;
    gettimeofday((timeval*)&t, 0);
    std::string addr = formatString("%s:%d", address.c_str(), port);
    m_socket = socketManager->createSocket(addr, 0);
    if (m_socket == 0)
    {
        shutDown();
        result = 6;
        return result;
    }

    m_590.assign(addr);
    m_port = port;
    m_4c8 = m_socket;
    m_4b8 = new char[0x5c1];
    if (m_4b8 == 0)
        return result;
    m_4e0 = new char[0x5c1];
    if (m_4e0 == 0)
        return result;
    m_4e8 = new BitStream(0, 0);
    if (m_4e8 == 0)
        return result;
    m_4f0 = new BitStream(0, 0);
    if (m_4f0 == 0)
        return result;

    m_4a0 = 0;
    m_5a8 = new SWConnection*[64];
    for (int i = 0; i < 0x200; i += 8)
        *(SWConnection**)((char*)m_5a8 + i) = new SWConnection();

    if (!startReceiveThread())
    {
        shutDown();
        result = 9;
        return result;
    }

    m_40 = m_28;
    for (int i = m_49c - 1; i >= 0; --i)
        m_freeIds.push_back(i);

    m_4f8 = true;
    m_59c = *dice::hfe::settings->getFlag(std::string("GSDebugNetwork"), (char)0);
    result = 0;
    return result;
}

} } }

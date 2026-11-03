// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4ccca0
#include <string.h>
#include <string>
#include <errno.h>
#include <netinet/in.h>
#include <arpa/inet.h>

namespace dice { namespace hfe {

class ServerSettings;
class VoipServerInternal;
class IClassManager;
class IGameServer;
class IGameServerAddr;

namespace io {
class UDPSocket;
}

class IClassManager {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90();
    virtual void loadSettings(std::string const& name);
};

extern IClassManager* classManager;
extern void* game;
extern ServerSettings* serverSettings;
extern unsigned int IID_IGameServer;

class IGame {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10();
    virtual void* queryInterface(unsigned int iid);
};

class IGameServerAddr {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void _vc0(); virtual void _vc8(); virtual void _vd0(); virtual void _vd8();
    virtual void _ve0(); virtual void _ve8(); virtual void _vf0(); virtual void _vf8();
    virtual void _v100(); virtual void _v108(); virtual void _v110();
    virtual std::string getAddressString();
};

class IGameServer {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void _vc0(); virtual void _vc8(); virtual void _vd0(); virtual void _vd8();
    virtual void _ve0(); virtual void _ve8(); virtual void _vf0(); virtual void _vf8();
    virtual void _v100(); virtual void _v108(); virtual void _v110(); virtual void _v118();
    virtual void _v120(); virtual void _v128(); virtual void _v130(); virtual void _v138();
    virtual void _v140(); virtual void _v148(); virtual void _v150(); virtual void _v158();
    virtual void _v160(); virtual void _v168(); virtual void _v170();
    virtual IGameServerAddr* getConnection();
};

namespace io {

class UDPSocket {
public:
    struct Address {
        sockaddr_in in;
        unsigned char len;
    };
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual int receive(unsigned char* buf, int size);
    virtual void _v28(); virtual void _v30();
    virtual bool open(Address const& addr);
    virtual void update();
    UDPSocket();
    bool listen(std::string const& name, bool blocking);
    unsigned char _pad0[0x30];
};

}

class VoipServerInternal {
public:
    VoipServerInternal();
    void Start(std::string const& name, unsigned int port);
    unsigned char _pad0[0xa8];
};

struct VoipKeyBuffer {
    char m_data[0x68];
    int m_len;
};

class VoipServerConnection {
public:
    virtual ~VoipServerConnection();
    io::UDPSocket* m_socket;                       // 0x8
    unsigned char _gap0[0x431c - 0x10];
    bool m_x431c;                                  // 0x431c
    bool m_x431d;                                  // 0x431d
    unsigned char _gap1[2];
    int m_x4320;                                   // 0x4320
    VoipKeyBuffer m_kb;                            // 0x4324
    unsigned char _gap2[0x4408 - 0x4390];
    std::string m_name;                            // 0x4408
    int m_port;                                    // 0x4410
    int m_x4414;                                   // 0x4414
    unsigned char _gap3[8];
    VoipServerInternal* m_internal;                // 0x4420
    bool GetVoipServerSettings(ServerSettings* settings);
    bool Init();
};

bool VoipServerConnection::Init()
{
    classManager->loadSettings(std::string("GameServerSettings"));
    if (!GetVoipServerSettings(serverSettings))
        return false;
    if (!m_x431c)
        return true;
    char key[256];
    sprintf(key, "%06d%06d%06d%06d", 1, 5, 0xc51, 0);
    size_t len = strlen(key);
    VoipKeyBuffer* b = &m_kb;
    if (len < 100) {
        b->m_len = (int)len;
        memcpy(b->m_data, key, b->m_len);
        b->m_data[b->m_len] = 0;
    }
    m_socket = new io::UDPSocket();
    if (!m_socket)
        return false;
    char port[128];
    sprintf(port, ":%d", m_x4414);
    if (!m_socket->listen(std::string(port), false))
        errno = 0;
    sockaddr_in addr;
    *(unsigned long*)&addr = 0;
    *(unsigned long*)&addr.sin_zero[0] = 0;
    addr.sin_family = AF_INET;
    unsigned short p = (unsigned short)m_port;
    addr.sin_port = (unsigned short)((unsigned short)(p << 8) | (unsigned short)(p >> 8));
    if (m_x4320 == 1) {
        std::string host("127.0.0.1");
        IGame* g = (IGame*)game;
        IGameServer* srv = (IGameServer*)g->queryInterface(IID_IGameServer);
        if (srv != 0) {
            IGameServerAddr* a = srv->getConnection();
            if (a != 0)
                host.assign(a->getAddressString());
        }
        addr.sin_addr.s_addr = inet_addr(host.c_str());
    } else {
        addr.sin_addr.s_addr = m_x4320;
    }
    io::UDPSocket::Address bindAddr;
    bindAddr.len = 0x10;
    memcpy(&bindAddr.in, &addr, 0x10);
    m_socket->open(bindAddr);
    if (m_x431d)
        return true;
    m_internal = new VoipServerInternal();
    if (!m_internal)
        return true;
    int n = rand() % 10 + 8;
    m_name.assign(1, 'v');
    for (int i = 0; i < n; ++i)
        m_name.push_back((char)('a' + rand() % 26));
    m_internal->Start(m_name, (unsigned int)m_port);
    return true;
}

} }

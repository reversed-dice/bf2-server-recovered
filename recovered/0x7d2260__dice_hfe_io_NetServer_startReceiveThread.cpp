// FUNCTION: BF2 0x7d2260
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

namespace io {

class NetServer;

class Thread {
public:
    void start(char const* name, int priority);
};

class NetServerThread : public Thread {
public:
    char _pad[0x18];
    NetServerThread(NetServer* server);
};

class NetServer {
public:
    char _pad[0x570];
    NetServerThread* m_receiveThread;
    bool startReceiveThread();
};

bool NetServer::startReceiveThread() {
    NetServerThread* t = new NetServerThread(this);
    m_receiveThread = t;
    if (t == 0) {
        Debug(6, std::string("IO/Network/ProtocolLayer/NetServer.cpp"), 0x7a9,
              std::string(&DAT_00bb25f1)).os
            << "serverReceiveThread was not created successfully";
        return false;
    }
    t->start("NetServerThread", 3);
    return true;
}

}}}

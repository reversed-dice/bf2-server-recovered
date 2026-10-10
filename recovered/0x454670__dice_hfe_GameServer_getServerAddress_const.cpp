// FUNCTION: BF2 0x454670
#include <string>

namespace dice { namespace hfe {

class ISocket {
public:
    virtual ~ISocket();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual void dummy27();
    virtual void dummy28();
    virtual void dummy29();
    virtual void dummy30();
    virtual void dummy31();
    virtual void dummy32();
    virtual void dummy33();
    virtual std::string getAddress() const;
};

class GameServer {
public:
    char _pad[0xb0];
    ISocket* m_socket;

    std::string getServerAddress() const;
};

std::string GameServer::getServerAddress() const {
    if (m_socket) {
        return m_socket->getAddress();
    }
    return "";
}

} }

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x45b670
#include <string>

namespace dice { namespace hfe { namespace world {

class IPlayer {
public:
    virtual ~IPlayer() = 0;
    virtual void d0() = 0;
    virtual void d1() = 0;
    virtual void d2() = 0;
    virtual void d3() = 0;
    virtual void d4() = 0;
    virtual void d5() = 0;
    virtual void d6() = 0;
    virtual void d7() = 0;
    virtual void d8() = 0;
    virtual void d9() = 0;
    virtual void d10() = 0;
    virtual void d11() = 0;
    virtual void d12() = 0;
    virtual void d13() = 0;
    virtual void d14() = 0;
    virtual void d15() = 0;
    virtual void d16() = 0;
    virtual void d17() = 0;
    virtual void d18() = 0;
    virtual int getID() = 0;
};

} } }

namespace dice { namespace hfe {

class UdpSocket {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual bool getPeerIp(int id, std::string& out);
};

class GameServer {
public:
    char _pad[0xb0];
    UdpSocket* udpSocket;
    void* getClient(unsigned int id) const;
    bool getPlayerConnectionIp(world::IPlayer* player, std::string& out);
};

bool GameServer::getPlayerConnectionIp(world::IPlayer* player, std::string& out) {
    int id = player->getID();
    char* client = (char*)getClient(id);
    if (client == 0)
        return false;
    if (!udpSocket->getPeerIp(*(int*)(client + 0xf0), out))
        return false;
    size_t pos = out.find(":", 0, 1);
    if (pos == 0)
        return true;
    std::string s("");
    s = out.substr(0, pos);
    out = s;
    return true;
}

} }

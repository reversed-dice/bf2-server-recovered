// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x84ae90
#include <string>
#include <cstring>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};

class IPlayer;

class IGameServer : public IBase {
public:
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
    virtual void getAddress(IPlayer* p, std::string& out);
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void sendToClient(const char* addr, unsigned short port, const void* data, int len);
};

namespace world {
class PlayerManager {
public:
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual IPlayer* getPlayer(int id);
};
}

extern IBase* game;
extern const unsigned int IID_IGameServer;
extern world::PlayerManager* playerManager;

} }

extern "C" long __strtol_internal(const char*, char**, int, int);

extern "C" void PB_sv_sendToClient(unsigned int id, const void* data, int size)
{
    using namespace dice::hfe;
    std::string s;
    int port = 0;
    if (game) {
        IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
        if (gs) {
            IPlayer* p = playerManager->getPlayer(id);
            gs->getAddress(p, s);
            std::string::size_type pos = s.find(":", 0, 1);
            if (pos != std::string::npos) {
                std::string portStr("");
                portStr.assign(s.substr(pos + 1, s.size()));
                port = (int)__strtol_internal(portStr.c_str(), 0, 10, 0);
                std::string addr("");
                addr.assign(s.substr(0, pos));
                s.assign(addr);
            }
            char buf[1600] = "\xff\xff\xff\xff";
            memcpy(buf + 4, data, size);
            gs->sendToClient(s.c_str(), (unsigned short)port, buf, size + 4);
        }
    }
}

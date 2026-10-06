// FUNCTION: BF2 0x420180
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};
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
    virtual void changePlayerName(unsigned char id, const std::string& name);
};
extern IBase* game;
extern const unsigned int IID_IGameServer;

class ChangePlayerNameEvent {
public:
    virtual ~ChangePlayerNameEvent();
    bool executeServer(int client);
    char _pad[0x8];
    char m_name[0x20];
    unsigned char m_playerId;
};

bool ChangePlayerNameEvent::executeServer(int client)
{
    IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    if (!gs || m_playerId != client)
        return false;
    gs->changePlayerName(m_playerId, std::string(m_name));
    return true;
}

} }

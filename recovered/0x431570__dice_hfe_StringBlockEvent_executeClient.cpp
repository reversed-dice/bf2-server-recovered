// FUNCTION: BF2 0x431570
namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase* queryInterface(unsigned int iid) const;
};
class IDataBlockManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void requestBlock(int id, int size);
    virtual void receiveBlock(const char* data, unsigned char size);
};
class IStringManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void useString(unsigned char id);
    virtual void addString(const char* text, unsigned char len, bool remote);
};
class IConnection {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual IDataBlockManager* getDataBlockManager();
    virtual IStringManager* getStringManager();
};
class IGameClient : public IBase {
public:
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual IConnection* getConnection();
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
    virtual void v14();
    virtual IConnection* getConnection(int client);
};
extern IBase* game;
extern const unsigned int IID_IGameClient;
extern const unsigned int IID_IGameServer;

class StringBlockEvent {
public:
    virtual ~StringBlockEvent();
    bool executeClient();
    bool executeServer(int client);
    char _pad[0x8];
    bool m_isId;
    unsigned char m_id;
    unsigned char m_len;
    char m_text[256];
};

bool StringBlockEvent::executeClient()
{
    IGameClient* gc = static_cast<IGameClient*>(game->queryInterface(IID_IGameClient));
    if (!gc)
        return false;
    IConnection* c = gc->getConnection();
    if (c) {
        if (m_isId) {
            c->getStringManager()->useString(m_id);
            return true;
        }
        c->getStringManager()->addString(m_text, m_len, true);
    }
    return true;
}

bool StringBlockEvent::executeServer(int client)
{
    IGameServer* gs = static_cast<IGameServer*>(game->queryInterface(IID_IGameServer));
    if (!gs)
        return false;
    IConnection* c = gs->getConnection(client);
    if (c) {
        if (m_isId) {
            c->getStringManager()->useString(m_id);
            return true;
        }
        c->getStringManager()->addString(m_text, m_len, false);
    }
    return true;
}

} }

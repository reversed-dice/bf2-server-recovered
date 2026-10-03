// FUNCTION: BF2 0x4252c0
namespace dice { namespace hfe {

class IConnection;

class IGameServer {
public:
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual IConnection* getConnection(int playerId) = 0;
};

class IConnection {
public:
    virtual void v00() = 0;
    virtual void v01() = 0;
    virtual void v02() = 0;
    virtual void v03() = 0;
    virtual void v04() = 0;
    virtual void v05() = 0;
    virtual void v06() = 0;
    virtual void v07() = 0;
    virtual void v08() = 0;
    virtual void v09() = 0;
    virtual void v10() = 0;
    virtual void disconnectPlayer(unsigned char kick) = 0;
};

class DestroyPlayerEvent {
public:
    // offset 0x00: vptr (virtual method)
    int m_pad1;       // offset 0x08
    int m_pad2;       // offset 0x0C
    bool m_flag;      // offset 0x10
public:
    virtual bool executeClient();
};

bool DestroyPlayerEvent::executeClient() {
    IGameServer* server = *reinterpret_cast<IGameServer**>(0x010c5420);
    int playerId = *reinterpret_cast<int*>(0x00c76020);
    IConnection* conn = server->getConnection(playerId);
    if (!conn)
        return false;
    conn->disconnectPlayer(m_flag);
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_DestroyPlayerEvent_executeClient (0x4252c0)
// FUNCTION: BF2 0x848030
// VOIP::CVoipRouterInstance::SetClientData(VOIP::ClientData const&)

namespace VOIP {

struct ClientData
{
    unsigned short sessionId;
    char pad0[10];
    unsigned char channel;
};

class CClients
{
public:
    int Add(unsigned short sessionId, ClientData const& data);
    void Remove(unsigned short sessionId);
};

class COutgoingChannels
{
public:
    virtual ~COutgoingChannels();
    void RemoveSessionId(unsigned short sessionId);
    int AddSessionIdToChannel(unsigned char channel, unsigned short sessionId);
};

class CVoipRouterInstance
{
public:
    int SetClientData(ClientData const& data);

private:
    char pad0[0x810];
    COutgoingChannels m_outgoingChannels;
    char pad1[0x30];
    CClients m_clients;
};

int CVoipRouterInstance::SetClientData(ClientData const& data)
{
    m_clients.Remove(data.sessionId);
    m_outgoingChannels.RemoveSessionId(data.sessionId);
    int result = m_clients.Add(data.sessionId, data);
    if (result == 1)
    {
        if (m_outgoingChannels.AddSessionIdToChannel(data.channel, data.sessionId) == 0)
            result = 0;
    }
    return result;
}

}

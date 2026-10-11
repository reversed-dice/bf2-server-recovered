// FUNCTION: BF2 0x845350
#include <map>
#include <vector>

namespace VOIP
{
    struct ChannelEntry
    {
        unsigned char b[24];
    };

    struct ClientData
    {
        char pad00[0x10];
        std::vector<ChannelEntry> m_list;      // +0x10
        unsigned int m_index;                  // +0x28
        char pad2c[4];
        std::vector<unsigned char> m_bytes;    // +0x30
        unsigned char m_flag;                  // +0x48
    };

    class CClients
    {
    public:
        int SelectOutgoingSingleChannelSet(unsigned short sessionId, unsigned int index);

    private:
        char pad0[8];
        std::map<unsigned short, ClientData> m_clients;   // +8
    };
}

int VOIP::CClients::SelectOutgoingSingleChannelSet(unsigned short sessionId, unsigned int index)
{
    int result = -1;
    std::map<unsigned short, ClientData>::iterator it = m_clients.find(sessionId);

    if (it != m_clients.end())
    {
        it->second.m_flag = 0;
        it->second.m_bytes.clear();

        if (index < it->second.m_list.size())
        {
            it->second.m_index = index;
            result = 1;
        }
    }
    return result;
}

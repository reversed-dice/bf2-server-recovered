// FUNCTION: BF2 0x8453f0
// BF2_FLAGS: -fno-if-conversion -fno-if-conversion2
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
        int SelectOutgoingMultiChannelSet(unsigned short sessionId, const std::vector<unsigned char> &data);

    private:
        char pad0[8];
        std::map<unsigned short, ClientData> m_clients;   // +8
    };
}

int VOIP::CClients::SelectOutgoingMultiChannelSet(unsigned short sessionId, const std::vector<unsigned char> &data)
{
    int result = -1;
    std::map<unsigned short, ClientData>::iterator it = m_clients.find(sessionId);

    if (it != m_clients.end())
    {
        it->second.m_flag = 1;
        it->second.m_bytes.clear();

        for (unsigned int i = 0; data.size() > i; ++i)
        {
            if (data[i] >= it->second.m_list.size())
                goto done;

            it->second.m_bytes.push_back(data[i]);
        }

        result = 1;
    }
done:
    return result;
}

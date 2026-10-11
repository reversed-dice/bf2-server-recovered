// FUNCTION: BF2 0x847a50
#include <map>
#include <vector>

namespace VOIP
{
    typedef std::vector<unsigned short> SessionIdArray;

    class COutgoingChannels
    {
    public:
        virtual ~COutgoingChannels();
        int RemoveSessionId(unsigned short sessionId);
        int RemoveSessionIdFromArray(SessionIdArray *arr, unsigned short sessionId);
        SessionIdArray *GetChannelSessionIdArray(unsigned char channel);

    private:
        std::map<unsigned char, SessionIdArray> m_outgoingChannels;
    };
}

int VOIP::COutgoingChannels::RemoveSessionId(unsigned short sessionId)
{
    int result = -1;
    std::map<unsigned char, SessionIdArray>::iterator it;

    for (it = m_outgoingChannels.begin(); it != m_outgoingChannels.end(); ++it)
    {
        if (RemoveSessionIdFromArray(&it->second, sessionId) == 1)
        {
            SessionIdArray *arr = GetChannelSessionIdArray(it->first);
            if (arr == 0)
                break;
            if (arr->size() == 0)
                m_outgoingChannels.erase(it);
            result = 1;
            break;
        }
    }
    return result;
}

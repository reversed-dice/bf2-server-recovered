// FUNCTION: BF2 0x8476b0
#include <map>
namespace VOIP { struct SessionIdArray { char b[16]; }; }

struct VOIP_COutgoingChannels {
    void* pad0;
    std::map<unsigned char, VOIP::SessionIdArray> m_channels;
};

bool VOIP_COutgoingChannels_Reset(VOIP_COutgoingChannels* c) {
    c->m_channels.clear();
    return true;
}

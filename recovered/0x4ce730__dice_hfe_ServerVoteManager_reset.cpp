// FUNCTION: BF2 0x4ce730
namespace dice { namespace hfe { 

class ServerVoteManager {
public:
    bool m_0;
    char _pad1[0x3];
    float m_4;
    char _pad8[0x78];
    bool m_80;
    char _pad81[0x3];
    int m_84;
    char _pad88[0x88];
    bool m_110;
    char _pad111[0x3];
    float m_114;
    char _pad118[0x78];
    bool m_190;
    char _pad191[0x3];
    float m_194;
    char _pad198[0xf8];
    bool m_290;
    char _pad291[0x3];
    float m_294;
    char _pad298[0x78];
    bool m_310;
    char _pad311[0x3];
    float m_314;
    void reset();
};

void ServerVoteManager::reset()
{
    m_110 = false;
    m_190 = false;
    m_114 = 0.0f;
    m_194 = 0.0f;
    m_290 = false;
    m_294 = 0.0f;
    m_310 = false;
    m_314 = 0.0f;
    m_0 = false;
    m_4 = 0.0f;
    m_80 = false;
    m_84 = 0;
}

}}

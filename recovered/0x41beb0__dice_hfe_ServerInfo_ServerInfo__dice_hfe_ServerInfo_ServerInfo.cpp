// FUNCTION: BF2 0x41beb0
namespace dice { namespace hfe {

class ServerInfoBlock {
public:
    void* _first;
    char _pad[0x68];
    ServerInfoBlock();
};

class ServerInfo {
public:
    unsigned char m_dirtyFlag;
    ServerInfoBlock m_block;
    unsigned long long m_field78;
    unsigned long long m_field80;
    unsigned long long m_field88;

    ServerInfo();
};

ServerInfo::ServerInfo() : m_dirtyFlag(0) {
    unsigned long long* p = &m_field78;
    m_field78 = 0;
    p[1] = 0;
    p[2] = 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerInfo_ServerInfo (0x41beb0)
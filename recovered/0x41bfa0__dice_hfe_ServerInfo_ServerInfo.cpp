// FUNCTION: BF2 0x41bfa0
namespace dice { namespace hfe {

class ServerInfoBlock {
public:
    char _pad[0x70];
    ServerInfoBlock();
};

class ServerInfo {
public:
    unsigned char m_dirtyFlag;
    char _pad[7];
    ServerInfoBlock m_block;
    void* m_field78;
    void* m_field80;
    void* m_field88;

    ServerInfo();
};

ServerInfo::ServerInfo()
    : m_dirtyFlag(0)
{
    void** p = &m_field78;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}

} }

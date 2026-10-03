// FUNCTION: BF2 0x43ba90
namespace dice { namespace hfe {

class ClientConnection {
public:
    ClientConnection(unsigned int);
    char _pad[0x1DC];
};

class ServerConnection_ServerConnection : public ClientConnection {
public:
    unsigned char m_unk_0x1DC;
    unsigned char __pad_0x1DD[0x0B];
    unsigned int m_unk_0x3D;
    unsigned int m_unk_0x1EC;
    unsigned int m_unk_0x3E;

    ServerConnection_ServerConnection(unsigned int);
};

ServerConnection_ServerConnection::ServerConnection_ServerConnection(unsigned int demoMode)
    : ClientConnection(demoMode)
{
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2f350);
    m_unk_0x1DC = 1;
    m_unk_0x1EC = 0;
    m_unk_0x3D = 0;
    m_unk_0x3E = 0xffffffff;
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerConnection_ServerConnection_dice_hfe_ConnectionDemoMode (0x43ba90)
// FUNCTION: BF2 0x43ba50
namespace dice { namespace hfe {

class ClientConnection_ClientConnection {
public:
    ClientConnection_ClientConnection(unsigned int mode);
};

class ServerConnection_ServerConnection : public ClientConnection_ClientConnection {
public:
    unsigned char m_unk_0x1DC;
    char _pad_0x1DD[11];
    unsigned int m_unk_0x3D;
    unsigned int m_unk_0x1EC;
    unsigned int m_unk_0x3E;

    ServerConnection_ServerConnection(unsigned int mode);
};

ServerConnection_ServerConnection::ServerConnection_ServerConnection(unsigned int mode)
    : ClientConnection_ClientConnection(mode)
{
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2f350);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x1DC) = 1;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x1EC) = 0;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x1E8) = 0;
    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x1F0) = 0xffffffff;
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerConnection_ServerConnection_dice_hfe_ConnectionDemoMode (0x43ba50)
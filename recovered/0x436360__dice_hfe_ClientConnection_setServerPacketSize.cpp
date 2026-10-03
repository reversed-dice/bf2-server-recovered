// FUNCTION: BF2 0x436360
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x198];
    int field;
    void setServerPacketSize(int v);
};
void ClientConnection::setServerPacketSize(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_setServerPacketSize (0x436360)

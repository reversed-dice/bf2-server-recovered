// FUNCTION: BF2 0x436370
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x198];
    int field;
    int getServerPacketSize() const;
};
int ClientConnection::getServerPacketSize() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getServerPacketSize (0x436370)

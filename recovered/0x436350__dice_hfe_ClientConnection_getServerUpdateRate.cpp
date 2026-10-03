// FUNCTION: BF2 0x436350
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x190];
    int field;
    int getServerUpdateRate() const;
};
int ClientConnection::getServerUpdateRate() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getServerUpdateRate (0x436350)

// FUNCTION: BF2 0x436330
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x188];
    int field;
    int getConnectionType() const;
};
int ClientConnection::getConnectionType() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getConnectionType (0x436330)

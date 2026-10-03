// FUNCTION: BF2 0x436430
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x1e0];
    int field;
    int getDemoMode() const;
};
int ClientConnection::getDemoMode() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getDemoMode (0x436430)

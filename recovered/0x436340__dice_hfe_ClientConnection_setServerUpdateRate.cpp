// FUNCTION: BF2 0x436340
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x190];
    int field;
    void setServerUpdateRate(int v);
};
void ClientConnection::setServerUpdateRate(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_setServerUpdateRate (0x436340)

// FUNCTION: BF2 0x436460
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x1e4];
    bool field;
    void setContentValid(bool v);
};
void ClientConnection::setContentValid(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_setContentValid (0x436460)

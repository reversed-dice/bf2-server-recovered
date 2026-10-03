// FUNCTION: BF2 0x436260
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x10];
    void* field;
    void* getPlayer() const;
};
void* ClientConnection::getPlayer() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getPlayer (0x436260)

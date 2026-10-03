// FUNCTION: BF2 0x4391b0
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x48];
    void* field;
    void* getStringManager() const;
};
void* ClientConnection::getStringManager() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getStringManager (0x4391b0)

// FUNCTION: BF2 0x4391a0
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x50];
    void* field;
    void* getDataBlockManager() const;
};
void* ClientConnection::getDataBlockManager() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getDataBlockManager (0x4391a0)

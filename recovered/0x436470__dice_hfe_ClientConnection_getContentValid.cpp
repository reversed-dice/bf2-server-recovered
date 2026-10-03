// FUNCTION: BF2 0x436470
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x1e4];
    bool field;
    int getContentValid() const;
};
int ClientConnection::getContentValid() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_ClientConnection_getContentValid (0x436470)

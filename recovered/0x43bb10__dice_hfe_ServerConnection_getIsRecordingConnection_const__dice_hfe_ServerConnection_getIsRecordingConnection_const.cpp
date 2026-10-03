// FUNCTION: BF2 0x43bb10
namespace dice { namespace hfe {

class ClientConnection {
public:
    int getDemoMode() const;
};

class ServerConnection : public ClientConnection {
public:
    bool getIsRecordingConnection() const;
};

bool ServerConnection::getIsRecordingConnection() const {
    return getDemoMode() == 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerConnection_getIsRecordingConnection_const (0x43bb10)
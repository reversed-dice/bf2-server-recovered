// FUNCTION: BF2 0x7d0880
#include <string>

namespace dice { namespace hfe { namespace io {

class INetServer { };

class NetServer : public INetServer {
public:
    bool checkReconnectPassword(char* password);
private:
    char _pad0[0x518];
    std::string m_reconnectPassword;
};

bool NetServer::checkReconnectPassword(char* password) {
    if (m_reconnectPassword.compare("") == 0)
        return true;
    for (unsigned long i = 0; i < 4; ++i) {
        if (password[i] != m_reconnectPassword[i])
            return false;
    }
    return true;
}
}}}

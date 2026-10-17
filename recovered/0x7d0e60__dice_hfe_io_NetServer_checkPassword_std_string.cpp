// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7d0e60
#include <string>

namespace dice { namespace hfe { namespace io {

class NetServer {
public:
    unsigned char _pad[0x510];
    std::string m_password;
    bool checkPassword(const std::string& password);
};

bool NetServer::checkPassword(const std::string& password) {
    if (m_password.compare("") == 0) {
        return true;
    }
    if (password == m_password) {
        return true;
    }
    return false;
}

} } }

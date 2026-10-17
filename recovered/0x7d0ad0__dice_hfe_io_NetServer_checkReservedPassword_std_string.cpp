// FUNCTION: BF2 0x7d0ad0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io {

class NetServer {
public:
    unsigned char _pad[0x520];
    std::string m_reservedPassword;
    bool checkReservedPassword(const std::string& password);
};

bool NetServer::checkReservedPassword(const std::string& password) {
    if (m_reservedPassword.compare("") == 0) {
        return true;
    }
    if (password == m_reservedPassword) {
        return true;
    }
    return false;
}

} } }

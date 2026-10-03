// FUNCTION: BF2 0x7d06d0
#include <string>

namespace dice { namespace hfe { namespace io {
class NetServer {
public:
    unsigned char _pad[0x500];
    std::string m_str;
    std::string NetServer_getName() const;
};
std::string NetServer::NetServer_getName() const {
    return m_str;
}
} } }

// FUNCTION: BF2 0x7dab10
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <netinet/in.h>
#include <arpa/inet.h>

namespace dice { namespace hfe { namespace io {

class UDPSocket {
public:
    static void stringToNameAndPort(std::string const&, std::string*, unsigned short*);
    static bool stringToAddress(std::string const& name, sockaddr_in* out);
};

bool UDPSocket::stringToAddress(std::string const& name, sockaddr_in* out) {
    unsigned short port;
    std::string host;
    *out = sockaddr_in();
    stringToNameAndPort(name, &host, &port);
    if (host.size() == 0)
        out->sin_addr.s_addr = 0;
    else
        out->sin_addr.s_addr = inet_addr(host.c_str());
    out->sin_family = AF_INET;
    out->sin_port = (unsigned short)((unsigned short)(port << 8) | (unsigned short)(port >> 8));
    return true;
}

} } }

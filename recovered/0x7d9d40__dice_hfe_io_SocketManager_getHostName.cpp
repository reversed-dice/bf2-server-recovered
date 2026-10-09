// FUNCTION: BF2 0x7d9d40
#include <string>
extern "C" int gethostname(char*, unsigned long);
namespace dice { namespace hfe { namespace io {

class SocketManager {
public:
    std::string getHostName();
};

std::string SocketManager::getHostName()
{
    char buf[256];
    gethostname(buf, 0x100);
    return std::string(buf);
}

} } }

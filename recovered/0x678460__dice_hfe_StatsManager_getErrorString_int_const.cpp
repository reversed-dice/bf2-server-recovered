// FUNCTION: BF2 0x678460
#include <string>
namespace dice { namespace hfe {

class StatsManager {
public:
    std::string getErrorString(int code) const;
};

std::string StatsManager::getErrorString(int code) const {
    switch (code) {
    case 2:
        return std::string("unable to resolve DNS");
    case 1:
        return std::string("unable to create data socket");
    case 3:
        return std::string("unable to connect to stats server");
    case 5:
        return std::string("unable to recieve challenge from stats server, or bad challenge");
    default:
        return std::string("unknown error");
    }
}

} }

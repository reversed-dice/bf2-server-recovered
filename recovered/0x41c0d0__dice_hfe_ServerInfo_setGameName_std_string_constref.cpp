// FUNCTION: BF2 0x41c0d0
#include <string>

namespace dice { namespace hfe {

class ServerInfo {
public:
    char _pad[0x8];
    std::string m_gameName; // +0x8

    void setGameName(std::string const& name);
    void internalSetDirty();
};

void ServerInfo::setGameName(std::string const& name)
{
    m_gameName = name.substr(0, 0x20);
    internalSetDirty();
}

} }

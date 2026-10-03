// FUNCTION: BF2 0x468aa0
#include <string>

namespace dice { namespace hfe {

class ServerInfo {
public:
    void setWelcomeMsg(int param, const std::string& msg);
};

class ServerSettings {
    unsigned char _pad0[0x28];
    std::string m_welcomeMessage; // offset 0x28
public:
    __attribute__((noreturn)) void setWelcomeMessage(const std::string& msg);
};

extern ServerInfo* g_serverInfo;

__attribute__((noreturn)) void ServerSettings::setWelcomeMessage(const std::string& msg) {
    g_serverInfo->setWelcomeMsg(0, msg);
    m_welcomeMessage.assign(msg);
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ServerSettings::setWelcomeMessage_std_string_constref (0x468aa0)
// FUNCTION: BF2 0x468aa0
#include <string>

namespace dice { namespace hfe {

void ServerInfo_setWelcomeMsg_int_std_string_constref(void*, unsigned int, const std::string&);
extern void* dice_hfe_serverInfo;

class ServerSettings {
public:
    void setWelcomeMessage(const std::string& msg);
private:
    char _pad[0x28];
    std::string m_welcomeMessage;
};

void ServerSettings::setWelcomeMessage(const std::string& msg) {
    ServerInfo_setWelcomeMsg_int_std_string_constref(dice_hfe_serverInfo, 0, msg);
    m_welcomeMessage.assign(msg);
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setWelcomeMessage_std_string_constref (0x468aa0)
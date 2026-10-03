// FUNCTION: BF2 0x4687e0
#include <string>

namespace dice { namespace hfe {

const std::string& getEmptyString();

class ServerSettings {
public:
    const std::string& getPassword() const;

private:
    char _pad0[0x10];                // offset 0x00
    std::string m_password;          // offset 0x10
    char _pad_after_string[0x18];    // offset 0x18
    char _pad1[0x115];               // offset 0x30
    bool m_passwordDisabled;         // offset 0x145
};

const std::string& ServerSettings::getPassword() const {
    if (m_passwordDisabled)
        return getEmptyString();
    return m_password;
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getPassword_const (0x4687e0)
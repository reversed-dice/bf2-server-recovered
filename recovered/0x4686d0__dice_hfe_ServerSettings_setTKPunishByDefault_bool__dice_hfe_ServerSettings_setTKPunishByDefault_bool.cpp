// FUNCTION: BF2 0x4686d0
extern "C" {
    extern void* dice_hfe_serverInfo;
}

namespace dice { namespace hfe {

class ServerInfo {
public:
    void internalSetDirty();
private:
    unsigned char pad_2c[0x2c];
public:
    unsigned char m_flagAt0x2c;
};

class ServerSettings {
public:
    void setTKPunishByDefault(unsigned char value);
private:
    unsigned char pad_c8[0xc8];
    unsigned char m_tkPunishByDefault;
};

void ServerSettings::setTKPunishByDefault(unsigned char value) {
    m_tkPunishByDefault = value;
    ServerInfo* info = static_cast<ServerInfo*>(dice_hfe_serverInfo);
    info->m_flagAt0x2c = value;
    info->internalSetDirty();
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setTKPunishByDefault_bool (0x4686d0)
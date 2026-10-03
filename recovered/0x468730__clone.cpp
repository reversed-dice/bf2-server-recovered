// FUNCTION: BF2 0x468730
namespace dice { namespace hfe {

class ServerInfo;

class ServerSettings {
    unsigned char __pad_000[0x13c];
public:
    int m_radioSpamInterval;

    void setRadioSpamInterval(int interval);
};

class ServerInfo {
    unsigned char __pad_000[0x40];
public:
    int m_radioSpamInterval;

    void internalSetDirty();
};

extern ServerInfo* dice_hfe_serverInfo;

void ServerSettings::setRadioSpamInterval(int interval) {
    m_radioSpamInterval = interval;
    ServerInfo* si = dice_hfe_serverInfo;
    si->m_radioSpamInterval = interval;
    si->internalSetDirty();
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setRadioSpamInterval_int (0x468710)
// FUNCTION: BF2 0x468800
namespace dice { namespace hfe {

class ServerSettings {
    char _pad1[0x80];
    unsigned int m_numNeeded;
    char _pad2[0xC1];
    unsigned char m_overrideEnabled;
public:
    unsigned int getNumPlayersNeededToStart() const;
    int getNumPlayersNeededToStartOverride() const;
};

unsigned int ServerSettings::getNumPlayersNeededToStart() const {
    if (m_overrideEnabled) {
        return (getNumPlayersNeededToStartOverride() >= 33) ? 8u : 6u;
    }
    return m_numNeeded;
}

int ServerSettings::getNumPlayersNeededToStartOverride() const {
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getNumPlayersNeededToStart_const (0x468800)
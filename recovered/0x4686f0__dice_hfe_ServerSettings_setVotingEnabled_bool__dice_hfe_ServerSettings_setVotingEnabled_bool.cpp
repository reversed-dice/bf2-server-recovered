// FUNCTION: BF2 0x4686f0
namespace dice { namespace hfe {

class ServerInfo {
    char pad_00[0x4b];
public:
    bool m_dirtyFlag;
    void internalSetDirty();
};

extern ServerInfo* serverInfo;

class ServerSettings {
    char pad_00[0x3c];
public:
    unsigned char m_votingEnabled;
    void setVotingEnabled(bool enabled);
};

void ServerSettings::setVotingEnabled(bool enabled) {
    m_votingEnabled = enabled;
    serverInfo->m_dirtyFlag = enabled != 0;
    serverInfo->internalSetDirty();
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setVotingEnabled_bool (0x4686f0)
// FUNCTION: BF2 0x4687c0
namespace dice { namespace hfe {

class ServerSettings {
    char pad_0000_0047[0x48];
public:
    bool m_teamVoteOnly;
    void setTeamVoteOnly(bool value);
};

class ServerInfo {
    char pad_0000_004e[0x4f];
public:
    bool m_teamVoteOnly;
    void internalSetDirty();
};

extern ServerInfo* serverInfo;

void ServerSettings::setTeamVoteOnly(bool value) {
    m_teamVoteOnly = value;
    serverInfo->m_teamVoteOnly = value;
    serverInfo->internalSetDirty();
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setTeamVoteOnly_bool (0x4687c0)
// FUNCTION: BF2 0x468950
namespace dice { namespace hfe {

class ServerSettings {
public:
    int getSvPunkBuster() const;

private:
    char _pad0[0x18];
    bool m_svPunkBuster;
    char _pad1[0x12B];
    bool m_punkBusterClientConnected;
    bool m_punkBusterDllLoaded;
};

int ServerSettings::getSvPunkBuster() const {
    if (!m_svPunkBuster) goto end;
    if (!m_punkBusterDllLoaded) goto check_client;
ret1:
    return 1;
check_client:
    if (m_punkBusterClientConnected) goto ret1;
end:
    return 0;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getSvPunkBuster_const (0x468950)
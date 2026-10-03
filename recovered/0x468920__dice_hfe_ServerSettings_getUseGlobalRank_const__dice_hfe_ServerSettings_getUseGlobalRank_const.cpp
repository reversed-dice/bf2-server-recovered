// FUNCTION: BF2 0x468920
namespace dice { namespace hfe {

class ServerSettings {
public:
    unsigned int getUseGlobalRank() const;

private:
    unsigned char _pad_00[0x18];
    unsigned char m_active;
    unsigned char _pad_19[0x12C];
    unsigned char m_rankEnabled;
    unsigned char m_useGlobalRank;
};

unsigned int ServerSettings::getUseGlobalRank() const {
    if (m_rankEnabled == 0) goto exit;
    if (m_active == 0) goto exit;
    if (m_useGlobalRank == 0) goto exit;
    return 1;
exit:
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getUseGlobalRank_const (0x468920)
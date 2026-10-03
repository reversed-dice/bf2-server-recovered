// FUNCTION: BF2 0x468730
namespace dice { namespace hfe {

struct ServerInfo {
    unsigned char _pad[0x40];
    int field_0x40;
    void internalSetDirty();
};

struct ServerSettings {
    unsigned char _pad[0x13c];
    int radioMaxSpamFlagCount;
    void setRadioMaxSpamFlagCount(int count);
};

void ServerSettings::setRadioMaxSpamFlagCount(int count) {
    radioMaxSpamFlagCount = count;
    ServerInfo* si = *reinterpret_cast<ServerInfo**>(0x0108a340);
    si->field_0x40 = count;
    si->internalSetDirty();
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setRadioMaxSpamFlagCount_int (0x468730)
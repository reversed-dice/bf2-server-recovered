// FUNCTION: BF2 0x468650
namespace dice { namespace hfe {

class ServerInfo {
public:
    void internalSetDirty();
};

class ServerSettings {
public:
    void setAllowExternalViews(unsigned char val);
};

void ServerSettings::setAllowExternalViews(unsigned char val) {
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x78) = val;
    ServerInfo* si = *reinterpret_cast<ServerInfo**>(0x0108a340);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(si) + 0x2d) = val;
    si->internalSetDirty();
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setAllowExternalViews_bool (0x468670)
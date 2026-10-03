// FUNCTION: BF2 0x4686b0
namespace dice { namespace hfe {

extern "C" void dice_hfe_ServerInfo_internalSetDirty(void* si);

class ServerSettings {
public:
    void setHitIndicator(bool value);
private:
    bool m_hitIndicator; // offset 0x7b
};

void ServerSettings::setHitIndicator(bool value) {
    *(bool*)((char*)this + 0x7b) = value;
    void* si = *(void**)(0x0108a340);
    *(bool*)((char*)si + 0x2b) = value;
    dice_hfe_ServerInfo_internalSetDirty(si);
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setHitIndicator_bool (0x4686b0)
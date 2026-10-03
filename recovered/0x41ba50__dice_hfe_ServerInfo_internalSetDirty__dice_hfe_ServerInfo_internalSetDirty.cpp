// FUNCTION: BF2 0x41ba50
class dice_hfe_ServerInfo {
public:
    bool m_isDirty;          // offset 0x00

    void internalSetDirty();
};

void dice_hfe_ServerInfo::internalSetDirty() {
    m_isDirty = true;
}
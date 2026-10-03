// FUNCTION: BF2 0x41ba80
class dice_hfe_ServerInfo {
public:
    bool m_isDirty;          // offset 0x00

    void setDirty(bool);
};

void dice_hfe_ServerInfo::setDirty(bool dirty) {
    m_isDirty = dirty;
}

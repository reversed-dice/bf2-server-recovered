// FUNCTION: BF2 0x41ba70
class dice_hfe_ServerInfo {
public:
    bool m_isDirty;          // offset 0x00

    bool isDirty() const;
};

bool dice_hfe_ServerInfo::isDirty() const {
    return m_isDirty;
}

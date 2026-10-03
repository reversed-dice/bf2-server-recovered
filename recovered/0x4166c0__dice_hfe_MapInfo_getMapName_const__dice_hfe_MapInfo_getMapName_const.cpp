// FUNCTION: BF2 0x4166c0
class dice_hfe_MapInfo {
public:
    unsigned char __pad_00[0x10];
    char m_field_10[32];

    const char* getMapName() const;
};

const char* dice_hfe_MapInfo::getMapName() const {
    return reinterpret_cast<const char*>(m_field_10);
}
// REVERSED_FUNCTION: dice_hfe_MapInfo_getMapName_const::dice_hfe_MapInfo_getMapName_const (0x4166c0)
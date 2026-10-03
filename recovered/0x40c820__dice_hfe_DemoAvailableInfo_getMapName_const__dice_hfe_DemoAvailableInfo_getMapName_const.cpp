// FUNCTION: BF2 0x40c820
class dice_hfe_DemoAvailableInfo {
public:
    char _pad[8];
    char m_field_8[32];

    const char* getMapName() const;
};

const char* dice_hfe_DemoAvailableInfo::getMapName() const {
    return reinterpret_cast<const char*>(&m_field_8);
}
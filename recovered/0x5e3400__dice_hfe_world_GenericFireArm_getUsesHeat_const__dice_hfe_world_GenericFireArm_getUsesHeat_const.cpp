// FUNCTION: BF2 0x5e3400
namespace dice { namespace hfe { namespace world {

class WeaponHeatInfo {
private:
    char m_pad0[0x238];
public:
    float m_maxHeat;
};

class GenericFireArm {
public:
    bool getUsesHeat() const;
private:
    char m_pad0[0x330];
    WeaponHeatInfo* m_heatInfo;
};

bool GenericFireArm::getUsesHeat() const {
    return m_heatInfo->m_maxHeat > 0.0f;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getUsesHeat_const (0x5e3400)
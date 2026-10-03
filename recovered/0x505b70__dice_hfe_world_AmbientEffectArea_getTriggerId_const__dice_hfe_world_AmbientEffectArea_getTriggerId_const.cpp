// FUNCTION: BF2 0x505b70
namespace dice { namespace hfe { namespace world {

struct AreaData {
    unsigned char _pad_0x1fc[0x1fc];
    unsigned int m_triggerId;
};

class AmbientEffectArea {
    unsigned char _pad_0x240[0x240];
    AreaData* m_areaData;
public:
    unsigned int getTriggerId() const;
};

unsigned int AmbientEffectArea::getTriggerId() const {
    return m_areaData->m_triggerId;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectArea_getTriggerId_const (0x505b70)
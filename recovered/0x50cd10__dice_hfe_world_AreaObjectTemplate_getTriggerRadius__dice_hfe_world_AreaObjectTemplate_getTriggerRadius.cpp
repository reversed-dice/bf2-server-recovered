// FUNCTION: BF2 0x50cd10
namespace dice { namespace hfe { namespace world {

class AreaObjectTemplate {
public:
    float getTriggerRadius() const;
};

float AreaObjectTemplate::getTriggerRadius() const {
    return *(float*)((char*)this + 0x210);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AreaObjectTemplate_getTriggerRadius (0x50cd10)
// FUNCTION: BF2 0x532c40
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
    unsigned char _pad0[0x240];
public:
    float m_damageWhenLost;

    float getDamageWhenLost() const;
};

float ObjectSpawnerTemplate::getDamageWhenLost() const {
    return m_damageWhenLost;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_getDamageWhenLost (0x532c40)
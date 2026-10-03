// FUNCTION: BF2 0x55d430
namespace dice { namespace hfe { namespace world {

class IObject;

struct SupplyDef {
    unsigned char _pad0[0x204];
    float m_healRate;
};

class SupplyObject {
public:
    bool hasHealAbility() const;
    void heal(IObject* obj);
    void update(float dt);

private:
    unsigned char _pad0[0x238];
    SupplyDef* m_supplyDef;
};

} } }

const float dice_hfe_world_healThreshold = 0.0f;

bool dice::hfe::world::SupplyObject::hasHealAbility() const {
    return m_supplyDef->m_healRate > dice_hfe_world_healThreshold;
}
// REVERSED_FUNCTION: dice_hfe_world_SupplyObject_hasHealAbility (0x55d430)
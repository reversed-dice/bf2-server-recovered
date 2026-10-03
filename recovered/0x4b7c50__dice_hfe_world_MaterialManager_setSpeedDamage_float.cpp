// FUNCTION: BF2 0x4b7c50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4b7c50(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MaterialManager_setSpeedDamage_float (0x4b7c50)

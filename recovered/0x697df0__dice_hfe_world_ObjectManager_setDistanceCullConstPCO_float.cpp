// FUNCTION: BF2 0x697df0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x298];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x697df0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_setDistanceCullConstPCO_float (0x697df0)

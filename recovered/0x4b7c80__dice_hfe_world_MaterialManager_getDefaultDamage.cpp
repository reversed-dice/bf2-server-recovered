// FUNCTION: BF2 0x4b7c80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x4c];
    float m_v;
    float get() { return m_v; }
};
float get_0x4b7c80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MaterialManager_getDefaultDamage (0x4b7c80)

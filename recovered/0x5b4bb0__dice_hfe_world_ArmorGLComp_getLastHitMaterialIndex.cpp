// FUNCTION: BF2 0x5b4bb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5b4bb0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getLastHitMaterialIndex (0x5b4bb0)

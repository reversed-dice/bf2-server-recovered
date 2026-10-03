// FUNCTION: BF2 0x5b4c30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5b4c30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getLastDamageType (0x5b4c30)

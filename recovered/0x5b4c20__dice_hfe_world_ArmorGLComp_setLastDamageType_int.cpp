// FUNCTION: BF2 0x5b4c20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5b4c20(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_setLastDamageType_int (0x5b4c20)

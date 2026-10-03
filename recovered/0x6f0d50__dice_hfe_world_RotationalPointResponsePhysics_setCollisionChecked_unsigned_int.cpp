// FUNCTION: BF2 0x6f0d50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x44];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x6f0d50(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalPointResponsePhysics_setCollisionChecked_unsigned_int (0x6f0d50)

// FUNCTION: BF2 0x697d70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2a0];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x697d70(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_setDrawStats_int (0x697d70)

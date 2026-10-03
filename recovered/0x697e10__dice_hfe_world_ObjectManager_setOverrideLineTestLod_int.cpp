// FUNCTION: BF2 0x697e10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2b0];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x697e10(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_setOverrideLineTestLod_int (0x697e10)

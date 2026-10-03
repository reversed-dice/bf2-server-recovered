// FUNCTION: BF2 0x697e20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2b0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x697e20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_getOverrideLineTestLod (0x697e20)

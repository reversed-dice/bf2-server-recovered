// FUNCTION: BF2 0x5f2d80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5f2d80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetDeviationComp_getRef (0x5f2d80)

// FUNCTION: BF2 0x5f2da0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5f2da0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetDeviationCompTemplate_getRef (0x5f2da0)

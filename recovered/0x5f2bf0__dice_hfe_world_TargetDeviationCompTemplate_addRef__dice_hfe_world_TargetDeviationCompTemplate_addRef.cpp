// FUNCTION: BF2 0x5f2bf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_36(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetDeviationCompTemplate_addRef (36)

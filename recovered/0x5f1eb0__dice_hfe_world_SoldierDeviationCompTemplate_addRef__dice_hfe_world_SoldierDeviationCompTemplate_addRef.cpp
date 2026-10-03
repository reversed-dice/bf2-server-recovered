// FUNCTION: BF2 0x5f1eb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_36(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationCompTemplate_addRef__dice_hfe_world_SoldierDeviationCompTemplate_addRef (36)

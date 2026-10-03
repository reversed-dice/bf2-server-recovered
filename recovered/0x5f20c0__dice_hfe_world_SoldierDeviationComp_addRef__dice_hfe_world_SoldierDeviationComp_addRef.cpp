// FUNCTION: BF2 0x5f20c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_72(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationComp_addRef (72)

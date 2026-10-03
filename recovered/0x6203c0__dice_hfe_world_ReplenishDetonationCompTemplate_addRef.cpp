// FUNCTION: BF2 0x6203c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x100];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_256(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishDetonationCompTemplate_addRef (256)

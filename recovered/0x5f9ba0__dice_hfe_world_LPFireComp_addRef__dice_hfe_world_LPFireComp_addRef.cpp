// FUNCTION: BF2 0x5f9ba0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x160];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_352(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LPFireComp_addRef (352)

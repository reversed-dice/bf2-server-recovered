// FUNCTION: BF2 0x5507c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x250];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_592(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_addRef (592)

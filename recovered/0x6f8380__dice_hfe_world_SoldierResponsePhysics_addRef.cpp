// FUNCTION: BF2 0x6f8380
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb0];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_176(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_addRef (176)

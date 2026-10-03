// FUNCTION: BF2 0x6f8cc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_28(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticResponsePhysics_addRef (28)

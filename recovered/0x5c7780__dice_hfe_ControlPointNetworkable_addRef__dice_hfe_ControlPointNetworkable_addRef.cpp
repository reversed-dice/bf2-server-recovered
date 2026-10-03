// FUNCTION: BF2 0x5c7780
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_112(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ControlPointNetworkable_addRef (112)

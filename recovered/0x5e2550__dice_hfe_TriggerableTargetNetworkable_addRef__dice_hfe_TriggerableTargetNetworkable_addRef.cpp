// FUNCTION: BF2 0x5e2550
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_112(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_TriggerableTargetNetworkable_addRef (112)

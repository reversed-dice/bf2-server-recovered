// FUNCTION: BF2 0x634380
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x298];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_664(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineTemplate_addRef (664)

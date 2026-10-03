// FUNCTION: BF2 0x59cee0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c8];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_456(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EnvMapTemplate_addRef (456)

// FUNCTION: BF2 0x5458d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c8];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_456(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HookLinkTemplate_addRef (456)

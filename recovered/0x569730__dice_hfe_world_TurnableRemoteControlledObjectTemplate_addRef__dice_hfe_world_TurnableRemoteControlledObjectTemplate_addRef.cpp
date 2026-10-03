// FUNCTION: BF2 0x569730
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x218];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_536(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TurnableRemoteControlledObjectTemplate_addRef (536)

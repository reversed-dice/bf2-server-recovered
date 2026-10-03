// FUNCTION: BF2 0x5698d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x260];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_608(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TurnableRemoteControlledObject_addRef (608)

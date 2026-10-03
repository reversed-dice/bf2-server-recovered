// FUNCTION: BF2 0x521b80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5fc];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_1532(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GrapplingHookRopeContainer_addRef (1532)

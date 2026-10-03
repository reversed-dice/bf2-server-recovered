// FUNCTION: BF2 0x541880
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x248];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_584(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_addRef (584)

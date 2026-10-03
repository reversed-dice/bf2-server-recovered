// FUNCTION: BF2 0x5157e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x238];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_568(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableObject_addRef (568)

// FUNCTION: BF2 0x4bb1a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_88(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_addRef (88)

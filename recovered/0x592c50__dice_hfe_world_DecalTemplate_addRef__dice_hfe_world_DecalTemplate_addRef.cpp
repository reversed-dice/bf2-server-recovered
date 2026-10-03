// FUNCTION: BF2 0x592c50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x68];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_104(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DecalTemplate_addRef (104)

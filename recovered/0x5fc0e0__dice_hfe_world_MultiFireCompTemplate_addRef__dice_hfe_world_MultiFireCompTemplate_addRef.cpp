// FUNCTION: BF2 0x5fc0e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8c];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_140(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireCompTemplate_addRef (140)

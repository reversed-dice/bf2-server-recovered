// FUNCTION: BF2 0x517820
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1f4];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_500(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableWindowsBundleTemplate_addRef (500)

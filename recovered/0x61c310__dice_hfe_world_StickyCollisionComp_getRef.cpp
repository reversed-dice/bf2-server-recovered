// FUNCTION: BF2 0x61c310
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x61c310(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StickyCollisionComp_getRef (0x61c310)

// FUNCTION: BF2 0x620490
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x100];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x620490(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishDetonationCompTemplate_getRef (0x620490)

// FUNCTION: BF2 0x528e50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1f4];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x528e50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_KitPartTemplate_getCopyLinksCount (0x528e50)

// FUNCTION: BF2 0x528e40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1f4];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x528e40(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_KitPartTemplate_setCopyLinksCount_int (0x528e40)

// FUNCTION: BF2 0x524970
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x204];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x524970(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemContainerTemplate_setIndex_int (0x524970)

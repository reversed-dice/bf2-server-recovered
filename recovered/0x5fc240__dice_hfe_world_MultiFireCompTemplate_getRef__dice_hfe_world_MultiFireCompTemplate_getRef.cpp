// FUNCTION: BF2 0x5fc240
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5fc240(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireCompTemplate_getRef__dice_hfe_world_MultiFireCompTemplate_getRef (0x5fc240)

// FUNCTION: BF2 0x5bd310
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x90];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5bd310(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HelpHudCompTemplate_getCloseToDistance (0x5bd310)

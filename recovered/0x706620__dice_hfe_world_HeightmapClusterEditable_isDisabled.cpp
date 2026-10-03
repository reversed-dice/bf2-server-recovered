// FUNCTION: BF2 0x706620
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x45];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x706620(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_isDisabled (0x706620)

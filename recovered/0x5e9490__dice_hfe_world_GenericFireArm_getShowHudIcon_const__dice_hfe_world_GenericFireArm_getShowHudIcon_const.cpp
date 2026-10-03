// FUNCTION: BF2 0x5e9490
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x318];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5e9490(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getShowHudIcon_const__dice_hfe_world_GenericFireArm_getShowHudIcon_const (0x5e9490)

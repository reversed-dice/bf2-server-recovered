// FUNCTION: BF2 0x6a3b30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6a3b30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PortalManager_getShowStats_const (0x6a3b30)

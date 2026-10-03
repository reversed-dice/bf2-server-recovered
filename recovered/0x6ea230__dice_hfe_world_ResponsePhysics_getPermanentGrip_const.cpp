// FUNCTION: BF2 0x6ea230
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10d];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6ea230(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ResponsePhysics_getPermanentGrip_const (0x6ea230)

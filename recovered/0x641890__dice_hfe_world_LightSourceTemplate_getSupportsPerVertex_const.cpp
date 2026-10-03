// FUNCTION: BF2 0x641890
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x71];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x641890(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getSupportsPerVertex_const (0x641890)

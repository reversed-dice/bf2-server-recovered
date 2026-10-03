// FUNCTION: BF2 0x6418b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x72];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6418b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getSupportsPerPixel_const (0x6418b0)

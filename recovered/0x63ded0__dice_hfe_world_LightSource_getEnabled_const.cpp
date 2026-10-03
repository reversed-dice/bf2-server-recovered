// FUNCTION: BF2 0x63ded0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x26c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x63ded0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_getEnabled_const (0x63ded0)

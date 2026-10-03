// FUNCTION: BF2 0x61f1b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x61f1b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_getDetonate_const (0x61f1b0)

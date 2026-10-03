// FUNCTION: BF2 0x6421f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6421f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffector_getIsActive_const (0x6421f0)

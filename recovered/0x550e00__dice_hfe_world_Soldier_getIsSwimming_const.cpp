// FUNCTION: BF2 0x550e00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x550e00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getIsSwimming_const (0x550e00)

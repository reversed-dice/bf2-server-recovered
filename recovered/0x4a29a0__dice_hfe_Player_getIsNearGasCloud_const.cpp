// FUNCTION: BF2 0x4a29a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x43d];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4a29a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getIsNearGasCloud_const (0x4a29a0)

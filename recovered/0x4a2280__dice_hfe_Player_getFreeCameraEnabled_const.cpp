// FUNCTION: BF2 0x4a2280
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa8];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4a2280(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getFreeCameraEnabled_const (0x4a2280)

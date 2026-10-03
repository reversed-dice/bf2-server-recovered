// FUNCTION: BF2 0x5158c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x230];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5158c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableWindow_getIsBroken_const (0x5158c0)

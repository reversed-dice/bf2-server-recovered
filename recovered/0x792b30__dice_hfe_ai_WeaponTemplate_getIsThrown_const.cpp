// FUNCTION: BF2 0x792b30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x792b30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponTemplate_getIsThrown_const (0x792b30)

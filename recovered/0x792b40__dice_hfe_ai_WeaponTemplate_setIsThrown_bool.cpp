// FUNCTION: BF2 0x792b40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x792b40(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponTemplate_setIsThrown_bool (0x792b40)

// FUNCTION: BF2 0x770a50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x770a50(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFGame_setIsPrecaching_bool (0x770a50)

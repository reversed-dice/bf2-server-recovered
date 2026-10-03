// FUNCTION: BF2 0x787d20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x787d20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_getBattleStrengths_const (0x787d20)

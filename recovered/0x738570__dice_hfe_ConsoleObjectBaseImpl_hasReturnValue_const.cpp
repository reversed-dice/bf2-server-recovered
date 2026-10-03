// FUNCTION: BF2 0x738570
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x108];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x738570(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_hasReturnValue_const (0x738570)

// FUNCTION: BF2 0x7baef0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24d];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7baef0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_console_InteractiveConsole_getEchoErrors_const (0x7baef0)

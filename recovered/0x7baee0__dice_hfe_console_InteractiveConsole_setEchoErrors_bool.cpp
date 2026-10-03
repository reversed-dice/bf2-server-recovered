// FUNCTION: BF2 0x7baee0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24d];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x7baee0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_console_InteractiveConsole_setEchoErrors_bool (0x7baee0)

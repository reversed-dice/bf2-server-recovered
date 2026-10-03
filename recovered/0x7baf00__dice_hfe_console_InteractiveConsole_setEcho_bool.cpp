// FUNCTION: BF2 0x7baf00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24e];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x7baf00(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_console_InteractiveConsole_setEcho_bool (0x7baf00)

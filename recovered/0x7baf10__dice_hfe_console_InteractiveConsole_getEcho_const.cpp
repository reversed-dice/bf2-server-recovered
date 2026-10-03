// FUNCTION: BF2 0x7baf10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24e];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7baf10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_console_InteractiveConsole_getEcho_const (0x7baf10)

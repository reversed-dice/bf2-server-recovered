// FUNCTION: BF2 0x7b62c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x7b62c0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_Console_setConsoleActive_bool (0x7b62c0)

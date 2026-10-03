// FUNCTION: BF2 0x7b6330
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x222];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x7b6330(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_setEcho_bool (0x7b6330)

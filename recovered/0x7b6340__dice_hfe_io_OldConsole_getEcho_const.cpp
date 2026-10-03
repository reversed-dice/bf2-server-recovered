// FUNCTION: BF2 0x7b6340
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x222];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7b6340(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_getEcho_const (0x7b6340)

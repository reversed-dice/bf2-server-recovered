// FUNCTION: BF2 0x7b6320
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x221];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7b6320(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_getEchoErrors_const (0x7b6320)

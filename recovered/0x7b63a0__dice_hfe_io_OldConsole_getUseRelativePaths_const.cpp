// FUNCTION: BF2 0x7b63a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x184];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x7b63a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_getUseRelativePaths_const (0x7b63a0)

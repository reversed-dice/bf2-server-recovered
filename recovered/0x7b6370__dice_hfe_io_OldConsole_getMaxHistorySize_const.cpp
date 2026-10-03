// FUNCTION: BF2 0x7b6370
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7b6370(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_getMaxHistorySize_const (0x7b6370)

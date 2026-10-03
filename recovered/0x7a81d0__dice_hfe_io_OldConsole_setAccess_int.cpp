// FUNCTION: BF2 0x7a81d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x19c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x7a81d0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_OldConsole_setAccess_int (0x7a81d0)

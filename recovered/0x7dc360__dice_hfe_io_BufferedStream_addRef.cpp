// FUNCTION: BF2 0x7dc360
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_24(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_addRef (24)
